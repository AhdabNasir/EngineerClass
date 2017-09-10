//
//  main.cpp
//  EngineerClass
//
//  Created by Ahdab Nasir on 08/09/2017.
//  Copyright © 2017 Ahdab Nasir. All rights reserved.
//

#include <iostream>
#include "SeniorEngineer.h"
using namespace std;


int main() {

    Engineer engineer ("Thomas", "Walkers", "4", 700, 200);
    SeniorEngineer senior ("Anne", "Smith", "6", 2000, 300, 1000);
    
    cout << engineer.getBaseSalary();
    cout<< senior.getBaseSalary();
    
    cout<< engineer.getFName();
    cout<< senior.getLName();
    
    cout << engineer.getAwardedBonus();
    
    cout<< senior.getExSalary();
    
    engineer.setBaseSalary(900);
    cout << engineer.getBaseSalary();
    
    engineer.print();
    senior.print();
    
    cout << engineer.totalSalary();
    cout << senior.totalSalary();
    
    
    

    
    
}
