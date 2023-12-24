#include "Date3.h"

#include <iostream>
#include <sstream>
#include <string>

int Date::num_days(int year, int month) {
    if (month == 2) {
        if (year % 400 == 0)
            return 29;
        else if (year % 100 == 0)
            return 28;
        else if (year % 4 == 0)
            return 29;
        return 28;
    }

    switch (month) {
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        default:
            return 31;
    }
}

Date::Date() { yyyymmdd = "00000000"; }

std::string convert(const int &year, const int &month, const int &day) {
    std::string yearx = std::to_string(year);
    if (yearx.length() != 4) yearx.insert(0, "0");

    std::string monthx = std::to_string(month);
    if (monthx.length() != 2) monthx.insert(0, "0");

    std::string dayx = std::to_string(day);
    if (dayx.length() != 2) dayx.insert(0, "0");

    return yearx + monthx + dayx;
}

Date::Date(int y, int m, int d) {
    if (y < 0 || y > 9999 || m < 1 || m > 12 || d < 1 || d > num_days(y, m)) {
        yyyymmdd = "00000000";
    } else {
        yyyymmdd = convert(y, m, d);
    }
}

Date::Date(const std::string &year_month_day) {
    int y = 0, m = 0, d = 0;
    char b, bb;

    std::istringstream iss(year_month_day);
    if (iss >> y >> b >> m >> bb >> d && b == '/' && bb == '/') {
        if (y < 0 || y > 9999 || m < 1 || m > 12 || d < 1 ||
            d > num_days(y, m)) {
            yyyymmdd = "00000000";
        } else {
            yyyymmdd = convert(y, m, d);
        }
    } else {
        yyyymmdd = "00000000";
    }
}

int Date::get_year() const { return std::stoi(yyyymmdd.substr(0, 4)); }

int Date::get_day() const { return std::stoi(yyyymmdd.substr(6, 2)); }

int Date::get_month() const { return std::stoi(yyyymmdd.substr(4, 2)); }

bool Date::is_valid() const { return (yyyymmdd != "00000000"); }