// Specification file for the Payroll class

#ifndef PAYROLL_H
#define PAYROLL_H

class Payroll
{
private:
	double hours;
	double payRate;
public:
  void validateHrs(double h); // assign input hours to h
  void validatePayRate(double r); // assign input payRate to r
  double calcPay() ; // h * r = pay return

// WRITE YOUR CODE HERE
};

#endif
