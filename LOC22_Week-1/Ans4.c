//ASSIGNMENT-1 Q.4 :-
//Adyasha Shasani_ETC_2nd year

#include<stdio.h>
int main()
{
    int a,b;
    int sum,diff,pro,mod;
    float div;
    printf("Enter any two numbers :\n");
    scanf("%d%d\n\n", &a,&b);
    sum = a+b;
    diff = a-b;
    pro = a*b;
    div = (float)a/b;
    mod = a%b;
    printf("The sum is : %d+%d=%d\n", a,b,sum);
    printf("The difference is : %d-%d=%d\n", a,b,diff);
    printf("The product is : %d*%d=%d\n", a,b,pro);
    printf("The divison is : %d/%d=%f\n", a,b,div);
    printf("The modulus is : %d\n", mod);
    return(0);
}