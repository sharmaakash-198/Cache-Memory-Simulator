#ifndef SIMULATOR_H
#define SIMULATOR_H

#include "Cache.h"
#include <vector>

class Simulator {
private:
    Cache cache;
    
public:
    Simulator(int cacheSize, int blockSize);

    void run(const vector<int>& addresses);
};

#endif