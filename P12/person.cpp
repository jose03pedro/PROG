#include "Person.h"

class Student : public Person {
   public:
    Student(int id, const string& name, const string& course)
        : Person(id, name), course_(course) {}

    const string& course() const { return course_; }

    string to_string() const override {
        ostringstream out;
        out << Person::to_string() << '/' << course_;
        return out.str();
    }

   private:
    string course_;
};

class ErasmusStudent : public Student {
   public:
    ErasmusStudent(int id, const string& name, const string& course,
                   const string& country)
        : Student(id, name, course), country_(country) {}

    const string& country() const { return country_; }

    string to_string() const override {
        ostringstream out;
        out << Student::to_string() << '/' << country_;
        return out.str();
    }

   private:
    string country_;
};