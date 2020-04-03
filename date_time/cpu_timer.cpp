#include <boost/timer/timer.hpp>
#include <unistd.h>
#include <iostream>

int main()
{
    boost::timer::cpu_timer timer; //start
    sleep(1);
    timer.stop();
    std::cout<<timer.format();
    return 0;
}