#include <boost/timer/timer.hpp>
#include <unistd.h>

int main()
{
    boost::timer::auto_cpu_timer tiemr;
    sleep(1);
    return 0;
}