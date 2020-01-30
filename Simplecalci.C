/*Program by Abdur Rahman*/
/*Simple elegant calculator that executes 4 basic operations/*
#include<stdio.h>
#include<stdlib.h>
int main()
{int option;
float num1,num2,result;
char op,choice,ch;
repeat:
printf("\nEnter the required format:\n(operand1) ([+]/[-]/[*]/[/]) (operand2):\n")
scanf("%f%c%f",&num1,&op,&num2);
if(op=='+'){result=num1+num2;}
elseif(op=='-'){result=num1-num2;}
elseif(op=='*'){result=num1*num2;}
elseif(op=='\'){result=num1/num2;}
else{printf("\nThe given Format is invalid\nYour options are: \n1.For retry(press 1) \n2.For exit(press any num)");
scanf("%d",&option);
if(option==1){goto repeat;}
}
printf("\nThe result is:%d",result);
printf("\nDo you want to do another calculation?(Y/N):")
scanf("%c",&ch);
if(ch=='Y'){goto repeat;}
return 0; 
}
