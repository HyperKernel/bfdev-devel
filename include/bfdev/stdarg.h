/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Copyright(c) 2023 John Sanpe <sanpeqf@gmail.com>
 */

#ifndef _BFDEV_STDARG_H_
#define _BFDEV_STDARG_H_

#include <bfdev/config.h>
#include <bfdev/cdefs.h>

#if defined(__FreeBSD__) && defined(_KERNEL)
# include <machine/stdarg.h>
#else
# include <stdarg.h>
#endif

BFDEV_BEGIN_DECLS

BFDEV_END_DECLS

#endif /* _BFDEV_STDARG_H_ */
