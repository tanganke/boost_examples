#include <boost/algorithm/string.hpp>
#include <string>
#include <cassert>
#include <iostream>

int main()
{
    std::string x = "   HELLO   "; // 3 ' ' on each side.
    auto y = x; // copy constructor
    boost::replace_all(y," ","_"); // replace all ' ' with '_'

    // trim[_left|_right][_if]
    boost::trim(x);
    assert(x=="HELLO");

    boost::trim_right_if(y,[](char x){ return x=='_'?true:false;});
    assert(y=="___HELLO");

    return 0;
}