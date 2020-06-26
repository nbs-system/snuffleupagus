/* Copyright (C) NBS System - All Rights Reserved
 * Licensed under GNU LGPL v3.0 – See the LICENSE notice for details
 */

#ifndef SP_NETWORK_UTILS_H
#define SP_NETWORK_UTILS_H

int get_ip_and_cidr(char *, sp_cidr *);
bool cidr_match(const char *, const sp_cidr *);

#endif /*SP_NETWORK_UTILS_H*/
