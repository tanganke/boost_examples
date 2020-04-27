#include <boost/archive/binary_oarchive.hpp>
#include <boost/serialization/vector.hpp>
#include <fstream>
#include <vector>

int main(int argc, char *argv[])
{
    std::ofstream of("data.bin", std::ios::binary);
    boost::archive::binary_oarchive oa(of);
    std::vector<double> range_1M(1<<20);
    for (int i = 0; i < range_1M.size(); ++i)
    {
        range_1M[i] = i;
    }
    oa << range_1M;
    of.close();
    return 0;
}