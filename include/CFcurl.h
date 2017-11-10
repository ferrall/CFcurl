#include "cshared.h"
#include "curl/curl.h"
#include <sys/stat.h>
#include <fcntl.h>

static size_t write_data(void *ptr, size_t size, size_t nmemb, void *stream);

void OXCALL fGet OXARGS;
void OXCALL fPut OXARGS;
void OXCALL fPost OXARGS;
