#ifndef _DB_COMMAND
#define _DB_COMMAND

#include "include/table.h"
#include "include/db_input.h"

typedef enum {
    META_COMMAND_SUCCESS,
    META_COMMAND_UNRECOGNIZED_COMMAND
} MetaCommandResult;

MetaCommandResult do_meta_command(InputBuffer* input_buffer, Table* table);

#endif