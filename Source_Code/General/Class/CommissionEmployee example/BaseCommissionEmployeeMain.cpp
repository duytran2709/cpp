//BaseCommissionEmployee class test program.

#include <iostream>
#include <iomanip>

#include "BaseCommissionEmployee.h"

using namespace std;

int main ()
{
    //instantiate BaseCommissionEmployee object
    BaseCommissionEmployee employee ( "Bob", "Lewis", "333-33-3333" , 5000 , .04 , 300);
    
    //set floating-point output formatting
    cout << fixed << setprecision (2);

    //get commission employee data
    cout << "Employee information obtained by get functions: \n"
    << "\nFirst name is " << employee.getFirstName ()
    << "\nLast name is " << employee.getLastName ()
    << "\nSocial security number is " << employee.getSocialSecurityNumber()
    << "\nCommision rate is " << employee.getGrossSales ()
    << "\nCommission rate is " << employee.getCommissionRate ()
    << "\nBase salary is " << employee.getBaseSalary () << endl;
    employee.setBaseSalary (1000) ;

    cout << "\nUpdated employee information output by print function: \n" << endl;
    employee.print ();

    cout << "\n\nEmployee's earnings: $" << employee.earnings () << endl;
}
