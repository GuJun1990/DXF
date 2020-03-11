#include <iostream>
#include "map/Map.h"

int main() {
    std::vector<int> channel = {0, 0, 2, 0, 5, 6, 0, 0, 7, 0, 4, 8, 3, 1, 0};
    Map map = Map(3, 5, channel);
    for (int i = 0; i < channel.size(); ++i) {
        std::cout << channel[i] << "\t";
    }
    std::cout << std::endl;
    std::vector<std::vector<int>> edge = map.getEdge();
    std::cout << "edges: " << std::endl;
    for (int i = 0; i < edge.size(); ++i) {
        for (int j = 0; j < edge[0].size(); ++j) {
            std::cout << edge[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    std::cout << "hello" << std::endl;
    return 0;
}
