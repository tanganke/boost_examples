#include <boost/lexical_cast.hpp>
#include <iostream>
#include <string>
#include <cassert>

int main()
{
    auto test = [](std::string str) {
        try
        {
            int n = boost::lexical_cast<int>(str);
            assert(n == 123456);
            std::cout << n << '\n';
        }
        catch (std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
    };
    std::string str = "123456";
    test(str);
    str = "abcd123";
    test(str);
    try
    {
        int n = boost::lexical_cast<int>(str.c_str()+4);
        std::cout << n << '\n';
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
