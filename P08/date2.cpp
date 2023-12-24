#include "Date2.h"

#include <sstream>

Date::Date() {
    year = 1;
    month = 1;
    day = 1;
}

Date::Date(int year, int month, int day) {
    if (year < 1 || year > 9999 || month < 1 || month > 12 || day < 1 ||
        day > num_days(year, month)) {
        this->year = 0;
        this->month = 0;
        this->day = 0;
    } else {
        this->year = year;
        this->month = month;
        this->day = day;
    }
}

Date::Date(const std::string& year_month_day) {
    std::istringstream iss(year_month_day);
    char separator;
    iss >> year >> separator >> month >> separator >> day;

    if (year < 1 || year > 9999 || month < 1 || month > 12 || day < 1 ||
        day > num_days(year, month)) {
        year = month = day = 0;
    }

    if (iss.fail()) {
        year = month = day = 0;
    } else if (separator != '/') {
        year = month = day = 0;
    }
}

int Date::get_year() const { return year; }

int Date::get_month() const { return month; }

int Date::get_day() const { return day; }

bool Date::is_valid() const { return (year != 0 && month != 0 && day != 0); }

int Date::num_days(int year, int month) {
    switch (month) {
        case 2:
            if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
                return 29;
            } else {
                return 28;
            }
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        default:
            return 31;
    }
}

bool is_before(const Date& date1, const Date& date2) {
    if (date1.get_year() < date2.get_year()) {
        return true;
    } else if (date1.get_year() > date2.get_year()) {
        return false;
    } else {
        if (date1.get_month() < date2.get_month()) {
            return true;
        } else if (date1.get_month() > date2.get_month()) {
            return false;
        } else {
            if (date1.get_day() < date2.get_day()) {
                return true;
            } else {
                return false;
            }
        }
    }
}
