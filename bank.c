//Banking Management

#include<stdio.h>
#include<process.h>
#include<conio.h>
int main()
{
    char name[20], Account_type[20], op;
    int ch, ch2, Account_no=123456789, amount, balance_amt=1000;
    do
    {
        printf("\n1. Open Account\n");
        printf("2. Do Transaction\n");
        printf("3. Exit\n");

        printf("\nEnter Your Choice : ");
        scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("\nEnter Your Name : ");
        scanf("%s",&name);
        printf("Enter Account Type : ");
        scanf("%s",&Account_type);

        printf("Account Opened\n");

        break;
    case 2:
        if(name[1]=='\0')
        {
            printf("Create Account First\n");

        }
        else
        {
         do
        {

           printf("\n1. Display Name, Account Number, Account Type and Check Balance\n");
           printf("2. Deposit\n");
           printf("3. Withdrawal\n");
           printf("4. Exit\n");

           printf("\nEnter Your Choice : ");
           scanf("%d", &ch2);

           switch(ch2)
           {
        case 1:
                printf("\nName                     : %s\n",name);
                printf("Account Type       : %s\n",Account_type);
                printf("Account Number : %d\n",Account_no);
                printf("Balance                  : %d",balance_amt);
                printf("\n-------------------------------\n");
                break;
            case 2:
                printf("\nEnter Amount to Deposit : ");
                scanf("%d", &amount);

                balance_amt+=amount;
                printf("Deposit Successful\n");

                break;
            case 3:
                if(balance_amt<=1000)
               {
                printf("Sorry!!! Withdraw Not possible\n");
                printf("You have Minimum Balance\n");

               }
               else
                {
                 printf("Enter Amount to Withdrawal : ");
                 scanf("%d",&amount);

                 if(amount>balance_amt)
                    {
                    printf("Insufficient Balance\n");

                    }
                 else
                {
                 balance_amt=balance_amt-amount;
                 if(balance_amt<1000)
                 {
                     printf("Sorry!!! Withdrawal Not Possible\n");
                     printf("It Will Break Minimum Balance Bar\n");

                     balance_amt=balance_amt+amount;
                 }
                 else
                    {
                     printf("Withdrawal Successful\n");

                    }
                }
                }
               break;
           case 4:
                printf("You Want to Exit : ");
                scanf("%s",&op);

                if(op=='y'||op=='Y')
                {
                printf("Thank You For Using\n");

                exit(0);
                }
                break;
           default:
            {
                 printf("Enter Valid Choice\n");

            }
           }
        }while(1);
        }
          break;
    case 3:
       printf("You Want to Exit : ");
       scanf("%s",&op);

       if(op=='y'||op=='Y')
         {
            printf("Thank You For Using\n");

            exit(0);
         }
       break;
       default:
           printf("Enter Valid Choice\n");

    }
    }
    while(1);
    getch();
    return 0;
}
