/* SPDX-License-Identifier: LGPL-3.0-or-later */
/*
 * Copyright(c) 2022 John Sanpe <sanpeqf@gmail.com>
 */

#include <bfdev/crc.h>
#include <bfdev/crypto/crc32-inline.h>
#include <export.h>

export uint32_t
bfdev_crc32(const void *data, size_t len, uint32_t crc)
{
    return bfdev_crc32_inline(data, len, crc);
}
