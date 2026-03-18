#include "Cache.h"
#include <iostream>
#include <cmath>

Cache::Cache(int cacheSize, int blockSize) 
    : cacheSize(cacheSize), 
    blockSize(blockSize),
    numLines(cacheSize / blockSize), 
    decoder(log2(numLines), 
    log2(blockSize)) {

      lines.resize(numLines);
      hits = 0;
      misses = 0;
}

bool Cache::access(int address) {
    int index = decoder.getIndex(address);
    int tag = decoder.getTag(address);
    
    if(lines[index].valid && lines[index].tag == tag){
        hits++;
        return true;
    } else {
        lines[index].valid = true;
        lines[index].tag = tag;
        misses++;
        return false;
    }
}

void Cache::printStats() {
    int totalAccesses = hits + misses;
    
    cout << "\n-------- Cache Statistics -------\n";
    cout << "Total Accesses: " << totalAccesses << endl;
    cout << "Hits: " << hits << endl;
    cout << "Misses: " << misses << endl;

    if (totalAccesses > 0) {
        double hitRate = (double)hits / totalAccesses * 100;
        double missRate = (double)misses / totalAccesses * 100;
        cout << "Hit Rate: " << hitRate << "%\n";
        cout << "Miss Rate: " << missRate << "%\n";
    }
}