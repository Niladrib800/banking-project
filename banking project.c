#include<stdio.h>
#include<conio.h>
int list();
void deposit();
void transfer();
void withdraw();
void checkdetail();
int sum,amount,amo,tr,totaldeposit=0,totalwith=0,totaltr=0;

int main()
{
    printf("enter sum");
    scanf(" %d",&sum);
    while(1)
    {
        switch(list())
        {
        case 1:
            deposit();
            totaldeposit+=amount;
            break;
        case 2:
            withdraw();
            if(amo<=sum)
                totalwith-=amo;
            break;
        case 3:
            transfer();
            if(tr<=sum)
                totaltr-=tr;
            break;
        case 4:
            checkdetail();
        case 5:
            exit(0);
        }
    }
    getch();
    return 0;
}
int list()
{
int ch;
printf("\n1. Deposit amount:");
printf("\n2. withdraw amount:");
printf("\n3. transfer amount:");
printf("\n4. check details:");
printf("\n5. exit:");
printf("\nEnter your choice:");
scanf("%d",&ch);
return(ch);
}
void deposit()
{
    printf("Enter the amount you wish to deposit");
    scanf("%d",&amount);
    sum= sum+amount;
}
void withdraw()
{
    printf("Enter the amount you wish to withdraw");
    scanf("%d",&amo);
    if(amo<=sum)
      sum= sum-amo;
    else
      printf("\ntransaction not possible");
}
void transfer()
{
    printf("Enter the amount you wish to transfer");
    scanf("%d",&tr);
    if(tr<=sum)
      sum= sum-tr;
    else
      printf("\ntransaction not possible");
}
void checkdetail()
{
    printf("total amount = %d",sum);
    printf("\ntotal deposited  amount = %d",totaldeposit);
    printf("\ntotal withdrawn amount = %d",totalwith);
    printf("\ntotal transferred amount = %d",totaltr);
}
