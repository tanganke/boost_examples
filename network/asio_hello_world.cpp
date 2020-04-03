#include <boost/asio.hpp>
#include <iostream>

namespace asio=boost::asio;

int main()
{
    asio::io_service service;
    service.post(
        []{std::cout<<"hello world.\n";}
    );
    std::cout<<"Starting service...\n";
    service.run();
    return 0;
}
