#ifndef ADDRESSDECODER_H
#define ADDRESSDECODER_H

class AddressDecoder {
private:
    int indexBits;
    int offsetBits;

public:
    AddressDecoder(int indexBits, int offsetBits) 
        : indexBits(indexBits), offsetBits(offsetBits) {}

    int getIndex(int address) {
        return (address >> offsetBits) & ((1 << indexBits) - 1);
    }       

    int getTag(int address) {
        return address >> (indexBits + offsetBits);
    }
};

#endif