/*
author : Abdullah mohamed
date : 18/1/2024
*/


#include <stdio.h>


//EX_1_Sum of 2D_Matrix each (2*2)#################################

/*
int main ()
{
	
	float Loc_u32Matrix1[2][2], Loc_u32Matrix2[2][2], Loc_u32Matrix_Sum[2][2];
	char Loc_u8count_1, Loc_u8count_2, Loc_u8count_3;
	
	for ( Loc_u8count_1 = 0; Loc_u8count_1 < 2; Loc_u8count_1++)//matrix
	{
		printf("Enter Elements of matrix  [%d]\n", Loc_u8count_1+1);

		for (Loc_u8count_2 = 0; Loc_u8count_2 < 2; Loc_u8count_2++)//rows
		{
			for (Loc_u8count_3 = 0; Loc_u8count_3 < 2; Loc_u8count_3++)//columns
			{
				printf("Enter  ro%dcol%d\n", Loc_u8count_2, Loc_u8count_3);
				if (Loc_u8count_1 == 0)
				{
					scanf("%f", &Loc_u32Matrix1[Loc_u8count_2][Loc_u8count_3] );	
				}
				else if (Loc_u8count_1 == 1)
				{
					scanf("%f", &Loc_u32Matrix2[Loc_u8count_2][Loc_u8count_3] );	
					Loc_u32Matrix_Sum [Loc_u8count_2][Loc_u8count_3] =  Loc_u32Matrix1[Loc_u8count_2][Loc_u8count_3] + Loc_u32Matrix2[Loc_u8count_2][Loc_u8count_3];
				}				
				
			}
		
		}
		printf("\n\n");
	}
	
	printf("sum of matrixs\n");
	for (Loc_u8count_2 = 0; Loc_u8count_2 < 2; Loc_u8count_2++)//rows
	{
		for (Loc_u8count_3 = 0; Loc_u8count_3 < 2; Loc_u8count_3++)//columns
		{
			printf("%f\t", Loc_u32Matrix_Sum [Loc_u8count_2][Loc_u8count_3]);
		}
		printf("\n");
	}
	return 0;
}
*/


//EX_2_Calc Average to n elements using array#################################

/*
int main ()
{
	float Loc_f32Arr [50], Loc_f32Average = 0;
	char Loc_u8NumOfElements, Loc_u8Count ;
	printf("Enter Num Of Elements n : ");
	scanf("%d", &Loc_u8NumOfElements);
	
	for (Loc_u8Count = 0; Loc_u8Count < Loc_u8NumOfElements; Loc_u8Count++)
	{
		printf("%d. Enter Number : ", Loc_u8Count+1);
		scanf("%f", &Loc_f32Arr[Loc_u8Count]);		
		Loc_f32Average +=  Loc_f32Arr[Loc_u8Count];
	}
	
	Loc_f32Average /= Loc_u8NumOfElements;
	printf("%f", Loc_f32Average);
	
	return 0;
}
*/


//EX_3_Transpose of 2D_Matrix#################################

/*
int main ()
{
	char Loc_u8count_1 = 0, Loc_u8NumOfRows = 0, Loc_u8NumOfCo = 0, Loc_u8count_2 = 0;
	float Loc_f32Matr[10][10], Loc_f32MatrTrans[10][10];
	
	
	printf("Enter Num Column Of Matrix  : ");
	
	scanf("%d", &Loc_u8NumOfCo);

	printf("Enter Num Of Rows Matrix  : ");
	scanf("%d", &Loc_u8NumOfRows);
	printf("Enter Matrix\n");
	
	
	for (Loc_u8count_1 = 0; Loc_u8count_1 < Loc_u8NumOfRows; Loc_u8count_1++)//rows
	{
		for (Loc_u8count_2 = 0; Loc_u8count_2 < Loc_u8NumOfCo; Loc_u8count_2++)//columns
		{
			printf("Enter  ro%dco%d\n", Loc_u8count_1, Loc_u8count_2);
			scanf("%f", &Loc_f32Matr[Loc_u8count_1][Loc_u8count_2] );
			Loc_f32MatrTrans[Loc_u8count_2][Loc_u8count_1] = Loc_f32Matr[Loc_u8count_1][Loc_u8count_2];
		}
		
	}
	//print matrix 
	printf("Entered matrix : \n");
	for ( Loc_u8count_1 = 0; Loc_u8count_1 < Loc_u8NumOfRows; Loc_u8count_1++)//rows
	{
		for (Loc_u8count_2 = 0; Loc_u8count_2 < Loc_u8NumOfCo; Loc_u8count_2++)//columns
		{
			printf("%.2f\t", Loc_f32Matr[Loc_u8count_1][Loc_u8count_2]);
		}
		printf("\n");
	}
	
	//print Transpose
	
	printf("Transpose of matrixs\n");
	for ( Loc_u8count_1 = 0; Loc_u8count_1 < Loc_u8NumOfCo; Loc_u8count_1++)//rows
	{
		for (Loc_u8count_2 = 0; Loc_u8count_2 < Loc_u8NumOfRows; Loc_u8count_2++)//columns
		{
			printf("%.2f\t", Loc_f32MatrTrans[Loc_u8count_1][Loc_u8count_2]);
		}
		printf("\n");
	}
    
	return 0;
}
*/


//EX_4_Insert an element in an array  #################################


/*
int main()
{
	
	int arr[20];
	int L_u8Num, L_u8Loc, L_u8Value, L_u8Coun;
	
	printf("Enter NO Of Elements : ");
	scanf("%d", &L_u8Num);
	printf("Enter Elements : \n");
	
	for (L_u8Coun = 0; L_u8Coun < L_u8Num; L_u8Coun++)
	{
		scanf("%d", &arr[L_u8Coun]);
	}
	fflush(stdin);
	printf("Enter Location : ");
	scanf("%d", &L_u8Loc);
	printf("Enter  Value: ");
	scanf("%d", &L_u8Value);
	if ( L_u8Loc > 0 )
	{
		for (L_u8Coun = L_u8Num; L_u8Coun >= L_u8Loc; L_u8Coun--)
		{
			arr[L_u8Coun] = arr[L_u8Coun-1];
		}	
	
		arr[L_u8Coun] = L_u8Value;
		for (L_u8Coun = 0; L_u8Coun <= L_u8Num; L_u8Coun++)
		{
			printf("%d\n", arr[L_u8Coun]);
		}	
	}
	else 
	{
		printf("Wrong Location");
	}

	return 0;
}
*/


//EX_5_Search an Element in Array#################################

/*
int main()
{
	int arr[20];
	int L_u8Num, L_u8Sear, L_u8Coun, L_u8ResLoc = '\0';
	
	printf("Enter NO Of Elements : ");
	scanf("%d", &L_u8Num);
	printf("Enter Elements : \n");
	
	for (L_u8Coun = 0; L_u8Coun < L_u8Num; L_u8Coun++)
	{
		scanf("%d", &arr[L_u8Coun]);
	}
	fflush(stdin);
	printf("Enter Num To Search : ");
	scanf("%d", &L_u8Sear);
	for (L_u8Coun = 0; L_u8Coun < L_u8Num; L_u8Coun++)
	{
		L_u8ResLoc = ( arr[L_u8Coun] ==  L_u8Sear) ? L_u8Coun+1 : '\0';
		if ( L_u8ResLoc != '\0')
		{
			printf("Number found at Locations : %d\n", L_u8ResLoc);
		}
	}	

	return 0;
}
*/

///////////////////////////////////////////////////HW_STRING//////////////////////////////


//EX_1_ Find the Frequency of characters in a string#################################

/*
#include <string.h>

int main ()
{
	char Loc_u8Srting1 [50], Loc_u8Char, Loc_u8Count1, Loc_u8Siz, Loc_u8Resu = 0;
	
	
	
	printf("Enter String : ");
	gets(Loc_u8Srting1);
	
	Loc_u8Siz = strlen( Loc_u8Srting1 );
	fflush(stdin);
	printf("Enter char to search : ");
	scanf("%c" , &Loc_u8Char);
	
	for ( Loc_u8Count1 = 0; Loc_u8Count1 < Loc_u8Siz; Loc_u8Count1++)
	{
		if ( Loc_u8Srting1[ Loc_u8Count1 ] == Loc_u8Char ) 
		{
			Loc_u8Resu++;
		}
	}
	printf("Frequency of char is : %d", Loc_u8Resu);
	
	return 0;
}
*/

//EX_2  Equivalent to strlen func#################################

/*
#include <string.h>

int main ()
{
	char Loc_u8Srting1 [50], Loc_u8Count1;
	
	
	
	printf("Enter String : ");
	gets(Loc_u8Srting1);
	
	
	for ( Loc_u8Count1 = 0; Loc_u8Count1 < 50; Loc_u8Count1++)
	{
		if ( Loc_u8Srting1[ Loc_u8Count1 ] == '\0' ) 
		{
			break;
		}
	}
	//eqivalent to 	for ( Loc_u8Count1 = 0; Loc_u8Srting1[ Loc_u8Count1 ] != '\0'; Loc_u8Count1++);
	printf("The length of String  is : %d\n", Loc_u8Count1);

	
	return 0;
}
*/

//EX_3 Equivalent to reverse Functio #################################
//1st way using %c
/*
#include <string.h>

int main ()
{
	char Loc_u8Srting1 [50], Loc_u8Count1, Loc_u8Siz;
	
	printf("Enter String : ");
	gets(Loc_u8Srting1);
	
	Loc_u8Siz = strlen(Loc_u8Srting1);
	
	for ( Loc_u8Count1 = Loc_u8Siz; Loc_u8Count1 >= 0; Loc_u8Count1--)
	{
		printf("%c", Loc_u8Srting1[Loc_u8Count1-1]);
	}
	
	return 0;
}
*/

//2nd way using %s
/*
#include <string.h>

int main ()
{
	char Loc_u8Srting1 [50], Loc_u8Count1, Loc_u8Count2, L_u8Temp;
	
	printf("Enter String : ");
	gets(Loc_u8Srting1);
	
	Loc_u8Count2 = strlen( Loc_u8Srting1 )-1;
	
	for ( Loc_u8Count1 = 0; Loc_u8Count1 < Loc_u8Count2; Loc_u8Count1++, Loc_u8Count2--)
	{
		L_u8Temp = Loc_u8Srting1[Loc_u8Count1];
		Loc_u8Srting1[Loc_u8Count1] = Loc_u8Srting1[Loc_u8Count2];
		Loc_u8Srting1[Loc_u8Count2] = L_u8Temp;
	}
	
	printf("%s", Loc_u8Srting1);
	return 0;
}
*/

//3rd way using reverse Functi
/*
#include <string.h>

int main ()
{
	char Loc_u8Srting1 [50], Loc_u8Count1, Loc_u8Count2, L_u8Temp;
	
	printf("Enter String : ");
	gets(Loc_u8Srting1);
	
	strrev(Loc_u8Srting1);
	printf("%s", Loc_u8Srting1);
	return 0;
}
*/

//LAB_8_  rand() function random  #################################
//fill array [1000] with rand()
//find index satisfy that the pervious and the next to it are lower than it 

/*
#include <stdlib.h>

int main ()
{
	int Loc_u32arr[100];
	char Loc_u8Count;
	
	for ( Loc_u8Count = 0; Loc_u8Count < 100; Loc_u8Count++)
	{
		Loc_u32arr[Loc_u8Count] = rand();
	}
	
	for ( Loc_u8Count = 1; Loc_u8Count < 100; Loc_u8Count++)
	{
		if ( Loc_u32arr[Loc_u8Count-1] < Loc_u32arr[Loc_u8Count]  &&   Loc_u32arr[Loc_u8Count+1] < Loc_u32arr[Loc_u8Count])
		{
			printf("%d\n",Loc_u8Count);
		}
	}
	printf("%d\t%d\t%d", Loc_u32arr[0], Loc_u32arr[1], Loc_u32arr[2]);
	
	return 0;
}
*/