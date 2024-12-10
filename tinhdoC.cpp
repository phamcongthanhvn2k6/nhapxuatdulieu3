#include<stdio.h>
using namespace std; 
	
	int main(){
		float C, F;
		
		printf(" Nhap nhiet do theo do C: ");
		scanf ("%f", &C);
		
		F = (C*9/5) + 32 ;\
		
		printf (" Nhiet do theo do F là: %.2f\n",F);
		
		return 0;
	}
