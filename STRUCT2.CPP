// Program to implement student data type using structure
#include <stdio.h>
struct student
{
 char name[25][25], branch[4], enrollmentno[12];
 int marks;
};
int main()
{
    student s;
    printf("\nEnter Name of the Student : ");
    scanf("%s",s.name);
    printf("\nEnter Branch : ");
    scanf("%s",s.branch);
    printf("\nEnter Enrollment number : ");
    scanf("%s",s.enrollmentno);
    printf("\nEnter Marks Obtained : ");
    scanf("%d",&s.marks);

    printf("\nThe entered details of the candidate is as follows ");
    printf("\nName of the Student : %s",s.name);
    printf("\nBRANCH : %s",s.branch);
    printf("\nENROLLMENT No. : %s",s.enrollmentno);
    printf("\nMarks Obtained : %d",s.marks);
    return 0;
}
