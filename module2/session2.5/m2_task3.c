#include <stdio.h>

main() {
    int amt;
    float disc,f_amt;
    printf("Enter total cart amount: ");
    scanf("%d", &amt);
	
	if (amt > 2000)
	{
		disc = amt*0.2;
		f_amt=amt-disc;
		printf("\nThe final amount to pay will be = %f",f_amt);
		
	}
	if (amt > 1000)
		{
			disc = amt*0.1;
			f_amt=amt-disc;
			printf("\nThe final amount to pay will be = %f",f_amt);
		}
	
	else{
		f_amt = amt;
		printf("\nThe final amount to pay will be = %f",f_amt);
		printf("\nNo discount.");
	}
}
