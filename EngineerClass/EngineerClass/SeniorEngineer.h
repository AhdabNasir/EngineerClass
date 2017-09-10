//
//  SeniorEngineer.hpp
//  EngineerClass
//
//  Created by Ahdab Nasir on 08/09/2017.
//  Copyright © 2017 Ahdab Nasir. All rights reserved.
//

#ifndef SeniorEngineer_h
#define SeniorEngineer_h

#include <stdio.h>
#include <string>
#include "Engineer.h"

class SeniorEngineer: public Engineer {
private:
    double extendedSalary;
    
public:
    
    SeniorEngineer(const std::string &, const std::string &, const std::string &, double=0.0, double=0.0, double=0.0);
    
    void setExSalary(double);
    double getExSalary() const;
    
    double totalSalary() const;
    void print() const;
    
};

#endif /* SeniorEngineer_h */
