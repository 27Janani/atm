#include<stdio.h>
#include<conio.h>
void main()
{
    int pin, pin1 = 5555, c=1, ch, amt, balance=5000;
    printf("Welcome to kotak Bank\n");
    start:
    printf("Enter the pin number\n");
    scanf("%d",&pin);
    if(pin==pin1)
    {
         printf("please select your choice\n");
        printf("1.deposit \n2.withdraw \n3.checkbalance \n4.changepin\n");
        scanf("%d", &ch);
    }
     else{
        printf("Please enter the valid pin\n");
        if(c<3){
            c++;
        }
        goto start;
       switch(ch)
        {
        case 1:
            printf("Enter the deposit amount");
            scanf("%d", &amt);
            if(amt<=20000){
                balance = balance + amt;
                printf("%d", balance);
            }
            else{
                printf("max limit of withdraw is 20k\n");
            }
            break;
        case 2:
            printf("Enter the withdraw  amount\n");
            scanf("%d", &amt);
            if(amt<=20000){
               if(amt<=balance){
                   balance = balance - amt;
                   printf("after deducting %d,current balance=%d\n", amt, balance);
               }
            }
            else
            {
                printf("max limit for withdraw is 20k\n");
            }
            break;
        case 3:
            printf("your balance=%d\n,balance");
            scanf("%d", &amt);
            break;
        case 4:
            printf("Enter the new pin");
            scanf("%d", &pin1);
            printf("your pin is updated sucessfully ...!\nlogin again\n");
            goto start;
            break;
        }
    }
printf("press 1 to continue..\n");
scanf("%d",&ch);
if (ch==1){
    goto start;
printf("Thanks for using websoftware application ");
}
}