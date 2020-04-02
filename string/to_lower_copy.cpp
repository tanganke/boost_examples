#include <boost/algorithm/string.hpp>
#include <string>
#include <cassert>

int main()
{
    std::string str_1 = "HELLO";
    std::string str_2 = boost::to_lower_copy(str_1);
    assert(str_1=="HELLO");
    assert(str_2=="hello");
}