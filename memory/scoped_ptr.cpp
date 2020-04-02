#include <boost/scoped_ptr.hpp>
#include <iostream>
#include <cassert>

int main()
{
    boost::scoped_ptr<int> ptr;
    assert(!ptr); // null test
    ptr.reset(new int(10));
    assert(ptr);
    std::cout<<*ptr<<'\n';
    return 0;
}