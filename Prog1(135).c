#include<stdio.h>
int charge(char ch, int no)
{
    int bill;
   if(ch=='c')

{

    bill=10*no;

}

else if(ch=='b')

{

     bill=20*no;

}

else if(ch=='t')

{

    bill=5*no;

}

return bill;

}
void main()

{

char n;
int fee;
printf("Please enter the type of vehicle c-car, b-bus and t-two wheeler:\n");
scanf("%c",&n);

int noofhours;
printf("Please enter the no of parking hours:\n");
scanf("%d",&noofhours);

fee=charge(n,noofhours);
printf("Fees:%d",fee);
}