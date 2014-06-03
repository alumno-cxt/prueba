#include <stdio.h>
#include "lib2.h"

int main(){
	int v[] = {1,2,3,4};
	int r = 0; 
	r = sum_up(v,4);
	printf("%d \n",r);
	return 0;
}
