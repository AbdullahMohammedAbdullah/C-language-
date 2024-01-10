/*
author : Abdullah mohamed
date : 10/1/2024
*/


#include <stdio.h>

int main ()
{
	char Loc_u8Count1 = 0, Loc_u8Count2 = 0;
	for ( Loc_u8Count1 = 0; Loc_u8Count1 <= 9; Loc_u8Count1++ )
	{
		for ( Loc_u8Count2 = Loc_u8Count1 ; Loc_u8Count2 <= 9; Loc_u8Count2++)
		{
			printf("%d " , Loc_u8Count2);
		}
		printf("\n");
	}
	return 0;
}
