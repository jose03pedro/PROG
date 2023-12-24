#include "Date.h"

Date::Date() {year_ = month_ = day_ = 1;}
Date::Date(int year, int month, int day):year_(year), month_(month), day_(day){}
bool Date::is_before(const Date& date) const {
    return (date.year_*10000 + date.month_*100 + date.day_) > (year_*10000 + month_*100 + day_);
}