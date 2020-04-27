#include <boost/archive/binary_iarchive.hpp>
#include <boost/serialization/vector.hpp>
#include <fstream>
#include <vector>
#include <iostream>
#include <cassert>

int main(int argc, char *argv[])
{
    std::ifstream istream("data.bin", std::ios::binary);
    boost::archive::binary_iarchive ar(istream);
    std::vector<double> range_1M;
    ar >> range_1M;
    istream.close();
    std::cout<<"size of range_1M:"<<range_1M.size()<<std::endl;
    for(int i=0;i<(1<<20);++i)
    {
        assert(i==range_1M[i]);
    }
    return 0;
}