int sum_up (int *v, int size){
	int i = 0;
	int total = 0;
	for (i=0;i<size;i++){
		total += v[i];
	}
	return total;
}


void map_sum(int *v, int size, int a){
	int i = 0;
	for (i=0;i<size;i++){
		v[i] += a;
	}

int get(int *v, int p){
	int b = v[p];
	return b; 

}
