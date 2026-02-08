#pragma once
#include "iostream"
template <typename T>

void    swap(T &a, T &b)
{
    std::cout << "my swap\n";
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}
template <typename T>

T   min(T a, T b)
{
    if(a == b)
        return b;
    if(a > b)
        return b;
    return a;
}

template <typename T>

T   max(T a, T b)
{
    if(a == b)
        return b;
    if(a < b)
        return b;
    return a;
}

