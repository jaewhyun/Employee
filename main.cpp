//
//  main.cpp 
//  _employees
//
// Input values and put the code into action
//
//  Created by Jae Won Hyun on 7/16/16 for CS 231 (due 072616)
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//

// edit history:
// 071516 initialize employees of john doe and jane jones along with their monthly salaries
// 071516 add iostream and string library
// 071816 grab employee name and salaries with the get method
// 071816 give employee a raise
// 071816 change last name of jane jones to jane doe
// 071816 display employee info, display yearly salary and display jane's info
// 071916 add std::fixed and std::setprecision(2) to get the correct number of decimal points in double
// 071916 add iomanip library
// 071916 test for negative input in raise
// 072016 add inline comments


#include "employee.h"
#include <string>
#include <iostream>
#include <iomanip>

int main()
{
    // initialize employees
    Employee e1("John", "Doe", 12345.67);
    Employee e2("Jane", "Jones", 76543.21);
    
    // display first employee name
    std::cout<<"Your name is: "<< e1.firstnameGet() << " " << e1.lastnameGet() <<std::endl;
    
    // display first employee monthly salary
    std::cout<<"Your monthly salary is: $"<< std::fixed << std::setprecision(2) << e1.mSalaryGet() <<std::endl;
    
    // display first employee yearly salary
    std::cout<<"Your yearly salary is: $" << std::fixed <<std::setprecision(2) << e1.ySalaryGet() <<std::endl;
    
    // raise monthly salary for e1
    e1.raise(10.00);
    
    // code omitted to test for negative input
    // e1.raise(-10.00);
    
    // alert user about the raise in monthly salary for e1
    std::cout<<"Your monthly salary has been raise to $"<< std::fixed << std::setprecision(2) << e1.mSalaryGet()<<std::endl;
    
    // alert user about the raise in yearly salary for e1
    std::cout<<"After the 10% raise, your yearly salary is $"<< std::fixed << std::setprecision(2) << e1.ySalaryGet() << std::endl;
    
    // display first employee name
    std::cout<<"Your name is: "<< e2.firstnameGet() << " " << e2.lastnameGet() <<std::endl;
    
    // change last name of e2 to doe
    e2.setLastName("Doe");
    
    // alert user about the change in name
    std::cout<<"Your name has been changed to: "<< e2.firstnameGet() << " " << e2.lastnameGet() <<std::endl;
    
    // display second employee monthly salary
    std::cout<<"Your monthly salary is: $"<< std::fixed << std::setprecision(2) << e2.mSalaryGet() <<std::endl;
    
    // display second employee yearly salary
    std::cout<<"Your yearly salary is: $"<< std::fixed << std::setprecision(2) << e2.ySalaryGet() <<std::endl;
    
    // raise monthly salary for e2
    e2.raise(10.00);
    
    // alert user about the raise in e2 monthly salary
    std::cout<<"Your monthly salary has been raised to $" << std::fixed<< std::setprecision(2) << e2.mSalaryGet()<<std::endl;
    
    // alert user about the raise in e2 yearly salary 
    std::cout<<"After the 10% raise, your yearly salary is $"<< std::fixed << std::setprecision(2) << e2.ySalaryGet() << std::endl;
}
