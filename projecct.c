#include <stdio.h>
typedef struct employee
{
    int emp_id;
    char name[20];
    float salary;
    int age;
    int exp;
} ep;
int main()
{
    int n;
    printf("Enter the number of employees:\n");
    scanf("%d",&n);
    ep e[n];
    for (int i=0;i<n;i++)
    {
        printf("Enter employee id, name, salary, age and experience of employee %d:\n",i+1);
        scanf("%d %s %f %d %d",&e[i].emp_id,e[i].name,&e[i].salary,&e[i].age,&e[i].exp);

    }
printf("Employees with experience greater than 5 years and salary less than 50000:\n");
    for (int i=0;i<n;i++)
    {
        if(e[i].exp>5 && e[i].salary<50000)
        printf("%s\n",e[i].name);
    }
    return 0;
}