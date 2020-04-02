#include <boost/scoped_array.hpp>
#include <cassert>
#include <algorithm>
#include <iostream>

int main()
{
    size_t sz=10<<6;// 10M
    boost::scoped_array<int> ary(new int[sz]);//10M*4Bytes=400MB
    std::fill(ary.get(),ary.get()+sz,10);
    assert(*ary.get()==10);
}