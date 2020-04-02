#include <boost/static_assert.hpp>
#include <exception>
#include <iostream>

int main()
{
    BOOST_STATIC_ASSERT(1);// Assert at compile-time
    // BOOST_STATIC_ASSERT(0); //ERROR
    return 0;
}