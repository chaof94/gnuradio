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

#include <gnuradio/blocks/lfsr_32k_source_s.h>
// pydoc.h is automatically generated in the build directory
#include <lfsr_32k_source_s_pydoc.h>

void bind_lfsr_32k_source_s(py::module& m)
{

    using lfsr_32k_source_s = ::gr::blocks::lfsr_32k_source_s;


    py::class_<lfsr_32k_source_s,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<lfsr_32k_source_s>>(
        m, "lfsr_32k_source_s", D(lfsr_32k_source_s))

        .def(py::init(&lfsr_32k_source_s::make), D(lfsr_32k_source_s, make))


        ;
}
