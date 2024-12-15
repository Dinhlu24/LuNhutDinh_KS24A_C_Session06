#include <stdio.h>

int main(){
	int n;	printf("Moi ban nhap vao so nguyen N: ");	scanf("%d", &n);
	long long f1=1,f2=1,fn=f1+f2;
	if(n > 0){
		printf("Day la %d so Fibo: ",n);
		if(n == 1){
			printf("%lld",f1);
			n=0;
		}
		else if(n == 2){
			printf("%lld %lld",f1,f2);
			n=0;
		}
		else{
			n-=2;
			printf("%lld %lld ",f1,f2);
			while(n--){
				printf("%lld ",fn);
				f1=f2;
				f2=fn;
				fn=f1+f2;
			}
		}
	}
	else	printf("So ban nhap vao khong hop le");
}
