#pragma once
#include "exception"
#include "iostream"
template <typename T>
class Array
{
    private:
        T*            data;
        unsigned int  _size;
    public:
        Array() : data(NULL), _size(0){}
        Array(unsigned int n) : _size(n) {
            data = new T[n](); //alloc
        }

        ~Array(){
            delete[] data; //free
        }
        Array &operator=(const Array &other){
            if(this == &other)
                return *this;
            delete[] data;
            _size = other._size;
            data = new T[_size]; //alloc
            for(unsigned int i = 0; i < _size; i++)
                data[i] = other.data[i];
            return *this;
        }

        Array(const Array &other){
            _size = other._size;
            data = new T[_size]; //alloc
            for(unsigned int i = 0; i < _size; i++)
                data[i] = other.data[i];
        }
        
        unsigned int size(void) const{
            return _size;
        }

        T &operator[](unsigned int index){
            if(index >= _size)
                throw std::exception();
            return data[index];
        }

        const T &operator[](unsigned int index) const{
            if(index >= _size)
                throw std::exception();
            return data[index];
        }
};

