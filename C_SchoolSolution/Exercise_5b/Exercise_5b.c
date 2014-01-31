/*
author: Johannes [imp] Michel
date:	31-01-2014
*/
#include <stdio.h>
#include "stdafx.h"

int main(void)
{

	int k, *p;
	p = &k;
	*p = 87;

	printf("  %d", p);
	printf("  %d", *p);
	printf("  %d", k);
	printf("  %d \n", &k);


	int m,
		*l = &m;
	*l = 77;

	printf("  %d", l);
	printf("  %d", *l);
	printf("  %d", m);
	printf("  %d \n", &m);

	while (1);
	return 0;
}