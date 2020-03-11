//
// Created by GuJun on 2020/3/11.
//

#ifndef ALGORITHM_GRAPH_H
#define ALGORITHM_GRAPH_H

#include <vector>

class Graph {
public:
    Graph(int V) : V_(V), adj_(V) {}

    void addEdge(int u, int v, int w) {
        adj_[u].push_back(v);
    }

private:
    int V_;
    std::vector<std::vector<int>> adj_;
};


#endif //ALGORITHM_GRAPH_H
