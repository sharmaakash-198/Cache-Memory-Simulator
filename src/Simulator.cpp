#include "Simulator.h"
#include <iostream>

Simulator::Simulator(int cacheSize, int blockSize) 
    : cache(cacheSize, blockSize) {}

void Simulator::run(const vector<int>& addresses) {
    for (int address : addresses) {
        bool hit = cache.access(address);

        if(hit) {
            cout << "HIT: Address " << address << " is in cache.\n";
        } else {
            cout << "MISS: Address " << address << " is not in cache.\n";
        }
    }

    cache.printStats();
}