/*
author : Abdullah mohamed
date : 10/1/2024
*/


#include <stdio.h>


//LAB_1_Transpose of 2D_Matrix#################################

/*
int main ()
{
	char Loc_u8count_1, Loc_u8count_2; 
	int Loc_u32Matrix[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9},
		};
	int Loc_u32Matrix_Transpos[3][3];
	
	for ( Loc_u8count_1 = 0; Loc_u8count_1 < 3; Loc_u8count_1++)
	{
		for (Loc_u8count_2 = 0; Loc_u8count_2 < 3; Loc_u8count_2++)
		{
			Loc_u32Matrix_Transpos[Loc_u8count_1][Loc_u8count_2] =  Loc_u32Matrix[Loc_u8count_2][Loc_u8count_1];
			printf("%d\t", Loc_u32Matrix_Transpos[Loc_u8count_1][Loc_u8count_2]);
		}
		printf("\n");
	}
	return 0;
}
*/



//LAB_2_Equivalent To strcat (concatonate) #################################
/*
#include <string.h>
int main ()
{
	char Loc_u8Srting1 [10] = "abdullah";
	char Loc_u8Srting2 [10] = "mohamed";
	char Loc_u8SrtingCat [21];// store "abdullah mohamed"10(size)+1(space)+10
	int Loc_u32Count1 = 0, Loc_u32Count2 = 0;
	
	//copy first nam e "abdullah"
	while ( Loc_u8Srting1[Loc_u32Count1] != 0)
	{
		Loc_u8SrtingCat[Loc_u32Count1] = Loc_u8Srting1[Loc_u32Count1];
		Loc_u32Count1++;
	}
	Loc_u8SrtingCat[Loc_u32Count1] = ' ';// tis to put space but isnt found in original srrcat u should put space...
	Loc_u32Count1++;//in the first charcter in second name as  " mohamed"
	
	//copy 2nd name "mohamed"
	while ( Loc_u8Srting2[Loc_u32Count2] != 0)
	{
		Loc_u8SrtingCat[Loc_u32Count1] = Loc_u8Srting2[Loc_u32Count2];
		Loc_u32Count2++;
		Loc_u32Count1++;
	}

	//termination
	Loc_u8SrtingCat[Loc_u32Count1] = 0;
	
	printf("%s",  Loc_u8SrtingCat);

	
	return 0;
}
*/



//LAB_3_Equivalent To strlwr & upper #################################

/*
#include <string.h>
int main ()
{
	char Loc_u8Srting1 [10];
	int Loc_u32Count1 = 0, Loc_u32Count2 = 0, Loc_u8Choice = 0;
	
	printf("Enter string : ");
	scanf("%s" , Loc_u8Srting1);
	printf("Enter 1 for Lower or 2 for Upper: ");
	scanf("%d" , &Loc_u8Choice);

	if ( Loc_u8Choice == 1)
	{
		while ( Loc_u8Srting1[Loc_u32Count1] != 0)
		{
			if (Loc_u8Srting1[Loc_u32Count1] < 'a' )
			{
				Loc_u8Srting1[Loc_u32Count1] += 32;
			}
			Loc_u32Count1++;
		}
	}

	else if ( Loc_u8Choice == 2)
	{
		while ( Loc_u8Srting1[Loc_u32Count1] != 0)
		{
			if (Loc_u8Srting1[Loc_u32Count1] > 'Z' )
			{
				Loc_u8Srting1[Loc_u32Count1] -= 32;
			}
			Loc_u32Count1++;
		}
	}
	else { printf("wrong choice"); }

	
	printf("%s",  Loc_u8Srting1);

	
	return 0;
}
*/




//LAB_5_Example To string_ignore_compare(stricmp)  ahmed = AHMED #################################
/*
#include <string.h>
int main ()
{
	char Loc_u8Srting1 [5][10] = { "AHMED", "ABDULLAH", "MOHAMED", "MAHMOUD", "ESLAM"};
	char Loc_u8Srting2 [10];
	char Loc_u8Count = 0, Loc_u8Result = 0;
	
	printf("Enter your Name : ");
	scanf("%s" , Loc_u8Srting2);
	
	for ( Loc_u8Count = 0; Loc_u8Count < 5; Loc_u8Count++)
	{
		if ( stricmp(Loc_u8Srting2,  Loc_u8Srting1[Loc_u8Count]) == 0 )
		{
			printf("conguratlation, your name is in data\n");
			break;
		}
		Loc_u8Result = stricmp( Loc_u8Srting2,  Loc_u8Srting1[Loc_u8Count] );//to show ret_val(difference between chars)
		printf("\t%d\n",Loc_u8Result );

	}
	if ( Loc_u8Count == 5) { printf(" Wrong Name\n"); }
	
	
	return 0;
}
*/

//LAB_6_convert string "1025"  to integer = 1025 ??#################################
/*

#include <string.h>
#include <math.h>
int main ()
{
	char Loc_u8Srting1 [5][4] = { "11", "21", "1", "300", "0"};
	char Loc_u8Srting2[4], Loc_u8Count1 = 0, Loc_u8Count2 = 0, Loc_u8PowCount = 0;
	int Loc_u32Result = 0, Loc_u32ArrOfInt [6] = {0};
	
	
	
	printf("Enter integer : ");
	scanf("%s" , Loc_u8Srting2);
	//add values of Loc_u8Srting1 and get sum then add to them value of Loc_u8Srting2
	
	for ( Loc_u8Count1 = 0; Loc_u8Count1 < 5; Loc_u8Count1++) // to loop rows in srt1
	{
		//to convert evry string to integer minus 48 from its ascii
		while ( Loc_u8Srting1[Loc_u8Count1][Loc_u8Count2] != '\0' )
		{
			Loc_u8Srting1[Loc_u8Count1][Loc_u8Count2] -= 48;
			Loc_u8Count2++;
		}
		//to take each row number(ex:11) and put it in Loc_u32ArrOfInt as an integer element
		while ( Loc_u8Count2 != 0)
		{
			Loc_u8Count2--;
			Loc_u32ArrOfInt[Loc_u8Count1] += ( Loc_u8Srting1[Loc_u8Count1][Loc_u8Count2] * ( pow ( 10 , Loc_u8PowCount )) );
			Loc_u8PowCount++;
		}
		Loc_u8PowCount = 0;
	}
	//repeat with str2 that entered with user and put this val in the last place in Loc_u32ArrOfInt 
	Loc_u8Count2 = 0; 
	while ( Loc_u8Srting2[Loc_u8Count2] != '\0' )
	{
		Loc_u8Srting2[Loc_u8Count2] -= 48;
		Loc_u8Count2++;
	}
	while ( Loc_u8Count2 != 0)
	{			
		Loc_u8Count2--;
		Loc_u32ArrOfInt[Loc_u8Count1] += ( Loc_u8Srting2[Loc_u8Count2] * ( pow ( 10 , Loc_u8PowCount )) );
		Loc_u8PowCount++;
	}
	
	
	//sum all elements in Loc_u32ArrOfInt
	
	for ( Loc_u8Count2 = 0 ; Loc_u8Count2 < 6; Loc_u8Count2++  )
	{
		Loc_u32Result += Loc_u32ArrOfInt[Loc_u8Count2]; 
	}
	
	printf("%d", Loc_u32Result);
	
	return 0;
}
*/

//LAB_7_  atoi ( array(of string) to integer) at  <stdlib.h> ??#################################
///////////////////////atoi
//atoi func convert any string num to integer
//should arr start with num 
//start from the first char if num complete if not ret 0
//if the fist is num it convert it and continue until found any char(not 0:9) and then get out
//if float(.) take only int and then break because found another char(not 0:9)

/*
#include <stdlib.h>
#include <string.h>

int main ()
{
	char Loc_u8Srting1 [5][4] = { "11", "21", "1", "300", "0"}, Loc_u8Srting2[4], Loc_u8Count1 = 0, Loc_u8Count2 = 0;
	int Loc_u32Result = 0, Loc_u32ArrOfInt [6] = {0};
	
	
	
	printf("Enter integer : ");
	scanf("%s" , Loc_u8Srting2);
	//add values of Loc_u8Srting1 and get sum then add to them value of Loc_u8Srting2
	
	for ( Loc_u8Count1 = 0; Loc_u8Count1 < 5; Loc_u8Count1++) // to loop rows in srt1
	{
		Loc_u32ArrOfInt[Loc_u8Count1] = atoi(Loc_u8Srting1[Loc_u8Count1]);
	}
	
	//repeat with str2 that entered with user and put this val in the last place in Loc_u32ArrOfInt 

	Loc_u32ArrOfInt[Loc_u8Count1] = atoi(Loc_u8Srting2);


	//sum all elements in Loc_u32ArrOfInt
	
	for ( Loc_u8Count2 = 0 ; Loc_u8Count2 < 6; Loc_u8Count2++  )
	{
		Loc_u32Result += Loc_u32ArrOfInt[Loc_u8Count2]; 
	}
	
	printf("%d", Loc_u32Result);
	
	return 0;
}
*/


//LAB_7_  atof ( array(of string) to float) at  <stdlib.h> ??#################################
///////////////////////atof
//atof func convert any string num to float
//should arr start with num 
//start from the first char if num complete if not ret 0
//if the fist is num it convert it and continue until found any char(not 0:9 and (.)) and then get out

/*
#include <stdlib.h>
#include <string.h>

int main ()
{
	char Loc_u8Srting1 [5][5] = { "11.5", "21.5", "1.5", "300.5", ".5"}, Loc_u8Srting2[4], Loc_u8Count1 = 0, Loc_u8Count2 = 0;
	float Loc_u32Result = 0, Loc_u32ArrOfInt [6] = {0};
	
	
	
	printf("Enter integer : ");
	scanf("%s" , Loc_u8Srting2);
	//add values of Loc_u8Srting1 and get sum then add to them value of Loc_u8Srting2
	
	for ( Loc_u8Count1 = 0; Loc_u8Count1 < 5; Loc_u8Count1++) // to loop rows in srt1
	{
		Loc_u32ArrOfInt[Loc_u8Count1] = atof(Loc_u8Srting1[Loc_u8Count1]);
	}
	
	//repeat with str2 that entered with user and put this val in the last place in Loc_u32ArrOfInt 

	Loc_u32ArrOfInt[Loc_u8Count1] = atof(Loc_u8Srting2);


	//sum all elements in Loc_u32ArrOfInt
	
	for ( Loc_u8Count2 = 0 ; Loc_u8Count2 < 6; Loc_u8Count2++  )
	{
		Loc_u32Result += Loc_u32ArrOfInt[Loc_u8Count2]; 
	}
	
	printf("%f", Loc_u32Result);
	
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