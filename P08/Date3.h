#include <iostream>
#include <string>

class Date {
   public:
    // constructors
    Date();
    Date(int year, int month, int day);
    Date(const std::string& year_month_day);
    // accessors
    int get_year() const;
    int get_month() const;
    int get_day() const;
    // other methods
    bool is_valid() const;
    void write() const;

   private:
    // compute the number of days of month
    static int num_days(int year, int month);
    // attribute
    std::string yyyymmdd;
};