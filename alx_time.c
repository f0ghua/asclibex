#include <time.h>

#include "alx_time.h"

size_t alx_tmtime_format(time_t t, char *buf, size_t bufsz, const char *format)
{
    struct tm *tt;

    tt = gmtime(&t);

    return((strftime(buf, bufsz, format, tt) > 0) ? 1 : 0);
}
