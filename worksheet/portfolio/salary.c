
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Rabehul haq islam
 * ID: 201972837
 */

 int main( void ) {

    // define and initialise variables for the problem data 
    float total_salary = 36250;
    float NI = 8;
    float NI_deduction = 0;
    float tax = 15;
    float tax_deduction = 0;
    float salary;

    // calculate the deductions and final take-home salary
    //NI_deduction calculation
   NI_deduction = total_salary * (NI / 100);
   salary = total_salary - NI_deduction;
   salary = salary - NI_deduction;

   //tax deduction calculations
   if (salary > 12500) {
      tax_deduction = salary - 12500;
      tax_deduction = tax_deduction * (tax / 100);
   }

   //final take hom salary after deductions
   salary = salary - tax_deduction;


    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f\n",total_salary);
    printf("NI contribution £%.2f\n",NI_deduction);
    printf("Tax contribution £%.2f\n",tax_deduction);
    printf("Take home salary £%.2f\n",salary);

    return 0;
 }