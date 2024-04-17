#include <stdio.h>

int main() {
    
    int num1, num2, num3;
    printf("Enter a value of the first number: ");
    scanf("%d", &num1);
    printf("Enter a value of the second number: ");
    scanf("%d", &num2);
    printf("Enter a value of the third number: ");
    scanf("%d", &num3);
    
    (num1<num2)
		?((num1<num3)?printf(" num1 is min")
		       :printf(" num3 is min"))
	:((num2<num3)?(printf("num2 is min"))
	       :(printf("num3 is min")));
   

}
