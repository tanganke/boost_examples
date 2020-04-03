#include <boost/container/vector.hpp>
#include <cassert>

int main()
{
    boost::container::vector<int> vec;
    assert(vec.size()==0);
    vec.push_back(1);
    assert(vec.back()==1&&vec.size()==1);
    vec.pop_back();
    assert(!vec.size());

    return 0;
}