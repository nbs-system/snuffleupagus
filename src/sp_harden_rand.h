/* Copyright (C) NBS System - All Rights Reserved
 * Licensed under GNU LGPL v3.0 – See the LICENSE notice for details
 */

#ifndef __SP_HARDEN_RAND_H
#define __SP_HARDEN_RAND_H

#include "ext/standard/php_rand.h"
#include "ext/standard/php_random.h"
#include "zend_exceptions.h"

int hook_rand();

#endif /* __SP_HARDEN_RAND_H */
