#include <stdio.h> 

//write a program to add 3 numbers 
//Ask user for 3 different number using scanf 
//scanf("%i" ,  ...);
//Then printf the sum of the three numbers

 int main() { 
	int x, y,z;
	 printf("Enter 1st number:  ");  
	 scanf("%i",&x);    
	 printf("Enter 2nd  number:  ");   
	 scanf("%i", &y);  
	 printf("Enter 3nd  number:  ");  
	 scanf("%i", &z);  
	 printf("The sum of the three number is %i\n" , x + y + z );
         return 0;

}
