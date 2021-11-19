#include<stdio.h>
struct employee
{
    int phno,age,salary;
    char name[250];
}emp[20];
 
void main()
{
    int i;
    printf("Enter employee info as name , age ,phone number, salary\n");
    for(i=0;i<20;i++)
    {
        scanf("%s %d %d %d",emp[i].name,&emp[i].age,&emp[i].phno,&emp[i].salary);
    }
    printf("\nNAME\t\tAGE\t\tPHONE_NUMBER\t\tSALARY\n");
    for(i=0;i<20;i++)
    {
        printf("%s\t\t%d\t\t%d\t\t\t%d\n",emp[i].name,emp[i].age,emp[i].phno,emp[i].salary);
    }
}
