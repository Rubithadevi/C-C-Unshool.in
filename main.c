//Task: Implementing Arrays and Structures
#include <stdio.h>
#include <stdlib.h>
struct employee
{
    char Name[20];
    int ID;
    int Experience;
    int Salary;
};
int main()
{
    int num=5;
    //printf("Enter no of employee details to be entered: \n");
    //scanf("%d",&num);
    struct employee e[5];
    for(int i=0;i<num;i++)
    {
       printf("Employee %d\n",i+1);
       printf("Name: ");
       scanf("%s",e[i].Name);
       printf("Employee_ID: ");
       scanf("%d",&e[i].ID);
       printf("Experience: ");
       scanf("%d",&e[i].Experience);
       printf("Salary: ");
       scanf("%d",&e[i].Salary);
       printf("\n");
    }
    printf("   Employee details: ");
    for(int i=0;i<num;i++)
    {
       printf("\nEmployee %d \n",i+1);
       printf("Name: %s \n",e[i].Name);
       printf("Employee_ID: %d \n",e[i].ID);
       printf("Experience: %d \n",e[i].Experience);
       printf("Salary:  %d \n",e[i].Salary);

    }
    return 0;
}
