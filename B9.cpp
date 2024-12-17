#include <stdio.h>
#include <math.h>

int main(){
	printf("Tat ca so Armstrong hang tram: ");
	for(int i=100;i<1000;i++){
		int sum = pow((i/100),3) + pow((i/10)%10,3) + pow(i%10,3);
		if(sum == i)	printf("%d ",sum);
	}
}
