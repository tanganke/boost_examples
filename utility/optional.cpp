#include <boost/optional/optional.hpp>
#include <vector>
#include <algorithm>
#include <iostream>

template<typename ITer,typename T>
boost::optional<T> boost_find(ITer begin,ITer last,T value)
{
    auto x=std::find(begin,last,value);
    if(x==last)
        return boost::none;
    else
        return *x;
}
int main()
{
    
    std::vector<int> vec(10);
    std::generate(vec.begin(),vec.end(),rand);
    auto x=boost_find(vec.begin(),vec.end(),rand());
    auto print = [&]{
        if(x)
        {
            std::cout<<"find "<< *x<<'\n';
        }
        else
        {
            std::cout<<"not find . get default "<<x.get_value_or(0)<<'\n';
        }
    };
    print();
    vec[5]=10;
    x=boost_find(vec.begin(),vec.end(),10);
    print();
    std::generate(vec.begin(),vec.end(),rand);
    x=boost_find(vec.begin(),vec.end(),rand());
    print();
    return 0;
}