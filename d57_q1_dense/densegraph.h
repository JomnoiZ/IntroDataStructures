#ifndef __DENSE_GRAPH_H__
#define __DENSE_GRAPH_H__

// Your code here
#include <vector>
using namespace std;
class DenseGraph{
public:
    DenseGraph() {
        // Your code here
        n = 3;
        graph.resize(n, vector <int> (n, 0));
    }

    DenseGraph(int n_in) {
        // Your code here
        n = n_in;
        graph.resize(n, vector <int> (n, 0));
    }

    DenseGraph(const DenseGraph& G) {
        // Your code here
        n = G.n;
        graph = G.graph;
    }

    void AddEdge(int a, int b) {
        // Your code here
        graph[a][b] = 1;
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        graph[a][b] = 0;
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        return graph[a][b];
    }

    DenseGraph Transpose() const {
        // Your code here
        DenseGraph grapht(n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                grapht.graph[i][j] = graph[j][i];
            }
        }
        return grapht;
    }

protected:
    int n;
    // Your code here
    vector <vector <int>> graph;
};
#endif // __DENSE_GRAPH_H__
