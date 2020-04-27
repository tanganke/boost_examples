#include <boost/archive/text_oarchive.hpp>
#include <boost/serialization/vector.hpp>
#include <vector>
#include <algorithm>
#include <iostream>
#include <fstream>

int main()
{
    std::vector<int> range_1K(1 << 10);
    std::generate(range_1K.begin(), range_1K.end(),
                  [i = 0]() mutable { return i++; });


    std::ofstream os("text_data.txt");   
    boost::archive::text_oarchive ar(os);
    ar<<range_1K;
    os.close();
}
