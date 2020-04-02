#include <boost/predef.h>
#include <iostream>

int main()
{
    #if defined(BOOST_OS_LINUX)
    std::cout<<"LINUX\n";
    #elif defined(BOOST_OS_WINDOWS)
    std::cout<<"WINDOWS\n";
    #elif defined(BOOST_OS_MACOS)
    std::cout<<"MACOS\n";
    #elif defined(BOOST_OS_UNIX)
    std::cout<<"ANOTHER UNIX\n";
    #endif

    #ifdef BOOST_ARCH_X86
    #ifdef BOOST_ARCH_X86_64
    std::cout<< "x86_64\n";
    #else
    std::cout<< "x84_32\n";
    #endif
    
    #elif defined(BOOST_ARCH_ARM)
    std::cout<<"ARM\n";
    //...
    #endif

}