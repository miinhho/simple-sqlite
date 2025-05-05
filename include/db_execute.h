#ifndef _DB_EXECUTE
#define _DB_EXECUTE

#include "include/db_state.h"
#include "include/table.h"

typedef enum {
    EXECUTE_SUCCESS,
    EXECUTE_DUPLICATE_KEY,
    EXECUTE_TABLE_FULL
} ExecuteResult;

ExecuteResult execute_statement(Statement* statement, Table* table);
void print_constants();

#endif