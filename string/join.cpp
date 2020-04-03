#include <boost/algorithm/string.hpp>
#include <iostream>
#include <cassert>
#include <vector>

int main()
{
    std::vector<std::string> words{"Do", "not", "go", "gentle", "into", "that", "good", "night"};
    
    std::string joined = boost::join(words, " ");
    std::cout << '"' << joined << '"' << std::endl;

    auto start_with_g = [](const std::string &x) { return x[0] == 'g' ? true : false; };
    std::cout << '"' << boost::join_if(words, ",", start_with_g) << '"' << std::endl;
    
    return 0;
}