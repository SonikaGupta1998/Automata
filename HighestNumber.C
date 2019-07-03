using namespace std;
include stdio.h;
include conio.h;
void main()
{
int number,big=0;
printf("Enter 20 numbers without using an array");
for(int i=0;i<20;i++)
{
scanf("%d",&number);
printf(number);
if(number>big)
{
big=number;
}
}
printf(big);
}
