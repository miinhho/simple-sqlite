#ifndef _DB_CURSOR
#define _DB_CURSOR

#include <stdint.h>
#include <stdbool.h>
#include "include/table.h"

typedef struct {
    Table* table;
    uint32_t page_num;
    uint32_t cell_num;
    bool end_of_table;
} Cursor;

Cursor* table_start(Table* table);
Cursor* table_find(Table* table, uint32_t key);
void* cursor_value(Cursor* cursor);
void cursor_advance(Cursor* cursor);

#endif