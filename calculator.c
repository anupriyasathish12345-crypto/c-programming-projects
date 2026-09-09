#include <stdio.h>

int main()
{
    int a,b;
    char op;
    printf("enter the operator */+-\n");
    scanf("%c",&op);
    printf("enter the no");
    scanf("%d %d",&a,&b);
    
    switch(op){
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%d",a/b);
        break;
        default:printf("invalid operation");
        return 0;
        
    }
    
}
