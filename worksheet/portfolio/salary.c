
#include <stdio.h>

/*
 * Portfolio submission
 * Name: Jason Chung
 * ID: 201974903
 */

 int main() {

    // define and initialise variables for the problem data 
   float salary = 36250;
   int NI_Contribution = 8;
   int Tax_Contribution = 15;

    // calculate the deductions and final take-home salary
   float NI_Value = salary * (NI_Contribution / 100);
   float NI_Deducted = salary - NI_Value;

   float taxValue = NI_Deducted * (Tax_Contribution / 100);
   float finalSalary = NI_Deducted - taxValue;

    // Use only these print statement with appropriate formatting and variable names

    printf("Salary £%.2f", salary);
    printf("NI contribution £%.2f", NI_Value);
    printf("Tax contribution £%.2f", taxValue);
    printf("Take home salary £%.2f", finalSalary);

    return 0;
 }