#include <stdio.h>

int main(){
	int n;	printf("Moi ban nhap vao so nguyen N: ");	scanf("%d", &n);
	long long f0=0,f1=1,fn=0;
	if(n > 0){
		printf("Day la %d so Fibo: ",n);
		while(n--){
			printf("%lld ",fn);
			f0=f1;
			f1=fn;
			fn=f0+f1;
		}
	}
	else	printf("So ban nhap vao khong hop le");
}
