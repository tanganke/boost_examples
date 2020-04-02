#include <boost/algorithm/string.hpp>
#include <cassert>
#include <string>

void test_string()
{
    std::string str = "hello 1234-.";
    boost::to_upper(str);
    assert(str=="HELLO 1234-.");
}
void test_c_str()
{
    char str[] = "hello 1234-.";
    boost::to_upper(str);
    assert(std::string(str)=="HELLO 1234-.");
}
void test_range()
{
    std::string str = "hello 1234-.";
    using RangeType = boost::iterator_range<std::string::iterator>;
    RangeType range = boost::make_iterator_range(str.begin(),str.begin()+2); // auto range = ...;
    boost::to_upper(range);
    assert(str=="HEllo 1234-.");
}

int main()
{
    test_c_str();
    test_string();
    test_range();
}
