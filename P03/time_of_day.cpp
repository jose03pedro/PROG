#include <iostream>
#include "time_of_day.h"

time_of_day tick(time_of_day t){
    if (t.m == 59){
        t.m = 0;
        if (t.h == 23){
            t.h = 0;
        } 
        else {
            t.h++;
        }
    } 
    else {
        t.m++;
    }
    return t;
}