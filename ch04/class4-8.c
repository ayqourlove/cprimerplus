//浮点型修饰符的组合
#include <stdio.h>

int main()
{
    const double RENT = 3852.99;//coust变量
    printf("*%f*\n",RENT);
    printf("*%e*\n",RENT);
    printf("*%4.2f*\n",RENT);
    printf("*%3.1f*\n",RENT);
    printf("*%10.3f*\n",RENT);
    printf("*%10.3e*\n",RENT);
    printf("*%+4.2f*\n",RENT);
    printf("*%10.2f*\n",RENT);
    return 0;
}
