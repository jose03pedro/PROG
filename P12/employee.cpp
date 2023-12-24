#include "Employee.h"

#include <iostream>
#include <vector>

#include "HourlyEmployee.h"
#include "SalariedEmployee.h"

void read_hours_worked(std::vector<Employee*>& employees) {
    for (Employee* employee : employees) {
        if (HourlyEmployee* hourlyEmployee =
                dynamic_cast<HourlyEmployee*>(employee)) {
            double hoursWorked;
            std::cout << "Enter hours worked for Hourly Employee "
                      << employee->get_name() << ": ";
            std::cin >> hoursWorked;
            static_cast<HourlyEmployee*>(employee)->set_hours_worked(
                hoursWorked);
        }
    }
}

void calculate_pay(std::vector<Employee*>& employees) {
    for (Employee* employee : employees) {
        std::cout << "Calculating pay for employee: " << employee->get_name()
                  << std::endl;
        employee->calculate_net_pay();
        double netPay = employee->get_net_pay();

        std::cout << "Net pay: " << netPay << std::endl;
    }
}

void print_checks(const std::vector<Employee*>& employees) {
    for (const Employee* employee : employees) {
        std::cout << "Printing check for employee: " << employee->get_name()
                  << std::endl;
        employee->print_check();
    }
}
