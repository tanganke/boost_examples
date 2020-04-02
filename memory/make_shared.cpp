#include <boost/make_shared.hpp>
#include <iostream>

int main()
{
    auto ptr = boost::make_shared<int>(5);
    assert(typeid(ptr)==typeid(boost::shared_ptr<int>));
    std::cout<<typeid(ptr).name()<<std::endl;
}