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

#include <gnuradio/blocks/or_blk.h>

template <typename T>
void bind_or_blk_template(py::module& m, const char* classname)
{
    using or_blk = gr::blocks::or_blk<T>;

    py::class_<or_blk,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<or_blk>>(m, classname)
        .def(py::init(&gr::blocks::or_blk<T>::make), py::arg("vlen") = 1);
}

void bind_or_blk(py::module& m)
{
    bind_or_blk_template<std::uint8_t>(m, "or_bb");
    bind_or_blk_template<std::int16_t>(m, "or_ss");
    bind_or_blk_template<std::int32_t>(m, "or_ii");
}
