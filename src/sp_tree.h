/* Copyright (C) NBS System - All Rights Reserved
 * Licensed under GNU LGPL v3.0 – See the LICENSE notice for details
 */

#ifndef SP_TREE_H
#define SP_TREE_H
#include "php_snuffleupagus.h"

typedef enum {
  UNDEFINED = 0,
  OBJECT,
  ARRAY,
  ARRAY_END,
  INTERPRETED_STRING,
  LITERAL_STRING,
  CLASS,
  VAR,
  CONSTANT
} elem_type;

typedef struct parser_s {
  elem_type type;
  char *value;
  struct parser_s *idx;
  struct parser_s *next;
} sp_tree;

sp_tree *sp_tree_new();
void sp_tree_free(sp_tree *);

#endif
