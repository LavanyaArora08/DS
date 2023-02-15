//program to take input of 5 students with their marks and print the grade of the student when his name is entered4
#include<stdio.h>
#include<string.h>
struct student
{
char name[50];
int sub1,sub2,sub3,sub4,sub5,rollno,SAPID;
double avg;

};
int main()
{
struct student s[5];
int i;
for(i=0;i<5;i++)
{
printf("Enter the name of the student %d",i+1);
scanf("%s",s[i].name);
printf("Enter the rollno of the student %d",i+1);
scanf("%d",&s[i].rollno);
printf("Enter the SAPID of the student %d",i+1);
scanf("%d",&s[i].SAPID);
printf("Enter the marks of the student of all 5 subjects %d",i+1);
scanf("%d",&s[i].sub1);
scanf("%d",&s[i].sub2);
scanf("%d",&s[i].sub3);
scanf("%d",&s[i].sub4);
scanf("%d",&s[i].sub5);
s[i].avg=(s[i].sub1+s[i].sub2+s[i].sub3+s[i].sub4+s[i].sub5)/5;
}
printf("Enter the name of the student whose grade is to be found");
char name[50];
scanf("%s",name);
printf("Name: %s",name);
printf("Rollno: %d",s[i].rollno);
printf("SAPID: %d",s[i].SAPID);
for(i=0;i<5;i++)
{
if(strcmp(s[i].name,name)==0)
{
if(s[i].avg>=75)
printf("Grade A+");
else if(s[i].avg>=60)
printf("Grade A");
else if(s[i].avg>=40)
printf("Grade B");
else
printf("Grade F");
}
}
return 0;
}
