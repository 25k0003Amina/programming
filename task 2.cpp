#include <stdio.h>

int main (){
	int a,b;
	int temp;
	
	printf("Enter the first number:", a);
    scanf ("%d", a);
    
    printf("Enter the second number:", b);
    scanf ("%d", b);
    
    temp=a;
    a=b;
    b=temp;
    
    printf ("After swapping\n");
    printf("a = %d", a);
    printf ("b = %d", b);
    
	return 0;
}

