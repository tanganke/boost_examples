#include <boost/thread.hpp>
#include <iostream>
#include <unistd.h>

int main()
{
    auto task = [](auto i) {
        for (int j = 0; j < 100; j++)
        {
            std::cout << i;
            struct timespec sleeptime = {0, rand() % 10000};
            nanosleep(&sleeptime, nullptr);
        }
    };
    boost::thread thread1(task, '-');
    boost::thread thread2(task, '.');
    thread1.join();
    thread2.join();
    (std::cout << std::endl).flush();
}