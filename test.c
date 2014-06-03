#include <stdio.h>
#include "lib2.h"

int main(){
	int v[] = {1,2,3,4};
	int r = 0;
	int r2 = 0; 
	r = sum_up(v,4);
	printf("%d \n",r);
	r2 = get(v,0);
	printf("%d \n", r2);
	return 0;
}
