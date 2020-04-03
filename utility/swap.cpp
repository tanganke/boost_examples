#include <boost/swap.hpp>
#include <cassert>

int main()
{
    int x=0,y=1;
    boost::swap(x,y);
    assert(x==1);
    assert(y==0);
    return 0;
}
