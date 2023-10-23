#ifndef __SPARSE_GRAPH_H__
#define __SPARSE_GRAPH_H__

// Your code here
#include <vector>
#include <set>

using namespace std;

class SparseGraph{
public:
    SparseGraph() {
        // Your code here
        n = 3;
        graph.resize(n, set <int> ());
    }

    SparseGraph(int n_in) {
        // Your code here
        n = n_in;
        graph.resize(n, set <int> ());
    }

    SparseGraph(const SparseGraph& G) {
        // Your code here
        n = G.n;
        graph = G.graph;
    }

    void AddEdge(int a, int b) {
        // Your code here
        graph[a].insert(b);
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        graph[a].erase(b);
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        return graph[a].find(b) != graph[a].end();
    }

    SparseGraph Transpose() const {
        // Your code here
        SparseGraph gt(n);
        for (int i = 0; i < n; i++) {
            for (auto &v : graph[i]) gt.graph[v].insert(i);
        }
        return gt;
    }

protected:
    // Your code here
    int n;
    vector <set <int>> graph;
};
#endif // __SPARSE_GRAPH_H__

