#include "Array.hpp"
#include "iostream"

int main()
{

    {
    Array<int> obj(10);
    Array<int> b(obj);
    std::cout << "b size = "<< b.size() << std::endl;
    try
    {
        std::cout << "obj[9] = " << obj[9] << "\n\n" ;
        obj[9] = 25;
        for(unsigned int i = 0; i < obj.size(); i++)
            std::cout << "obj[" << i << "] = " << obj[i] << "\n";
        b = obj;
        std::cout << "b[9] = " << b[9] << "\n\n" ;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    }
    /////////////////////////////////////////////////
    Array<std::string> strings(5);
    try
    {
        for(unsigned int i = 0; i < strings.size(); i++)
            strings[i] = "imane";
        Array<std::string> const a(strings);
        for(unsigned int i = 0; i < a.size(); i++)
            std::cout << a[i] << "\n";
    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
