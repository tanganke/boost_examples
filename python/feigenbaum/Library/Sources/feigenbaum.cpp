#include <boost/python.hpp>
const char* description()
{
    return "Author: Tangnke. Date: 2020-Apr-23";
}


struct F
{
    double r;

    F(double r_):r(r_){}
    double operator()(double x)
    {
        return r*x*(1-x);
    }
    double operator()(double x,long n)
    {
        for(long i=0;i<n;++i)
        {
            x=operator()(x);
        }
        return x;
    }
};

double f_r_x(double r,double x)
{
    F f(r);
    return f(x);
}

double f_r_x_n(double r,double x,long n)
{
    F f(r);
    for(long i=0;i<n;++i)
    {
        x=f(x);
    }
    return x;
}

BOOST_PYTHON_MODULE(libfeigenbaum)
{
    using namespace boost::python;
    def("description",description);
    def("f_r_x",f_r_x);
    def("f_r_x_n",f_r_x_n);
}