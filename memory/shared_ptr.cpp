#include <boost/shared_ptr.hpp>
#include <cassert>

int main()
{
    boost::shared_ptr<int[]> ptr(new int[10]);
    assert(ptr.use_count()==1);
    auto ptr2 = ptr;
    assert(ptr.use_count()==2);
    assert(ptr2.use_count()==ptr.use_count());
    assert(ptr2.get()==ptr.get());
    ptr2.reset();
    assert(ptr.use_count()==1);
    return 0;
}