#include <string>

#include <pybind11/pybind11.h>

#include "cfd/node.hxx"

namespace py = pybind11;

int add(int i, int j) {
    return i + j;
}

std::string some_string() {
    return "pybind is working";
}

PYBIND11_MODULE(_cfd, m) {
    m.doc() = "pybind11 example plugin";  // optional module docstring

    m.def("add", &add, "A function that adds two numbers");

    m.def("some_string", &some_string, "A function that returns something");

    py::class_<Cell>(m, "Cell").def(py::init<>()).def("name", &Cell::name);
}
