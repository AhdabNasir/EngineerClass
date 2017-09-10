//
//  SeniorEngineer.cpp
//  EngineerClass
//
//  Created by Ahdab Nasir on 08/09/2017.
//  Copyright © 2017 Ahdab Nasir. All rights reserved.
//

#include "SeniorEngineer.h"
#include <iostream>
using namespace std;

SeniorEngineer::SeniorEngineer(const string &fname, const string &lname, const string &id, double salary, double bonus, double extend): Engineer(fname, lname, id, salary, bonus){
    setExSalary(extend);
}

void SeniorEngineer::setExSalary(double extend) {
    if (extend >= 0.0)
        extendedSalary = extend;
    else
        throw invalid_argument("Extended Salary must be higher than 0.0");
}

double SeniorEngineer::getExSalary() const {
    return extendedSalary;
}

double SeniorEngineer::totalSalary() const {
    return getExSalary() + Engineer::totalSalary();
}

void SeniorEngineer::print() const {
    Engineer::print();
    cout << getExSalary() << endl;
}
