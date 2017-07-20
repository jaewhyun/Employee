//
//  employee.cpp IMPLEMENTATION FILE
//  _employees
//
// Implement the abstract data type Employee
//
//  Created by Jae Won Hyun on 7/16/16 for CS 231 (due 072616)
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//

#include "employee.h"
#include <string>
#include <iostream>

// edit history:
// 071516 made constructor to intialize employee - access private variables
// 071516 add string and iostream library 
// 071616 write get method for all attributes
// 071816 fix set method for all attributes and switch the order of the variables
// 071916 add parameters to guard for negative values
// 072016 comment out debugging couts for all set method for all attributes
// 072016 add inline comments

// initiate employee object
Employee::Employee(std::string fName, std::string lName, double mSalary)
{
    firstName = fName;
    lastName = lName;
    monthlySalary = mSalary;
}

// get first name of employee (no input, string output)
std::string Employee::firstnameGet()
{
    return firstName;
}

// get last name of employee (no input, string output)
std::string Employee::lastnameGet()
{
    return lastName;
}

// get monthly salary of the employee (no input, string output)
double Employee::mSalaryGet()
{
    return monthlySalary;
}

// get yearly salary of the employee (no input, double output)
double Employee::ySalaryGet()
{
    double yearlySalary;
    
    yearlySalary = monthlySalary * 12.00;
    return yearlySalary;
}

// raise emplyee monthly salary by 10% and guard for negative values (double input, no visual output)
void Employee::raise(double salaryRaise)
{
    if (salaryRaise >= 0)
    {
        monthlySalary = monthlySalary * (1.00 + (salaryRaise/100.00));
        // std::cout<<"Your monthly salary has been raised to $"<< std::setprecision(2) << monthlySalary <<std::endl;
    }
    else
        std::cout<<"You must enter a positive value" << std::endl;
}

// set: change employee last name (string input, no visual output)
void Employee::setLastName(std::string newlastName)
{
    lastName = newlastName;
    
    // std::cout<<"Your name has been updated to: "<< firstName <<" "<< lastName << std::endl;
}

// set: change employee first name (string input, no visual output)
void Employee::setFirstName(std::string newfirstName)
{
    firstName = newfirstName;
    
    // std::cout<<"Your name has been updated to: "<< firstName <<" "<< lastName << std::endl;
}

// set: change employee monthly salary (double input, no visual output)
void Employee::setSalary(double newSalary)
{
    if (newSalary >= 0)
    {
        monthlySalary = newSalary;
        // std::cout<<"Your new monthly salary has been updated to: $"<< monthlySalary <<std::endl;
    }
    else
        std::cout<<"You must put in a positive value."<< monthlySalary <<std::endl;
}

