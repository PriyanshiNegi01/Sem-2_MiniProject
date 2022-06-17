#include<stdio.h>
union student
{
     int marks;
};
int main()
{
    int n,i;
    printf("Enter the number of students:");
    scanf("%d",&n);
    union student s[n];
    printf("Enter details in sequence of roll number\n");
    for(i=0;i<n;++i)
    {
        printf("Enter marks: ");
        scanf("%d",&s[i].marks);
        printf("\n");
    }
    for(i=0;i<n;++i)
    {
        printf("Marks of roll number %d is: %d\n",i+1,s[i].marks);
    }
    return 0;
}