#include <stdio.h>
#include<math.h>
int main(void)
{
	int i, codice, option;
    int num1, num2, num3, num4, temp1, temp2, new_num1_temp, new_num2_temp;
	printf("\n\nEncryption and Decryption Program");
	printf( "\n\nenter (1) to encrypt (2) to decrypt : ");
	scanf( "%d", &option);
	
	if  (option == 1) 
	{
	printf ("\nEnter 4 digit number to be encrypted : ");
	scanf ("%d", &codice);
	
	for(i=3;i>=0;i--)
	    
    temp1 = codice;
    num1 = temp1 / 1000;
    temp2 = temp1 % 1000;
    num2 = temp2 / 100;
    temp1 = temp2 % 100;
    num3 = temp1 / 10;
    num4 = temp1 % 10;
   
    num1 = (num1 + 7) % 10;
    num2 = (num2 + 7) % 10;
    num3 = (num3 + 7) % 10;
    num4 = (num4 + 7) % 10;

    new_num1_temp = num3;
    num3 = num1;
    num1 = new_num1_temp;   
    new_num2_temp = num4;
    num4 = num2;
    num2 = new_num2_temp;

    printf("\nNew code: %d%d%d%d\n\n", num1, num2, num3, num4);
}	
	else
    {
    printf ("\nEnter 4 digit number to be decrypted: ");
	scanf ("%d", &codice);
	
    temp1 = codice;
    num1 = temp1 / 1000;
    temp2 = temp1 % 1000;
    num2 = temp2 / 100;
    temp1 = temp2 % 100;
    num3 = temp1 / 10;
    num4 = temp1 % 10;
   
    num1 = ((num1+10) - 7) % 10;
    num2 = ((num2+10) - 7) % 10;
    num3 = ((num3+10) - 7) % 10;
    num4 = ((num4+10) - 7) % 10;
    
    new_num1_temp = num3;
    num3 = num1;
    num1 = new_num1_temp;   
    new_num2_temp = num4;
    num4 = num2;
    num2 = new_num2_temp;

    printf("\nNew code: %d%d%d%d\n\n", num1, num2, num3, num4);
    }	
	return 0;	
}