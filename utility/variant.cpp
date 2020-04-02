#include <boost/variant.hpp>
#include <string>
#include <iostream>
#include <cassert>

int main()
{
    boost::variant<int,double,std::string> x;
    std::cout<<&x<<'\n';
    x=1;//sets int
    int* iptr=boost::get<int>(&x);
    std::cout <<iptr<<'\t'<<*iptr<<'\n';
    try{
        auto y = boost::get<std::string>(x);
    }
    catch (std::exception& e)
    {
        std::cerr<<"catch error\n";
    }   
    x="hi";//sets string
    std::cout<<boost::get<std::string>(&x)<<'\t'<<boost::get<std::string>(x)<<'\n';

}