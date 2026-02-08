#pragma once

#include "iter.hpp"
#include <cstddef>
#include "iostream"
template <typename T>
void    iter(T *Array, const size_t length, void (*func)(const T&))
{
    size_t i = 0;
    while(i < length)
    {
        func(Array[i]);
        i++;
    }
}

template <typename T>
void    iter(T *Array, size_t length, void (*func)(T&))
{
    size_t i = 0;
    while(i < length)
    {
        func(Array[i]);
        i++;
    }
}