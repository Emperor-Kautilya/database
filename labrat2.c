#include <stdio.h>
int main()
{
int A=3;
int B;
int *P=&A;
int *Q=P;
int *R=&B;
printf("Enter value");
scanf("%d",R);
printf("%d %d \n",A,B);
printf("%d %d %d\n",*P,*Q,*R);
if(P==Q)
printf("Condition 1\n");
if(R==Q)
printf("Condition 2\n");
if(*P==*Q)
printf("Condition 3\n");
if(*R==*Q)
printf("Condition 4\n");
if(*P==*R)
printf("Condition 5\n");
}
