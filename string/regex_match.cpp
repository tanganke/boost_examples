#include <boost/regex.hpp>
#include <string>
#include <iostream>

auto is_digits = [](auto str){
    boost::regex regex("0|1|2|3|4|5|6|7|8|9");//[0-9]
    assert(boost::regex_match(str,regex)==boost::regex_match(str,boost::regex("[0-9]")));
    return boost::regex_match(str,regex);
};

auto is_uint = [](auto str)
{
    boost::regex regex("0|([1-9][0-9]*)");
    return boost::regex_match(str,regex);
};

int main()
{
    std::string s="0";
    assert(is_digits(s));
    s="12345";
    assert(!is_digits(s));
    assert(is_uint(s));
    s="x123";
    assert(!is_uint(s));
    return 0;
}