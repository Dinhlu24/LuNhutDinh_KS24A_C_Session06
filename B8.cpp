#include <stdio.h>

int main(){
	float deposit,interestRate,tmp;	int month;
	printf("Moi nhap vao so tien ban dau: ");	scanf("%f",&deposit);	tmp = deposit;
	printf("Moi nhap vao lai suat thang: ");	scanf("%f%%",&interestRate); interestRate/=100;
	printf("Moi nhap vao so thang gui: ");	scanf("%d",&month);
	
	float interest;
	while(month--){
		interest=deposit*interestRate;
		deposit += interest;
	}
	interest = deposit - tmp;
	printf("Tien lai: %.3f \nTien nhan duoc: %.3f",interest,deposit);
}
