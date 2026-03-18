#ifndef CACHELINE_H
#define CACHELINE_H

// #include "CacheLine.h"

class CacheLine {
public:
    int tag;
    bool valid;

    CacheLine() : tag(-1), valid(false) {}
};

#endif // CACHELINE_H