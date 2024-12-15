#include <stdio.h>

int isPrime(int n){
	if(n < 2)	return 0;
	for(int i=2;i*i<=n;++i){
		if(n%i == 0)	return 0;
	}
	return 1;
}

int main(){
	int	n,primeNums=2;	printf("Moi nhap vao so nguyen N bat ky: ");	scanf("%d", &n);
	printf("%d so nguyen to dau tien cua ban la: ",n);
	while(n){
		if(isPrime(primeNums))	printf("%d ",primeNums,n--);
		
		primeNums++;
	}
}
