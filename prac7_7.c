//函数功能：输入时间计算工资，所交税，纯收入；
#include<stdio.h>
//宏定义后面不能加分号
#define BASIC 10
#define EXTRAM 1.5
#define FORETAX 0.15
#define NEXTTAX 0.2
#define LASTTAX 0.25
int main()
{
    float hours,salary,tax;
    printf("please enter your work hours :\n");
    scanf("%f",&hours);
    if (hours<=40)
    {
        salary=hours*BASIC;
        printf("your salary is %f\n",salary);                          
        if (salary<=300)
        {
            tax=salary*FORETAX;
            printf("you need pay tax is %f\n",tax);
            printf("your income is %f\n",salary-tax);
        }
        else 
        {
            tax=(salary-300)*NEXTTAX;
            printf("you need pay tax is %f\n",45+tax);
            printf("your income is %f\n",salary-tax-45);
        }
    }
    else
    {
        salary=(hours-40)*EXTRAM+400;
        printf("your salary is %f\n",salary);
        if (salary<=450)
        {
            tax=45+(salary-300)*NEXTTAX;
            printf("you need pay tax is %f\n",tax);
            printf("your incone is %f\n",salary-tax);
        }
        else
        {
            tax=75+(salary-450)*LASTTAX;
            printf("you need pay tax is %f\n",tax);
            printf("your incone is %f\n",salary-tax);

        }
    
    }
    return 0;
}