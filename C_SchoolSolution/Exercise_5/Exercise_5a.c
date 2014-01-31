/*
author: Johannes [imp] Michel
date:	31-01-2014
*/
#include <stdio.h>
#include "stdafx.h"

int main(void) 
{

	int j = 13, k = 47, *p = &k;

	printf("  %p", &p); // print het adres van de pointer p
	printf("  %p", p);	// print het adres van waar de pointer naar wijst
	printf("  %p", &k); // print het adres van de int k
	printf("  %d", *p); // print de waarde van het veld dat staat waar de pointer naar wijst. (47)
	printf("  %d", k);	// print de waarde van k (47)

	*p = 87;

	printf("  %d", *p); // print de waarde van het veld waar de pointer naar wijst, 87, omdat het veld gewijzigd werd.
	printf("  %d", k);	// print de waarde van k, die gewijzigd werd door de pointer, dus 87
	printf("  %d", **&p); // print de waarde van de waarde van het adres van waar de pointer naar wijst... 87?

	while (1);
	return 0;
}


