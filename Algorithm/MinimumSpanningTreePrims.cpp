#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

// Function to implement Prim's algorithm
void prim(vector<vector<pair<int, int>>>& graph, int startVertex) {
    int V = graph.size();

    // Priority queue to store vertices with their key values
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    // Vector to store parent of each vertex in MST
    vector<int> parent(V, -1);

    // Vector to track whether a vertex is included in MST or not
    vector<bool> inMST(V, false);

    // Key values used to pick the minimum weight edge
    vector<int> key(V, INT_MAX);

    // Initialize the starting vertex
    pq.push(make_pair(0, startVertex));
    key[startVertex] = 0;

    // Prim's algorithm
    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        // Mark the current vertex as included in MST
        inMST[u] = true;

        // Update the key values of adjacent vertices
        for (const pair<int, int>& edge : graph[u]) {
            int v = edge.first;
            int weight = edge.second;

            // If v is not in MST and the weight of the current edge is less than the key value of v
            if (!inMST[v] && weight < key[v]) {
                // Update key value and parent of v
                key[v] = weight;
                parent[v] = u;

                // Add v to the priority queue
                pq.push(make_pair(key[v], v));
            }
        }
    }

    // Print the minimum spanning tree
    cout << "Minimum Spanning Tree (Prim's Algorithm):\n";
    for (int i = 1; i < V; ++i) {
        cout << "Edge: " << parent[i] << " - " << i << " Weight: " << key[i] << "\n";
    }
}

int main() {
    // Example graph representation
    // Number of vertices: 4
    // (0, 1, 2, 4) are vertices, and the last element is the weight of the edge
    vector<vector<pair<int, int>>> graph = {
        { {1, 2}, {2, 1}, {3, 3} },   // Vertex  0
        { {0, 2}, {2, 2}, {3, 4} },   // Vertex  1
        { {0, 1}, {1, 2}, {3, 1} },   // Vertex  2
        { {0, 3}, {1, 4}, {2, 1} }    // Vertex  3
    };

    // Start Prim's algorithm from vertex 0
    prim(graph, 0);

    return 0;
}
