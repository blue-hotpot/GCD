//辗转相除法

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int value1,value2;
    int ret;
    printf("please input the value:");
    scanf("%d%d",&value1,&value2);
    if(value1<value2)
    {
        ret=value1;
        value1=value2;
        value2=ret;
    }
    while(ret=value1%value2)
    {
        value1=value2;
        value2=ret;
    }
    // while(value1%value2)
    // {
    //     ret=value1%value2;
    //     value1=value2;
    //     value2=ret;
    // }
    printf("the greatest common divisor is %d\n",value2);
    return 0;
}
