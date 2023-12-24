#include "Date3.h"

#include <sstream>

Date::Date() { yyyymmdd = "00010101"; }

Date::Date(int year, int month, int day) {
    std::ostringstream oss;
    oss << year;
    if (month < 10) {
        oss << '0';
    }
    oss << month;
    if (day < 10) {
        oss << '0';
    }
    oss << day;
    yyyymmdd = oss.str();
}

Date::Date(const std::string& year_month_day) {
    if (year_month_day.size() != 8) {
        yyyymmdd = "00010101";
    } else {
        yyyymmdd = year_month_day;
    }
}

int Date::get_year() const { return std::stoi(yyyymmdd.substr(0, 4)); }

int Date::get_month() const { return std::stoi(yyyymmdd.substr(4, 2)); }

int Date::get_day() const { return std::stoi(yyyymmdd.substr(6, 2)); }

bool Date::is_valid() const {
    int year = get_year();
    int month = get_month();
    int day = get_day();
    return (year >= 1 && year <= 9999 && month >= 1 && month <= 12 &&
            day >= 1 && day <= num_days(year, month));
}

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
