#include <boost/archive/text_iarchive.hpp>
#include <boost/serialization/vector.hpp>
#include <vector>
#include <cassert>
#include <fstream>

int main()
{
    std::ifstream is("text_data.txt");
    boost::archive::text_iarchive ar(is);
    std::vector<int> vec;
    ar>>vec;
    is.close();

    assert(vec.size()==1<<10);
    for(int i=0;i<(1<<10);++i)
    {
        assert(vec[i]==i);
    }
    return 0;
}