#include <stdio.h>
int primenumber(int number) 
{ 
    int i; 
    for (i = 2; i <= number / 2; i++) 
	{ 
        if (number % i != 0) 
            continue; 
        else
            return 1; 
    } 

    return 0; 
} 

int main() 
{ 
    int num , res = 0;
	printf("Enter the value of Number : ");
	scanf("%d",&num);
    res = primenumber(num); 
    if (res == 0) 
        printf("%d is a prime number", num); 
    else
        printf("%d is not a prime number", num); 
}