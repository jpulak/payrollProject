// program to take in employee data use class to store in funcs
// output data accordingly 

#include <iostream>
#include <cstdlib>
#include <iomanip> //precision
#include "Payroll.h"
using namespace std;

// func form class to create input validation of hours and hours = h

void Payroll::validateHrs(double h){
  if (h <= 60)
  {
    hours = h;
  }
  else
  {
    hours = -1; // invalid input
  }
}

// func from class to set payrate = priv r

void Payroll::validatePayRate(double r)
{
  payRate = r;
}

// func from class to cacluate pay from assigned vars

double Payroll::calcPay()
{
  return hours * payRate;
}

// driver function

int main()
{

  //creat array of 7 payroll objects

  Payroll employees[7];

  cout << "Enter the hours worked and pay rate for 7 employees: " << endl << endl;

  // take in input of pay rate and hours

  for (int i = 0; i < 7; i++)
  {
    double rate, hours;
    cout << "Employee #" << (i + 1) << "pay rate: ";
    cin >> rate;

    cout << "Employee #" << (i + 1) << " hours worked: ";
    cin >> hours;

    // store hours/rate of corresponding employee arr in class objects

    employees[i].validatePayRate(rate);
    employees[i].validateHrs(hours);

    // input validation hrs 

    if (hours > 60)
    {
      cout << "Invalid number of hours." << endl;
    }
  }

  // output calculated pay of each through class

  cout << fixed << setprecision(2);
  cout << endl << "Total pay: " << endl << endl; 
  for (int i = 0 ; i < 7 ; i++)
  {
    cout << "Employee #" << (i +1) << ": " << employees[i].calcPay() << endl;
  }
  return 0;
}
