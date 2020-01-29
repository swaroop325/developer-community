#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,p,s,m,d;
    int n;
    printf("Very Very Simple Calculator program in c\n\n\n");
    printf("Developed by L.k.Anantan\n");
    printf("----------------------------\n");
    printf("enter the first numbers:");
    scanf("%f",&a);
    printf("\nenter the second number: ");
    scanf("%f",&b);
    printf("\nwhat you want to do...?\n1.Add\n2.Subtract\n3.Multiply\n4.Division\n");
    printf("Enter the option: ");
    scanf("%d",&n);
    switch(n)
        {
        case 1 :
            p=a+b;
            printf("The sum of the two number is %f",p);
            break;
        case 2 :
            s=a-b;
            printf(" The difference of the two number is %f",s);
            break;
        case 3 :
            m=a*b;
            printf("The product of the two number is %f",m);
            break;
        case 4 :
            d=a/b;
            printf("The division of the two number is %f",d);
            break;
        }
}
