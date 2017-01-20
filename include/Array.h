#ifndef ARRAY_H
#define ARRAY_H

#include <Allocator.h>
#include <CustomTypes.h>

template<class T>
class Array {

    T** array;
    U64 count;
    Allocator* allocator;

public:

    Array(size_t count, Allocator* allocator) {
        this->allocator = allocator;
        array = (T**)this->allocator->allocate(sizeof(T) * count);
        this->count = count;
    }

    T& operator[](unsigned int index) {
        return array[0][index];
    }

    T* operator&() {
        return array[0];
    }

    void setAllocator(Allocator* allocator) {
        this->allocator = allocator;
        array = (T**)this->allocator->allocate(sizeof(T) * count);
    }
};


#endif /*ARRAY_H*/