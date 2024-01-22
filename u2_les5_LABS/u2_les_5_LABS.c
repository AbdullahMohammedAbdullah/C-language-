/*
author : Abdullah mohamed
date : 22/1/2024
*/


#include <stdio.h>


//LAB_1_Factorial#################################
//(llu) to print unsigned long long int

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
	int Loc_u32Count = 1;
	unsigned long long int Loc_u32Res = 1;
	for ( Loc_u32Count = Loc_u8Fact; Loc_u32Count > 0; Loc_u32Count--)
	{
		Loc_u32Res *= Loc_u32Count;
	}
	return Loc_u32Res;
		
}
*/

//LAB_2_Calc Min Val of A given Array#################################

/*
int u32CalcMinNumOfArr( int arr[], int n);

int main ()
{
	char Loc_u8Size, Loc_u8Count;
	int Loc_u32Arr[30], Loc_u32MinNum;
	printf("Enter Size of Arr : ");
	scanf("%d", &Loc_u8Size);
	fflush(stdin);
	printf("Enter The Elements\n");
	for ( Loc_u8Count = 0; Loc_u8Count < Loc_u8Size; Loc_u8Count++)
	{
			scanf("%d", &Loc_u32Arr[Loc_u8Count] );
	}
	Loc_u32MinNum = u32CalcMinNumOfArr( Loc_u32Arr, Loc_u8Size);
	printf("The Min Value is = %d", Loc_u32MinNum);
	
	return 0;
}

int u32CalcMinNumOfArr( int arr[], int n)
{
	char Loc_u8Count2;
	int Loc_u32Min =  arr[0];
	for( Loc_u8Count2 = 1; Loc_u8Count2 < n-1; Loc_u8Count2++ )
	{
		if ( arr[Loc_u8Count2] < Loc_u32Min )
		{
			Loc_u32Min = arr[Loc_u8Count2];
		}
	}
	return Loc_u32Min;
}
*/

//LAB_3_Finding a Name in a Set of Names#################################

/*
#include <string.h>

char * u8pFindName( char arr[][10], char FindStr[], int n);
int main ()
{
	while(1){
	char Loc_u8Size, Loc_u8Count;
	char Loc_u8Arr[10][10], Loc_u8StrFind[10], *Loc_u8Res = "\0";
	printf("Enter Num of Names : ");
	scanf("%d", &Loc_u8Size);
	
	for (Loc_u8Count = 0; Loc_u8Count < Loc_u8Size; Loc_u8Count++)
	{
		scanf("%s", &Loc_u8Arr[Loc_u8Count]);
	}
	
	printf("Enter Name to Find it : ");
	scanf("%s", &Loc_u8StrFind);
	
	Loc_u8Res = u8pFindName( Loc_u8Arr, Loc_u8StrFind, Loc_u8Size );
	if ( strcmp( Loc_u8Res, "\0") != 0 )
	{
		printf("%s is Found\n", Loc_u8Res);
	}
	else
	{
		printf("%s is not Found\n", Loc_u8StrFind);		
	}
	
	
	}
	return 0;
}

char * u8pFindName( char arr[][10], char FindStr[],int n)
{
	char Loc_u8Count2, *Ret = "\0";
	
	for (Loc_u8Count2 = 0; Loc_u8Count2 < n; Loc_u8Count2++)
	{
		if(  strcmp(arr[Loc_u8Count2], FindStr) == 0  )
		{
			Ret = arr[Loc_u8Count2];
			break;
		}
	}
		
		return Ret;
	
}
*/

//LAB_4_func to print#################################
/*****************************************
/*     0 1 2 3 4 5 6 7 8 9               *
/*     1 2 3 4 5 6 7 8 9                 *
/*     3 4 5 6 7 8 9                     *
/*     4 5 6 7 8 9                       *
/*     5 6 7 8 9                         *
/*     6 7 8 9                           *
/*     7 8 9                             *
/*     8 9                               *
/*     9                                 *
/****************************************/

/*
void vPrint(void);
int main ()
{
	vPrint();
	return 0;
}

void vPrint(void)
{
	char Loc_u32Count, Loc_u32Count2;
	for( Loc_u32Count = 0; Loc_u32Count <= 9; Loc_u32Count++)
	{
		for( Loc_u32Count2 = Loc_u32Count; Loc_u32Count2 <= 9; Loc_u32Count2++)
		{
			printf("%d ", Loc_u32Count2);
		}
		printf("\n");
	}
}
*/