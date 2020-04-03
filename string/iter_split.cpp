#include <boost/algorithm/string.hpp>
#include <string>
#include <vector>
#include <iostream>
#include <assert.h>

int main()
{
    std::string poem = "Do not go gentle into that good night - Do not go gentle into that good night";
    std::vector<std::string> sp;
    boost::iter_split(sp,poem,boost::first_finder(" gentle "));
    
    std::cout<<sp.size()<<std::endl;
    int pos=0;
    for(auto& i:sp)
    {
        std::cout<<++pos<<':'<<'"'<<i<<'"'<<'\n';
    }
    return 0;
}