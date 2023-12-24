#include <iostream>
#include "Person.h"
#include "Date.h"
#include <vector>



void born_before(const std::vector<Person>& persons, const Date& date){
    date.show();
    std::cout <<": ";
    for(const Person& pessoa: persons) if(pessoa.get_birth_date().is_before(date)) {pessoa.show(); std::cout << " ";}
}

int main() {
    return 0;
}