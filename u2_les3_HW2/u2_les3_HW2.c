/*
author : Abdullah mohamed
date : 10/1/2024
*/


#include <stdio.h>


//EX1_EVEN OR ODD#################################

/*
int main ()
{
	int Loc_u32Number = 0;
	
	printf("Enter an integer you want to check : ");
	scanf("%d", &Loc_u32Number);
	if (Loc_u32Number % 2 == 0) {printf("%d is Even", Loc_u32Number);}
	else {printf("%d is Odd", Loc_u32Number);}
	return 0;
}
*/

//EX1_Vowel(a,i,o,e,u) OR Constant character #################################

/*
int main ()
{
	char Loc_u8character = 0;
	
	printf("Enter an elephant you want to check : ");
	scanf("%c", &Loc_u8character);
	
	switch(Loc_u8character)
	{
		case 'a' :
		case 'i' :
		case 'e' :
		case 'o' :
		case 'u' :
		case 'A' :
		case 'I' :
		case 'E' :
		case 'O' :
		case 'U' :
			printf("%c is Vowel", Loc_u8character);
			break;
		default :
			printf("%c is Constant", Loc_u8character);
			break;	
	}
	
	return 0;
}
*/


//EX3_Largest num betweeen 3_nums#################################

/*
int main ()
{
	
	float Loc_u32Number1 = 0, Loc_u32Number2 = 0, Loc_u32Number3 = 0, Loc_u32Max = 0; 
	
	while (1)
	{
		printf("Enter Three numbers : ");
		scanf("%f %f %f", &Loc_u32Number1, &Loc_u32Number2, &Loc_u32Number3);
		if (Loc_u32Number1 >= Loc_u32Number2)
		{
			Loc_u32Max = (Loc_u32Number1 > Loc_u32Number3) ?  Loc_u32Number1 : Loc_u32Number3;
		}
		else
		{
			Loc_u32Max = (Loc_u32Number2 > Loc_u32Number3) ?  Loc_u32Number2 : Loc_u32Number3;		
		}
	
		printf("%f is Max\n", Loc_u32Max);
	}

	return 0;
}
*/


//EX4_Positive oR Negative#################################

/*
int main ()
{
	float Loc_u32Number = 0;
	while (1)
	{
		printf("Enter an integer you want to check : ");
		fflush(stdin);
		scanf("%f", &Loc_u32Number);
		if      (Loc_u32Number  > 0 )   {	printf("%f is Positive\n", Loc_u32Number);	}
		else if ( Loc_u32Number < 0 )  {	printf("%f is Negative\n", Loc_u32Number);	}
		else 						   {    printf("You Entered Zero\n");   }
	}
	return 0;
}
*/

//EX5_	Check character is alphabet OR not#################################

/*
int main ()
{
	char Loc_u8Number = 0;
	while (1)
	{
		printf("Enter a character you want to check : ");
		fflush(stdin);
		scanf("%c", &Loc_u8Number);
		if ( Loc_u8Number >= 'a' && Loc_u8Number <= 'z' ) {printf("%c is character\n  ", Loc_u8Number);}
		else if ( Loc_u8Number >= 'A' && Loc_u8Number <= 'Z' ) {printf("%c is character\n  ", Loc_u8Number);}
		else {	printf("%c is Not character\n  ", Loc_u8Number);	}	
	}		
	return 0;
}
*/

//EX6_Calculate sum of Natural numbers#################################

/*
int main ()
{
	int Loc_u32Number , Loc_u32Counter, Loc_u32Sum = 0 ;
	while (1)
	{
		printf("Enter an integer : ");
		fflush(stdin);
		scanf("%d", &Loc_u32Number);
		for (Loc_u32Counter = 0; Loc_u32Counter <= Loc_u32Number;  Loc_u32Counter++)
		{
			Loc_u32Sum += Loc_u32Counter;
		}
		printf("The Sum is : %d\n", Loc_u32Sum );
		Loc_u32Sum = 0;
	}		
	return 0;
}
*/


//EX7_ Calc Factorial#################################
/*
int main ()
{
	unsigned long long Loc_u32Number , Loc_u32Counter, Loc_u32Factorial = 1 ;
	while (1)
	{
		printf("Enter an integer : ");
		fflush(stdin);
		scanf("%d", &Loc_u32Number);
		if ( Loc_u32Number >= 0)
		{
			for (Loc_u32Counter = 0; Loc_u32Counter < Loc_u32Number;  Loc_u32Counter++)
			{
				Loc_u32Factorial *= (Loc_u32Counter + 1) ;
			}
			printf("The Factorial is : %u\n", Loc_u32Factorial );
		}
		else
		{
			printf("Error!! Factorial of Negative number doesn't exist\n");
		}			

		Loc_u32Factorial = 1;
	}		
	return 0;
}
*/





//EX8_ Simple Calculator Add, Sum, Mull, Subtract#################################

/*
int main ()
{
	double Loc_u32Number1 , Loc_u32Counter2 , Loc_u32Result = 0 ;
	char Loc_u8Operation = 0;
	while (1)
	{
		printf("Enter an operation + , - , * , / : ");
		fflush(stdin);
		scanf("%c", &Loc_u8Operation);
		fflush(stdin);
		printf("Enter two Numbers : ");
		scanf("%lf%lf", &Loc_u32Number1 , &Loc_u32Counter2);	

		switch ( Loc_u8Operation )
		{
			case '+' :
					Loc_u32Result = Loc_u32Number1 + Loc_u32Counter2;
					printf("%.2lf + %.2lf = %.2lf\n",Loc_u32Number1, Loc_u32Counter2,  Loc_u32Result);
					break;
			case '-' :
					Loc_u32Result = Loc_u32Number1 - Loc_u32Counter2;
					printf("%.2lf - %.2lf = %.2lf\n",Loc_u32Number1, Loc_u32Counter2,  Loc_u32Result);	
					break;					
			case '*' :
					Loc_u32Result = Loc_u32Number1 * Loc_u32Counter2;
					printf("%.2lf * %.2lf = %.2lf\n",Loc_u32Number1, Loc_u32Counter2,  Loc_u32Result);
					break;
			case '/' :
					Loc_u32Result = Loc_u32Number1 / Loc_u32Counter2;
					printf("%.2lf / %.2lf = %.2lf\n",Loc_u32Number1, Loc_u32Counter2,  Loc_u32Result);
					break;
			default  :
					printf("Wrong Answer\n");
					break;
		}
	}		
	return 0;
}
*/
