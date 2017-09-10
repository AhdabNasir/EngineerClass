//
//  Engineer.cpp
//  EngineerClass
//
//  Created by Ahdab Nasir on 08/09/2017.
//  Copyright © 2017 Ahdab Nasir. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Engineer.h"
using namespace std;

Engineer::Engineer(const string &fname, const string &lname, const string &id, double salary, double bonus) : firstName(fname), lastName(lname), engineerID(id) {
    setBaseSalary(salary);
    setAwardedBonus(bonus);
}

void Engineer::setFName(const string &fname) {
    firstName = fname;
}

string Engineer::getFName() const {
    return firstName;
}

void Engineer::setLName(const string &lname) {
    lastName = lname;
}

string Engineer::getLName() const {
    return lastName;
}

void Engineer::setID(const string &id) {
    engineerID = id;
}

string Engineer::getID() const {
    return engineerID;
}

void Engineer::setBaseSalary(double salary) {
    if (salary >=0.0)
        baseSalary = salary;
    else
        throw invalid_argument("Salary must be higher than 0.0");
}

double Engineer::getBaseSalary() const {
    return baseSalary;
}

void Engineer::setAwardedBonus(double bonus) {
    if (bonus >= 0.0)
        awardedBonus = bonus;
    else
        throw invalid_argument("Bonus must be higher than 0.0");
}

double Engineer::getAwardedBonus() const {
    return awardedBonus;
}

double Engineer::totalSalary() const {
    return getBaseSalary() + getAwardedBonus();
}

void Engineer::print() const {
    cout << getFName() << " " << getBaseSalary() << " " << getAwardedBonus() << endl;
}






























