#include<stdio.h>
int main() 
{
 	int N;
 	float P, R, I;
		printf("\n Enter Amount P :");
		scanf("%f",&P);
		printf("\n Enter Rate R :");
		scanf("%f",&R);
		printf("\n Enter No of Years N :");
		scanf("%d",&N);
		I = (P*R*N)/100;
		printf("\n Interest = %.2f",I);
 		return 0;
}
