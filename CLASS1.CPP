// Program to show the working of a class
#include <stdio.h>
class student
{
 public:
 char name[25], branch[4], enrollmentno[12];
 int marks;
};
int main()
{
    int i;
    student s[3];
    for(i=0;i<3;i++)
    {
    printf("\nEnter Name of Student %d : ",i+1);
    scanf("%s",s[i].name);
    printf("\nEnter Branch of student %d : ",i+1);
    scanf("%s",s[i].branch);
    printf("\nEnter Enrollment number of student %d : ",i+1);
    scanf("%s",s[i].enrollmentno);
    printf("\nEnter Marks Obtained by student %d : ",i+1);
    scanf("%d",&s[i].marks);
    }
    printf("\nThe entered details of the candidates are as follows ");
    for(i=0;i<3;i++)
    {
    printf("\nName of Student %d : %s",i+1,s[i].name);
    printf("\nBRANCH of student %d : %s",i+1,s[i].branch);
    printf("\nENROLLMENT No. of student %d : %s",i+1,s[i].enrollmentno);
    printf("\nMarks Obtained by student %d : %d",i+1,s[i].marks);
    }
    return 0;
}