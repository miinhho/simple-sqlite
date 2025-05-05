#ifndef _DB_NODE_ELEMENT
#define _DB_NODE_ELEMENT

#include <stdbool.h>
#include <stdint.h>
#include "include/table.h"

typedef enum {
    NODE_INTERNAL,
    NODE_LEAF
} NodeType;

const uint32_t NODE_TYPE_SIZE = sizeof(uint8_t);
const uint32_t NODE_TYPE_OFFSET = 0;
const uint32_t IS_ROOT_SIZE = sizeof(uint8_t);
const uint32_t IS_ROOT_OFFSET = NODE_TYPE_SIZE;
const uint32_t PARENT_POINTER_SIZE = sizeof(uint32_t);
const uint32_t PARENT_POINTER_OFFSET = IS_ROOT_OFFSET + IS_ROOT_SIZE;
const uint8_t COMMON_NODE_HEADER_SIZE = 
    NODE_TYPE_SIZE + IS_ROOT_SIZE + PARENT_POINTER_SIZE;

NodeType get_node_type(void* node);
void set_node_type(void* node, NodeType type);
bool is_node_root(void* node);
void set_node_root(void* node, bool is_root);
void create_new_root(Table* table, uint32_t right_child_page_num);
uint32_t* node_parent(void* node);
uint32_t get_node_max_key(void* node);

#endif