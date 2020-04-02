#include <boost/weak_ptr.hpp>
#include <boost/shared_ptr.hpp>

int main()
{
    boost::shared_ptr<int[]> s_ptr(new int[10]);
    boost::weak_ptr<int[]> w_ptr=s_ptr;
    assert(s_ptr.use_count()==1);
    boost::shared_ptr s_ptr2=s_ptr;
    assert(s_ptr.use_count()==2);
}