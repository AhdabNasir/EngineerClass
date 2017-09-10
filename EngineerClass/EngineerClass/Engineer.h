//
//  Engineer.h
//  EngineerClass
//
//  Created by Ahdab Nasir on 08/09/2017.
//  Copyright © 2017 Ahdab Nasir. All rights reserved.
//

#ifndef Engineer_h
#define Engineer_h

#include <string>

class Engineer {
    
private:
    std::string firstName;
    std::string lastName;
    std::string engineerID;
    double baseSalary;
    double awardedBonus;
    
public:
    Engineer(const std::string &, const std::string &, const std::string &, double=0.0, double=0.0);
    
    void setFName(const std::string &);
    std::string getFName() const;
    void setLName(const std::string &);
    std::string getLName() const;
    void setID(const std::string &);
    std::string getID() const;
    
    void setBaseSalary(double);
    double getBaseSalary() const;
    void setAwardedBonus(double);
    double getAwardedBonus() const;
    
    double totalSalary() const;
    void print() const;
    
};

#endif /* Engineer_h */
