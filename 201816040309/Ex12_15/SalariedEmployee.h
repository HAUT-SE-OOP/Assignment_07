// Fig. 12.11: SalariedEmployee.h
 // SalariedEmployee class derived from Employee.
 #ifndef SALARIED_H
 #define SALARIED_H

 #include <string> // C++ standard string class
 #include "Employee.h" // Employee class definition

class SalariedEmployee : public Employee
 {
 public:
    SalariedEmployee( const std::string &, const std::string &,
    const std::string &, double = 0.0 );
    virtual ~SalariedEmployee() { } // virtual destructor

    void setWeeklySalary( double ); // set weekly salary
    double getWeeklySalary() const; // return weekly salary
    virtual double earnings() const override;
    virtual void print() const override;
 // keyword virtual signals intent to override


 private:
     double weeklySalary;

 }; // end class SalariedEmployee

#endif // SALARIED_H
