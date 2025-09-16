#include <stdio.h>

int main() {
    //data
    char EmployeesID [10] ;
    int Working_per_hs ;
    float salary_per_hs , total_salary  ;
    //input
     printf("Enter you Employees ID =") ;
     scanf("%s",&EmployeesID) ;
     printf("Enter you Working/hs =");
     scanf("%d",&Working_per_hs);
     printf("Enter you salary/hr =");
     scanf("%f",&salary_per_hs) ;
     total_salary = Working_per_hs * salary_per_hs ;
    
     printf("--------------------------------\n");
    //output
     printf("Employees ID : %s\n",EmployeesID) ;
     printf("salary amount/hr : U$ %.2f\n",total_salary);

    return 0;
} //end