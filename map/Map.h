//
// Created by GuJun on 2020/3/11.
//

#ifndef ALGORITHM_MAP_H
#define ALGORITHM_MAP_H

#include <vector>
#include <utility>
#include <iostream>

class Map {
public:
    Map(int width, int height, const std::vector<int>& channel) : width_(width), height_(height) {
        int N = channel.size();
        edge_.resize(N);
        for (int i = 0; i < N; ++i) {
            edge_[i].resize(N);
        }
        for (int i = 0; i < channel.size(); ++i) {
            if (channel[i] != 0) {
                if (i-1 >= 0 && channel[i-1] != 0) {
                    edge_[i-1][i] = channel[i];
                    edge_[i][i-1] = channel[i];
                }
                if (i+1 < N && channel[i+1] != 0) {
                    edge_[i+1][i] = channel[i];
                    edge_[i][i+1] = channel[i];
                }
            }
        }
    }

    std::pair<int, int> indexToCoordinate(int index) {
        return { index / width_, index % width_ };
    }

    void setEdgeValue(int u, int v, int w) {
        edge_[u][v] = w;
    }

    std::vector<std::vector<int>> getEdge() {
        return edge_;
    }

private:
    int width_;
    int height_;
    std::vector<std::vector<int>> edge_;
};


#endif //ALGORITHM_MAP_H
