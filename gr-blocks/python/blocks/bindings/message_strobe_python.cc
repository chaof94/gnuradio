/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/blocks/message_strobe.h>
// pydoc.h is automatically generated in the build directory
#include <message_strobe_pydoc.h>

void bind_message_strobe(py::module& m)
{

    using message_strobe = ::gr::blocks::message_strobe;


    py::class_<message_strobe,
               gr::block,
               gr::basic_block,
               std::shared_ptr<message_strobe>>(m, "message_strobe", D(message_strobe))

        .def(py::init(&message_strobe::make),
             py::arg("msg"),
             py::arg("period_ms"),
             D(message_strobe, make))


        .def("set_msg",
             &message_strobe::set_msg,
             py::arg("msg"),
             D(message_strobe, set_msg))


        .def("msg", &message_strobe::msg, D(message_strobe, msg))


        .def("set_period",
             &message_strobe::set_period,
             py::arg("period_ms"),
             D(message_strobe, set_period))


        .def("period", &message_strobe::period, D(message_strobe, period))

        ;
}
