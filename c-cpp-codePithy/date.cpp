#include <iostream>
#include <stdint.h>
#include "date.h"

static const char *month_text[] =
        {"Bad month", "January", "February", "March", "April",
         "May", "June", "July", "August", "September",
         "October", "November", "December"
        };

char *date_format(const Date *dp, char *buf) {
    sprintf(buf, "%s %d,%d",
            month_text[dp->month], dp->day, dp->year);
    return buf;
}

int date_compare(const Date *dp1, const Date *dp2) {
    int result = dp1->year - dp2->year;
    if (0 == result){
        result = dp1->month - dp2->month;
    }
    if (0 == result){
        result = dp1->day - dp2->day;
    }
    return result;

}

