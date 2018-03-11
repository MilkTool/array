// Copyright (C) 2018 Jonathan Müller <jonathanmueller.dev@gmail.com>
// This file is subject to the license terms in the LICENSE file
// found in the top-level directory of this distribution.

#include <foonathan/array/memory_block.hpp>
#include <foonathan/array/raw_storage.hpp>
#include <foonathan/array/block_storage_new.hpp>

int main()
{
    foonathan::array::block_storage_new<foonathan::array::default_growth> storage;
}
