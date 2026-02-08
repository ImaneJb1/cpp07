#include "iter.hpp"
#include <iostream>
#include <string>


// -------- non-const function (modifies elements) --------
void addOne(int& x)
{
    x++;
}

// -------- const function (read only) --------
void printInt(const int& x)
{
    std::cout << x << " ";
}

// -------- template function --------
template <typename T>
void printAny(const T& x)
{
    std::cout << x << " ";
}

int main()
{
    std::cout << "==== INT ARRAY ====" << std::endl;

    int arr[] = {1, 2, 3, 4};

    std::cout << "Original: ";
    iter(arr, 4, printInt);
    std::cout << std::endl;

    std::cout << "Add one:" << std::endl;
    iter(arr, 4, addOne);

    std::cout << "After addOne: ";
    iter(arr, 4, printInt);
    std::cout << std::endl << std::endl;

    std::cout << "==== STRING ARRAY ====" << std::endl;

    std::string strs[] = {"hello", "cpp", "templates"};

    iter(strs, 3, printAny<std::string>);
    std::cout << std::endl << std::endl;

    std::cout << "==== DOUBLE ARRAY ====" << std::endl;

    double d[] = {1.1, 2.2, 3.3};

    iter(d, 3, printAny<double>);
    std::cout << std::endl;

    return 0;
}


