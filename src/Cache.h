#ifndef CACHE_H
#define CACHE_H

#include "CacheLine.h"
#include "AddressDecoder.h"
#include <vector>
using namespace std;

class Cache {
private:
    int cacheSize;
    int blockSize;
    int numLines;

    AddressDecoder decoder;
    vector<CacheLine> lines;

    int hits;
    int misses;

public:
    Cache(int cacheSize, int blockSize);

    bool access(int address);

    void printStats();
};


#endif