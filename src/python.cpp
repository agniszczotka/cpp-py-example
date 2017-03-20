#include <boost/python.hpp>
#include "cimage.h"


using namespace boost::python;


BOOST_PYTHON_MODULE(pymycpp)
{
    class_<Cimage>("Cimage", init<size_t, size_t>())
        .def("width", &Cimage::width)
        .def("height", &Cimage::height)
        ;
}
