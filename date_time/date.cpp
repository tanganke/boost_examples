#include <boost/date_time.hpp>
#include <iostream>
#include <string>

namespace greg = boost::gregorian;

int main()
{
    greg::date d0;
    assert(d0.is_not_a_date());
    
    greg::date d1(2020,greg::Apr,3);
    assert(!d1.is_not_a_date());

    greg::date d2 = greg::from_simple_string("2020-April-3");
    greg::date d3 = greg::from_uk_string("3-Apr-2020");
    greg::date d4 = greg::from_undelimited_string("20200403");
    greg::date d5 = greg::from_us_string("4-3-2020");
    assert(d2==d3);
    assert(d3==d4);
    assert(d4==d5);

    greg::date today = greg::day_clock::local_day();
    std::cout<<today<<std::endl;
    greg::date utc_today = greg::day_clock::universal_day();
    assert(today>=d2);
    assert(utc_today>=d5);

    auto future = greg::from_simple_string("9999-12-31");
    assert(future>today);
    return 0;
}
