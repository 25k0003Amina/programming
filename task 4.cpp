#include <stdio.h>

int main () {
    float basicsalary, HRA, DA, Grosssalary;

    printf("Enter the basic salary: ");
    scanf("%f", &basicsalary);

    HRA = 0.10 * basicsalary;
    DA = 0.05 * basicsalary;
    Grosssalary = HRA + DA + basicsalary;

    printf("HRA = %f.2f", HRA);
    printf("DA = %f.2f", DA);
    printf("gross salary = %.2f\n", Grosssalary);

    return 0;
}

