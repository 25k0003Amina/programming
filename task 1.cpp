#include <stdio.h>

int main() {
    int sub1, sub2, sub3, total;
    float percentage;

    printf("Enter your first subject marks: ");
    scanf("%d", &sub1);

    printf("Enter your second subject marks: ");
    scanf("%d", &sub2);

    printf("Enter your third subject marks: ");
    scanf("%d", &sub3);

    total = sub1 + sub2 + sub3;
    percentage = (total / 300.0) * 100;

    printf("Total marks = %d\n", total);
    printf("Percentage = %.2f\n", percentage);

    return 0;
}

