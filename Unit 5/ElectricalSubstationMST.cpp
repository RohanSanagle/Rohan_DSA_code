#include <iostream>
#include <algorithm>
using namespace std;

struct Edge {
    int u, v, cost;
};

int parent[100];
char name[100];

int find(int x) {
    if (parent[x] == x)
        return x;
    return parent[x] = find(parent[x]);
}

int main() {
    int n, m;
    Edge e[100];

    cout << "Enter number of substations: ";
    cin >> n;

    cout << "Enter substation names:\n";
    for (int i = 0; i < n; i++) {
        cin >> name[i];
        parent[i] = i;
    }

    cout << "Enter number of transmission lines: ";
    cin >> m;

    cout << "Enter lines (from to cost):\n";

    for (int i = 0; i < m; i++) {
        char a, b;
        cin >> a >> b >> e[i].cost;

        for (int j = 0; j < n; j++) {
            if (name[j] == a) e[i].u = j;
            if (name[j] == b) e[i].v = j;
        }
    }

    sort(e, e + m, [](Edge a, Edge b) {
        return a.cost < b.cost;
    });

    int total = 0, count = 0;

    cout << "\nMinimum Spanning Tree:\n";

    for (int i = 0; i < m; i++) {
        int a = find(e[i].u);
        int b = find(e[i].v);

        if (a != b) {
            parent[a] = b;
            cout << name[e[i].u] << " - "
                 << name[e[i].v]
                 << " : Cost = " << e[i].cost << endl;

            total += e[i].cost;
            count++;
        }

        if (count == n - 1)
            break;
    }

    if (count == n - 1)
        cout << "Minimum Total Construction Cost = " << total;
    else
        cout << "All substations cannot be connected.";

    return 0;
}
