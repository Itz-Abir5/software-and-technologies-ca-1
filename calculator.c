#include<stdio.h>
#include<string.h>
int main(){
    int a,b;
    char op;
    printf(" enter the opertetor(+,-,*,/) : ");
    scanf("%c",&op);
    printf(" enter the 1st number :");
    scanf("%d",&a);

     printf(" emeter the 2nd number :");
    scanf("%d",&b);

    switch (op)
    {
    case '+':
        printf(" %d + %d = %d", a,b,a+b);
        break;
     
    case'-':
    printf(" %d-%d= %d",a,b, a-b);
    break;
    case'*':
    printf(" %d*%d= %d",a,b, a*b);
    break;
    case'/':
    if (b==0)
    {
        printf(" this is undefinded");
    }
    else{
        printf("%d/%d= %d", a,b, a/b);
    }
    break;
    default:
        printf("Invalid operation. Please enter +, -, *, or /.\n");
    }
    return 0;
}
