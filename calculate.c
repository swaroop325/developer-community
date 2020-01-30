#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){



int i=0;
float op1,opn,result=0;
int ch;
int close = 0;

printf("Calculator C program \n\n");
printf("enter a number:");
scanf("%f",&op1);
result = op1;
while(1){

        printf("\n\nSelect operation to be performed:\n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n 5.Power \n 6.Square root \n 7.RESET \n8.Quit\n\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("\n\n enter next number: ");
                scanf("%f",&opn);
                result = result + opn;
                printf("\n current value: %.2f",result);
                break;
            case 2:
                printf("\n\n enter next number: ");
                scanf("%f",&opn);
                result = result - opn;
                printf("\n current value: %.2f",result);
                break;
            case 3:
                printf("\n\n enter next number: ");
                scanf("%f",&opn);
                result = result * opn;
                printf("\n current value: %.2f",result);
                break;
            case 4:
                printf("\n\n enter divisor: ");
                scanf("%f",&opn);
                result = result / opn;
                printf("\n current value: %.2f",result);
                break;
            case 5:
                printf("\n\n enter exponent: ");
                scanf("%f",&opn);
                result = pow(result,opn);
                printf("\n current value: %.2f",result);
                break;
            case 6:
                printf("\n\n After performing square root,\n ");
                result = sqrt(result);
                printf("\n current value: %.2f",result);
                break;

            case 7:
                printf("\n\n Value has been reset,\n ");
                result = 0;
                printf("\n current value: %.2f",result);
                break;

            case 8:
                close = 1;
                break;
                


        default:printf("INVALID CHOICE\n");
        continue;
        }
        if(close){
            break;
        }
}
printf("Program created by Saffiuddin N");
}
