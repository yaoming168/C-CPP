//
// Created by ym on 2021/3/30.
//

#include "date2.h"
#include <stdio.h>
#include <stdlib.h>
struct Date{
    int month;
    int day;
    int year;
};
static const char *month_text[]=
        {"Bad month", "January", "February", "March", "April",
         "May", "June", "July", "August", "September",
         "October", "November", "December"
        };
Date *date_create(int m, int d, int y){
        Date *dp = malloc(sizeof(Date));
        if (dp == NULL){
                return NULL;
        }
        dp->month = m;
        dp->day = d;
        dp->year = y;
        return dp;
}
char *date_formatconst(Date *dp,char *buf){
        sprintf(buf,"%s %d %d",
                month_text[dp->month],dp->day,dp->year);
        return buf;
}
int date_compare(const Date *dp1, const Date *dp2){
        int result = dp1->year - dp2->year;
        if (0==result){
                result = dp1->month - dp2->month;

        }
}