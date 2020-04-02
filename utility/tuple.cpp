#include <boost/tuple/tuple.hpp>
#include <iostream>
#include <vector>
#include <string>

int main()
{
    boost::tuple<int,double,std::string> x;
    x=boost::make_tuple(1,2.01,"hi");
    std::cout<< x.get<0>()<<std::endl;
    std::cout<<boost::get<1>(x)<<std::endl;
    std::cout<<boost::get<2>(x)<<std::endl;

    auto tuple_length = [](auto tuple){
        return boost::tuples::length<decltype(tuple)>::value;
    };
    std::cout<<tuple_length(x)<<std::endl;
    
    return 0;
}