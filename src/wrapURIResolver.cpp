#include "pxr/pxr.h"

#include "resolver.h"

#include "pxr/usd/ar/pyResolverContext.h"
#include "pxr/base/tf/pyUtils.h"

#include <boost/python/class.hpp>
#include <boost/python/return_value_policy.hpp>

#include <string>

PXR_NAMESPACE_USING_DIRECTIVE

using namespace boost::python;

void wrapURIResolver()
{
    using This = URIResolver;

    class_<This, bases<ArDefaultResolver>, boost::noncopyable>
    ("URIResolver", no_init)

    .def("helloWorld", &This::helloWorld)
     .staticmethod("helloWorld")
    ;
}