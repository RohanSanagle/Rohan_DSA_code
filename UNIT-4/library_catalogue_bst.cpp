
#include <iostream>
using namespace std;

struct Node
{
    int bookID;
    Node* left;
    Node* right;
};

Node* createNode(int id)
{
    Node* newNode = new Node;
    newNode->bookID = id;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* insert(Node* root, int id)
{
    if (root == NULL)
        return createNode(id);

    if (id < root->bookID)
        root->left = insert(root->left, id);
    else if (id > root->bookID)
        root->right = insert(root->right, id);
    else
        cout << "Book ID already exists.\n";

    return root;
}

Node* findMin(Node* root)
{
    while (root != NULL && root->left != NULL)
        root = root->left;

    return root;
}

Node* deleteBook(Node* root, int id)
{
    if (root == NULL)
        return NULL;

    if (id < root->bookID)
        root->left = deleteBook(root->left, id);
    else if (id > root->bookID)
        root->right = deleteBook(root->right, id);
    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        else if (root->left == NULL)
        {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node* temp = findMin(root->right);
        root->bookID = temp->bookID;
        root->right = deleteBook(root->right, temp->bookID);
    }

    return root;
}

void display(Node* root)
{
    if (root == NULL)
        return;

    display(root->left);
    cout << root->bookID << " ";
    display(root->right);
}

void freeTree(Node* root)
{
    if (root == NULL)
        return;

    freeTree(root->left);
    freeTree(root->right);
    delete root;
}

int main()
{
    Node* root = NULL;
    int choice, id;

    do
    {
        cout << "\n--- Library Catalogue System ---\n";
        cout << "1. Insert Book ID\n";
        cout << "2. Delete Book ID\n";
        cout << "3. Display Catalogue\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter Book ID: ";
                cin >> id;
                root = insert(root, id);
                break;

            case 2:
                cout << "Enter Book ID to delete: ";
                cin >> id;

                if (root == NULL)
                    cout << "Catalogue is empty.\n";
                else
                {
                    Node* temp = root;

                    while (temp != NULL && temp->bookID != id)
                    {
                        if (id < temp->bookID)
                            temp = temp->left;
                        else
                            temp = temp->right;
                    }

                    if (temp == NULL)
                        cout << "Book ID not found.\n";
                    else
                    {
                        root = deleteBook(root, id);
                        cout << "Book deleted successfully.\n";
                    }
                }
                break;

            case 3:
                if (root == NULL)
                    cout << "Catalogue is empty.\n";
                else
                {
                    cout << "Book IDs: ";
                    display(root);
                    cout << endl;
                }
                break;

            case 4:
                cout << "Program ended.\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    freeTree(root);
    return 0;
}
