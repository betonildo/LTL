#ifndef ARRAY_H
#define ARRAY_H

#include <CustomTypes.h>

template<class T, class Allocator>
class Array {

    T** array;
    U64 count;
    Allocator allocator;

public:

    Array(size_t count) {
        array = (T**)allocator.allocate(sizeof(T) * count);
        this->count = count;
    }

    T& operator[](unsigned int index) {
        return array[0][index];
    }

    T* operator&() {
        return array[0];
    }
};


#endif /*ARRAY_H*/