//
//  employee.h SPECIFICATION FILE
//  _employees
//
// Declare the abstract data type Employee
//
//  Created by Jae Won Hyun on 7/16/16 for CS 231 (due 072616)
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//

// edit history
// 071516 add string and iostream library
// 071516 add constructor to intiialize the objects of Employee
// 071516 add private members to set first name, last name, and monthly salary
// 071616 add get method
// 071816 add set methods
// 072016 add inline comments

#ifndef employee_h
#define employee_h
#include <string>
#include <iostream>


class Employee
{
public:
    Employee(std::string fName, std::string lName, double mSalary); // initialize object
    // get
    std::string firstnameGet(); // call for first name
    std::string lastnameGet(); // call for last name
    double mSalaryGet(); // call for monthly salary
    double ySalaryGet(); // call for yearly salary
    // set
    void raise(double salaryRaise); // set monthly raise
    void setLastName(std::string newlastName); // set/change last name
    void setFirstName(std::string newfirstName); // set/change first nmae
    void setSalary(double newSalary); // set/change monthly salary
    
private:
    std::string firstName;
    std::string lastName;
    double monthlySalary;
};

#endif /* employee_h */
