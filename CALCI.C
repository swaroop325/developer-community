#include <stdio.h>
float add(float a,float b);
float sub(float a,float b);
float mul(float a,float b);
float div(float a,float b);
int main(){
 char operator;
 float num1,num2;
 float result=0;
 printf("Enter the operator(+,-,*,/):");
 scanf("%c",&operator);
 printf("\n Enter the values of two operands,num1 and num2:");
 scanf("%f%f",&num1,&num2);
 switch(operator){
  case '+':
	result=add(num1,num2);
	break;
  case '-':
	result=sub(num1,num2);
	break;
  case '*':
	result=mul(num1,num2);
	break;
  case '/':
	result=div(num1,num2);
	break;
  default:
	printf("The entered operator is invalid.");
 }
 printf("The result of %.2f %c %.2f=%.2f",num1,operator,num2,result);
 return 0;
 getch();
}
float add(float a,float b){
	return a+b;
}
float sub(float a,float b){
	return a-b;
}
float mul(float a,float b){
	return a*b;
}
float div(float a,float b){
	return a/b;
}













































