#include <boost/algorithm/string.hpp>
#include <string>
#include <cassert>

int main()
{
    std::string x = "hello world";
    std::string y = "hello";
    assert(boost::contains(x,y));
}
