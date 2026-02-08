#pragma once

template <typename T>
class Array
{
    private:
        T*            data;
        unsigned int  size;
    public:
        Array() : data(NULL), size(0){}
        Array(unsigned int n) : size(n), {
            T Array[n]();// this is not understood
        }
};