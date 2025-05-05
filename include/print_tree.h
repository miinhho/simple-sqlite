#ifndef _DB_PRINT_TREE
#define _DB_PRINT_TREE

#include <stdint.h>
#include "include/page.h"

void indent(uint32_t level);
void print_tree(Pager* pager, uint32_t page_num, uint32_t indentation_level);

#endif