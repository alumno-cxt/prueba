int sum_up (int *v, int size){
	int i = 0;
	int total = 0;
	for (i=0;i<size;i++){
		total += v[i];
	}
	return total;
}
