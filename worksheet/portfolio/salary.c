
#include <stdio.h>

/*
 * Portfolio submission
 * Name: Jason Chung
 * ID: 201974903
 */

 int main() {

    // define and initialise variables for the problem data 
    float salary = 36250.0;
    float NI_Contribution = 8.0;
    float Tax_Contribution = 15.0;

    // calculate the deductions and final take-home salary
    float NI_Value = salary * (NI_Contribution / 100.0);
    float NI_Deducted = salary - NI_Value;

    float taxValue = 0.0;

    if (NI_Deducted > 12500.0) {
        taxValue = (NI_Deducted - 12500.0) * (Tax_Contribution / 100.0);
    }
    
    float finalSalary = NI_Deducted - taxValue;

    // Use only these print statement with appropriate formatting and variable names

    printf("Salary £%.2f\n", salary);
    printf("NI contribution £%.2f\n", NI_Value);
    printf("Tax contribution £%.2f\n", taxValue);
    printf("Take home salary £%.2f\n", finalSalary);

    return 0;
 }