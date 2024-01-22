/*
author : Abdullah mohamed
date : 22/1/2024
*/


#include <stdio.h>


//EX_1_Primary numbers between two intervals#################################

/*
int u32GitPrim ( int Num);

int main ()
{
	
	int Loc_u32Start, Loc_u32End, Loc_u32Prime = 1;
	
	printf("Enter the Intervals\nStart : ");
	scanf("%d", &Loc_u32Start);
	printf("End : ");
	scanf("%d", &Loc_u32End);
	
	Loc_u32Prime = Loc_u32Start;
	do{
		Loc_u32Prime = u32GitPrim(Loc_u32Prime);
		if(Loc_u32Prime < Loc_u32End)
		{
			printf("%d\t", Loc_u32Prime);
			Loc_u32Prime += 2 ;
		}
	}while( Loc_u32Prime < Loc_u32End);
	
	return 0;
}


int u32GitPrim ( int Num)
{
	int Loc_u32RetNum;
	if( Num % 2 == 0)
	{
		Num++;
	}
	while (Num % 3 == 0 || Num % 5 == 0 )
	{
		Num += 2;
	}
	
	return Num;
}
*/

//EX_2_Git Factorial using Recursion#################################

/*
unsigned long long int u32Factorial ( char Loc_u8Fact);

int main ()
{
	char Loc_u8Fact;
	printf("Enter the Number [0 : 20 ] : ");
	scanf("%d", &Loc_u8Fact);
	if ( Loc_u8Fact >  20  || Loc_u8Fact < 0)
	{
		printf("out of range");
	}
	else 
	{
		printf("The Factorial of %d is : %llu", Loc_u8Fact, u32Factorial(Loc_u8Fact));
	}
	
	return 0;
}


unsigned long long int u32Factorial (char Loc_u8Fact)
{
	static unsigned long long int Loc_u64Res = 1;
	if( Loc_u8Fact > 1)
	{
		Loc_u64Res = Loc_u8Fact * u32Factorial(--Loc_u8Fact);
	}
	return Loc_u64Res;
		
}
*/

//EX_3_Reverse sentence using recursion#################################
/*
#include <string.h>

void vReverseSent( char Str[], char n);
int main ()
{
	char Loc_u8Srting1 [50], Loc_u8Size;
	
	printf("Enter String : ");
	gets(Loc_u8Srting1);
	
	Loc_u8Size = strlen( Loc_u8Srting1 )-1;
	
	vReverseSent( Loc_u8Srting1, Loc_u8Size);
	
	printf("%s", Loc_u8Srting1);
	return 0;
}

void vReverseSent( char Str[], char n)
{
	char Loc_u8Count1, L_u8Temp;
	for ( Loc_u8Count1 = 0; Loc_u8Count1 < n; Loc_u8Count1++, n--)
	{
		L_u8Temp = Str[Loc_u8Count1];
		Str[Loc_u8Count1] = Str[n];
		Str[n] = L_u8Temp;
	}	
}
*/
//EX_4_Calculate The Power of number using recursion#################################

/*
int u32Power(int num, int pow);
int main ()
{
	int Loc_u32Num, Loc_u32Pow, Loc_u64Res;
	printf("Enter the Number : ");
	scanf("%d", &Loc_u32Num);
	printf("Enter the Power : ");
	scanf("%d", &Loc_u32Pow);
	Loc_u64Res = u32Power( Loc_u32Num, Loc_u32Pow);
	printf("The result is : %d ^ %d = %d", Loc_u32Num, Loc_u32Pow, Loc_u64Res);
	return 0;
}
int u32Power(int num, int pow)
{
	int  Loc_u32Ret = 1;
	if ( pow == 1 )
	{
		Loc_u32Ret = num;
	}
	else if ( pow > 1)
	{
		for(  pow; pow >= 1; pow--)
		{
			Loc_u32Ret *= num;
		}			
	}
	
		
	return Loc_u32Ret;
}
*/