#include "Simulator.h"
#include <iostream>
#include <vector>

int main() {
    int cacheSize = 32; // 32 bytes
    int blockSize = 4;  // 4 bytes per block

    Simulator simulator(cacheSize, blockSize);

    vector<int> addresses = {
        0, 4, 8, 12, // Misses (new blocks)
        0, 4,         // Hits (same blocks)
        16, 20,       // Misses (new blocks)
        8, 12         // Hits (same blocks)
    };

    simulator.run(addresses);

    return 0;
}
