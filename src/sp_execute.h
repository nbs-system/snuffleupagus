/* Copyright (C) NBS System - All Rights Reserved
 * Licensed under GNU LGPL v3.0 – See the LICENSE notice for details
 */

#ifndef SP_EXECUTE_H
#define SP_EXECUTE_H

int hook_execute(void);
zend_string *get_eval_filename(const char *const filename);

#endif /* SP_EXECUTE_H */
