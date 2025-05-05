#ifndef _DB_PAGE
#define _DB_PAGE

#include <stdint.h>

const uint32_t PAGE_SIZE = 4096;
const uint32_t TABLE_MAX_PAGES = 100;

typedef struct {
    int file_descriptor;
    uint32_t file_length;
    uint32_t num_pages;
    void* pages[TABLE_MAX_PAGES];
} Pager;

uint32_t get_unused_page_num(Pager* pager);
void* get_page(Pager* pager, uint32_t page_num);
Pager* pager_open(const char* filename);
void pager_flush(Pager* pager, uint32_t page_num);

#endif