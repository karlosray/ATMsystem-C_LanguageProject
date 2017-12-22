#include <stdio.h>
unsigned long amount=5000, tt /*twothousand*/, fh/*500*/, oh/*OneHundred*/, withdraw;
int choice, id=1001, k;
char transaction ='y', pswd[10]={'k','a','r','l',o','s', '\0'};

void main()
{
while (id != 1001)
{
printf("ENTER YOUR SECRET PIN NUMBER and Password: -");
scanf("%d", &pin);
gets(pswd);

if (id != 1001 && pswd=="karlos")
printf("caution :: \n PLEASE ENTER VALID AUTHENTICATION PASSWORD\n");
}

do
{
printf("********Welcome to ATM Service**************\n");
printf("1. Check Balance of Your Account\n");
printf("2. Withdraw Cash\n");
printf("3. Deposit Cash\n");
printf("4. Exit\n");
printf("******************?**************************?*\n\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice)
{
case 1:
printf("\n YOUR BALANCE IN Rs : %lu ", amount);
break;
case 2:
printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
scanf("%lu", &withdraw);
if (withdraw % 100 != 0)
{
printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
}
else if (withdraw >(amount - 500))
{
printf("\n INSUFFICENT BALANCE");
}
else
{
amount = amount - withdraw;
printf("\n\n PLEASE COLLECT CASH");
printf("\n YOUR CURRENT BALANCE IS%lu", amount);
}
break;
case 3:
printf("\n ENTER THE AMOUNT TO DEPOSIT");
scanf("%lu", &deposit);
amount = amount + deposit;
printf("YOUR BALANCE IS %lu", amount);
break;
case 4:
printf("\n THANK YOU 4 USING ATM");
break;
default:
printf("\n INVALID CHOICE");
}
printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
fflush(stdin);
scanf("%c", &transaction);
if (transaction == 'n'|| transaction == 'N')
k = 1;
} while (!k);
printf("\n\n THANKS FOR USING OUT ATM SERVICE");
}