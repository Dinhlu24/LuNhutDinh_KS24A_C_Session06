#include <stdio.h>
#include <math.h>

int main(){
	for(int i=1;i<10;i++){
		int a = pow(i,3);
		for(int j = 0;j<10;j++){
			int b = pow(j,3);
			for(int k=0;k<10;k++){
					int c = pow(k,3);
					if(a + b + c == i*100 + j*10 + k)	printf("%d ",a+b+c);
			}
		}
	}
}
