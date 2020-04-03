#include <boost/date_time.hpp>
#include <cassert>
#include <string>

namespace greg=boost::gregorian;
namespace pt=boost::posix_time;

int main()
{
    pt::ptime pt;
    assert(pt.is_not_a_date_time());

    pt::ptime now1 = pt::second_clock::universal_time();
    pt::ptime now2 = pt::from_time_t(std::time(nullptr));
    std::cout<<now1<<'\t'<<now2<<std::endl;

    return 0;

}
