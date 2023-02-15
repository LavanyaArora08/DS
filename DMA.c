//program using dynamic memory allocation to store the data of a student in a structure and display it 
#include<stdio.h>
#include<stdlib.h>
struct student
{
    int roll;
    char name[20];
    int marks;
};
int main()
{
    struct student *ptr;
    int n,i;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    ptr=(struct student*)malloc(n*sizeof(struct student));
    for(i=0;i<n;i++)
    {
        printf("Enter the roll number of student %d: ",i+1);
        scanf("%d",&ptr[i].roll);
        printf("Enter the name of student %d: ",i+1);
        scanf("%s",ptr[i].name);
        printf("Enter the marks of student %d: ",i+1);
        scanf("%d",&ptr[i].marks);
    }
    printf("The details of students are: ");
    for(i=0;i<n;i++)
    {
        printf("Roll number of student %d: %d",i+1,ptr[i].roll);
        printf("Name of student %d: %s",i+1,ptr[i].name);
        printf("Marks of student %d: %d",i+1,ptr[i].marks);
    }
    return 0;
}
