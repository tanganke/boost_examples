#include <boost/date_time.hpp>
#include <iostream>

namespace greg=boost::gregorian;

int main()
{
    greg::date today = greg::day_clock::local_day();
    greg::date my_birthday(1998,greg::Mar,4);
    
    greg::date_duration day_diff = today-my_birthday;
    std::cout<<day_diff.days()<<'\n';

    greg::date next_week = today+greg::weeks(1);
    std::cout<<"7 days later "<<(next_week.is_special()?"is":"is not")<<" a special value\n";
    /*
        //! check to see if date is a special value
        bool is_special()const
        {
            return(is_not_a_date() || is_infinity());
        }
    */

    return 0;
}