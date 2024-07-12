#include<stdio.h>
void withdraw();
int amount=1000,withdrawalamount;
void checkblance();
long long int acc_no;
void main()
{

int choice;

printf("\n3-withdraw amount");
printf("\n4- check your balance ");
printf("\n0- exit");
printf("enter your account number: ");
scanf("%lld", &acc_no);

while (choice!=0)
{
    printf("\n what would you like to do sir /mam: ");
    scanf("%d", &choice);
    getchar();
     switch (choice)
     {
     case 3:
     withdraw();
        break;
    case 4:
     checkblance();
     break;
     case 0:

     break;
     
     default:
     getchar();
     printf("\n please  enter a valid option so that we can provide service of your choice ");
     continue;
        break;
     }
}

}
void withdraw()
{



if (acc_no != 0){
printf("enter");
scanf("%d", &withdrawalamount);
amount-=withdrawalamount;
printf("remaining amount%d", amount);

}
 
 
else
{
    printf("please creat your account first: ");
}
 
}
void checkblance()
{


if(acc_no !=0)
{
printf("your current blancepr %d", amount);
}

else

{
    printf("please creat your account : ");
}




}