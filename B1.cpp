#include <stdio.h>

int main (){
	int a,b,c,d,e;
	printf("Moi nhap vao so nguyen thu nhat ", &a); scanf("%d", &a);	if(a % 2 == 0)	a = 0;
	printf("Moi nhap vao so nguyen thu hai ", &b);	scanf("%d", &b);	if(b % 2 == 0)	b = 0;
	printf("Moi nhap vao so nguyen thu ba ", &c);	scanf("%d", &c);	if(c % 2 == 0)	c = 0;
	printf("Moi nhap vao so nguyen thu bon ", &d);	scanf("%d", &d);	if(d % 2 == 0)	d = 0;
	printf("Moi nhap vao so nguyen thu nam ", &e);	scanf("%d", &e);	if(e % 2 == 0)	e = 0;
	
	int sum= a+b+c+d+e;
	printf("Day la tong tat ca cac so le: %d",sum);
}
