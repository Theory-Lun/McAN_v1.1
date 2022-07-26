//
// Created by lun on 1/28/21.
//

#include <stdbool.h>
#include <string.h>

bool chomp( char *str ) {
    size_t len = strlen(str);

    /* Empty string */
    if( len == 0 ) {
        return false;
    }

    size_t last_idx = len - 1;
    if( str[last_idx] == '\n' ) {
        str[last_idx] = '\0';
        return true;
    }
    else {
        return false;
    }
}