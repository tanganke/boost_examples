#include <boost/regex.hpp>
#include <string>
#include <cassert>
#include <iostream>

int main()
{
    std::string poem = R"(Do not go gentle into that good night,
Old age should burn and rave at close of day;
Rage, rage against the dying of the light.)";

    boost::regex r{"[a-zA-Z]+"};//English word
    std::string::const_iterator start=poem.begin(),
                                end = poem.end();
    boost::smatch matches;

    for(int pos=0;boost::regex_search(start,end,matches,r);){
        std::cout<<++pos<<':'<<matches[0].begin()-poem.begin()//offset
        <<'-'<<matches[0].length()<<':'//word length
            <<matches.str()<<std::endl;
        start = matches[0].second;
    }

    return 0;
}