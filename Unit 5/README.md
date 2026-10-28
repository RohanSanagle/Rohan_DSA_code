#Electrical Substation Network Using Kruskal's Algorithm

Description

This project represents electrical substations as vertices and possible transmission lines as edges with construction costs. Kruskal's Algorithm is used to find the Minimum Spanning Tree (MST) with the minimum total construction cost.

Problem Statement

Represent electrical substations and possible transmission lines with construction costs, and apply Kruskal's Algorithm to determine the Minimum Spanning Tree.

Objectives

- To represent electrical substations and transmission lines using a graph.
- To assign construction costs to transmission lines.
- To apply Kruskal's Algorithm to find the Minimum Spanning Tree.
- To calculate the minimum total construction cost.

Concepts Used

- Graph
- Minimum Spanning Tree (MST)
- Kruskal's Algorithm
- Sorting
- Disjoint Set / Parent Array
- C++ Programming

Features

- Accepts substation names from the user.
- Accepts transmission lines and their construction costs.
- Selects transmission lines in increasing order of cost.
- Avoids cycles while selecting edges.
- Displays the Minimum Spanning Tree and total construction cost.

How to Run

1. Download or clone this repository.
2. Open "ElectricalSubstationMST.cpp" in Dev-C++ or any C++ compiler.
3. Compile and run the program.
4. Enter the number of substations and their names.
5. Enter the number of transmission lines and the cost of each line.
6. View the Minimum Spanning Tree and minimum total construction cost.

Sample Input

Enter number of substations: 4
Enter substation names:
A B C D
Enter number of transmission lines: 5
Enter lines (from to cost):
A B 10
A C 6
B C 5
B D 15
C D 4

Sample Output

Minimum Spanning Tree:
C - D : Cost = 4
B - C : Cost = 5
A - B : Cost = 10
Minimum Total Construction Cost = 19

Applications

- Electrical power distribution network planning
- Transmission line cost optimization
- Network design with minimum construction cost
- Connecting multiple substations efficiently

Conclusion

This project demonstrates the use of Kruskal's Algorithm to construct a Minimum Spanning Tree. It helps identify the transmission lines required to connect all substations with minimum total construction cost while avoiding cycles.