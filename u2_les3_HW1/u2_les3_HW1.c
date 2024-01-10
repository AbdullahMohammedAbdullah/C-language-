/*
author : Abdullah mohamed
date : 10/1/2024
*/
#include <stdio.h>

/* #####Home_work-1###############


EX1:

Write C Program to Print a Sentence

i should see the Console as following:
##########Console-output###
C Programming
###########################

########################################################################
 */
/*

int main ()
{
	printf("C Programming");
	
	return 0;
}
*/

/*
EX2:

Write C Program to Print a Integer Entered by a User
i should see the Console as following:
##########Console-output###
Enter a integer: 25
You entered: 25
###########################

########################################################################
*/

/*
int main ()
{
	char Loc_u8Number = 0;
	printf("Enter an integer: ");
	scanf("%d", &Loc_u8Number);
	printf("You entered: %d", Loc_u8Number);
	return 0;
}
*/

/*
EX3:

Write C Program to Add Two Integers

i should see the Console as following:
##########Console-output###
Enter two integers: 12
11
Sum: 23
###########################

########################################################################
*/

/*
int main ()
{
	char Loc_u8Number1 = 0, Loc_u8Number2 = 0, Loc_u8sum = 0;
	printf("Enter two integers:\n");
	fflush(stdin);
	scanf("%d%d", &Loc_u8Number2, &Loc_u8Number1);

	Loc_u8sum = Loc_u8Number1 + Loc_u8Number2;
	printf("Sum: %d", Loc_u8sum );
	return 0;
}
*/

/*
EX4:

Write C Program to Multiply two Floating Point Numbers
i should see the Console as following:
##########Console-output###

###########################
Enter two numbers: 2.4
1.1
Product: 2.640000
########################################################################
*/
/*
int main ()
{
	float Loc_u32Number1 = 0, Loc_u32Number2 = 0, Loc_u32Multiply = 0;
	printf("Enter two numbers:\n");
	fflush(stdin);
	scanf("%f%f", &Loc_u8Number2, &Loc_u8Number1);

	Loc_u8Multiply = Loc_u8Number1 * Loc_u8Number2;
	printf("Sum: %f", Loc_u8Multiply );
	return 0;
}
*/

/*
EX5:

Write C Program to Find ASCII Value of a Character

#########Console_output######
Enter a character: G
ASCII value of G = 71
#############################


########################################################################
*/
/*
int main ()
{
	char Loc_u8charcter = 0;
	printf("Enter a character: \n");
	fflush(stdin);
	scanf("%c", &Loc_u8charcter);
	printf("ASCII value of %c = %d", Loc_u8charcter, Loc_u8charcter );
	return 0;
}
*/

/*
EX6:

Write Source Code to Swap Two Numbers

#########Console_output######
Enter value of a: 1.20
Enter value of b: 2.45

After swapping, value of a = 2.45
After swapping, value of b = 1.2
#############################
########################################################################
*/

/*
int main ()
{
	float Loc_u32Number1 = 0, Loc_u32Number2 = 0, Loc_u32Swap = 0;
	printf("Enter value of Number1: ");
	scanf("%f", &Loc_u32Number1);
	printf("Enter value of Number2: ");
	scanf("%f", &Loc_u32Number2);
	
	Loc_u32Swap =   Loc_u32Number1;
	Loc_u32Number1 = Loc_u32Number2;
	Loc_u32Number2 = Loc_u32Swap;
	
	printf("After swapping, value of Number1 = %f \n After swapping, value of Number2 = %f", Loc_u32Number1, Loc_u32Number2 );
	return 0;
}
*/

/*
EX7:
it is an interview trick

Write Source Code to Swap Two Numbers without temp variable.
*/

/*
int main ()
{
	float Loc_u32Number1 = 0, Loc_u32Number2 = 0;
	printf("Enter value of Number1: ");
	scanf("%f", &Loc_u32Number1);
	printf("Enter value of Number2: ");
	scanf("%f", &Loc_u32Number2);
	
	Loc_u32Number1 = Loc_u32Number1 * Loc_u32Number2;
	Loc_u32Number2 = Loc_u32Number1 / Loc_u32Number2;
	Loc_u32Number1 = Loc_u32Number1 / Loc_u32Number2;
	printf("After swapping, value of Number1 = %f \n After swapping, value of Number2 = %f", Loc_u32Number1, Loc_u32Number2 );
	return 0;
}
*/