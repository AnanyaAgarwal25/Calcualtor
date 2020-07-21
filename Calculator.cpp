#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	int o;
	double a,b,result;
	printf("Enter the number of operation\n");
	printf("Press 1 for addition\n");
	printf("Press 2 for subtraction\n");
	printf("Press 3 for division\n");
	printf("Press 4 for multiplication\n");
	printf("Press 5 for modulus\n");
	printf("Press 6 for power\n");
	scanf("%d",&o);
	printf("Enter value of first number :");
	scanf("%lf",&a);
	printf("Enter value of second number :");
	scanf("%lf",&b);
	switch (o){
		case 1:
			result= a+b;
			printf("Value is %lf",result);
			break;
		case 2:
			result = a-b;
			printf("Value is %lf",result);
			break;
		case 3:
			result = a/b;
			printf("Value is %lf",result);
			break;
		case 4:
			result = a*b;
			printf("Value is %lf",result);
			break;
		case 5:
			result = int(a)%int(b);
			printf("Value is %d",result);
			break;
		case 6:
			result= pow(a,b);
			printf("Value is %lf",result);
			break;
		default:
			printf("Invalid operation");
	
		   	
	}
	return 0;
}
