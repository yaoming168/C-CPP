//
// Created by ym on 2021/3/30.
//

#ifndef INC_7_1_DATE_H
#define INC_7_1_DATE_H
struct Date {
    int month;
    int day;
    int year;
};
typedef struct Date Date;

char *date_format(const Date *, char *);
int date_compare(const Date*,const Date*);

#endif //INC_7_1_DATE_H
