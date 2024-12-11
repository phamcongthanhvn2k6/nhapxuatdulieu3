#include <stdio.h>;

using namespace std;

	int main(){
		int so, chuso, nghichdao;
		printf("nhap chu so co 4 chu so: ");
		scanf("%d",&so);
		
		if (so<1000 or so>9999){
			printf("chu so khong hop le");
			return 1;
		}
		else{
			while (so != 0){
				chuso = so%10;
				nghichdao = nghichdao*10+chuso;
				so /=10;
			}
			printf ("nghich dao cua chu su co 4 chu so la: %d",nghichdao);
		}
		return 0;
		
	}
