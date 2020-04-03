#include <boost/algorithm/string.hpp>
#include <string>
#include <cassert>
#include <iostream>

int main()
{
    std::string poem = R"(Do not go gentle into that good night,
Old age should burn and rave at close of day;
Rage, rage against the dying of the light.)";
    std::vector<std::string> words;
    boost::split(words,poem,boost::is_any_of(" ,.;\n"),boost::token_compress_on);
    if(words.back()=="")    // the last item of words is "" because "light."=="light"+"."+""
                            //  if poem ends up by "light",the last item of words would just be "light"
        words.pop_back();
    std::cout<<words.size()<<std::endl;
    int pos=0;
    for(auto& word:words)
    {
        std::cout<<++pos<<':'<<'"'<<word<<'"'<<'\n';
    }
    return 0;
}