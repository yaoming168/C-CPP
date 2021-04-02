//
// Created by ym on 2021/3/30.
//
#include <stdint.h>
#include "date.h"
#include <iostream>

#define DATELEN 19

int main() {
    Date d1 = {10, 1, 1951}, d2 = {3, 7, 1995};
    char buf[DATELEN + 1];
    int cmp;
    printf("d1 == %s\n", date_format(&d1, buf));
    printf("d2 == %s\n", date_format(&d2, buf));
    cmp = date_compare(&d1, &d2);
    printf("d1 %s d2\n", cmp < 0 ? "precedes" : (cmp > 0) ? "follow" : "equals");
    return 0;
}

