#include <stdio.h>
void deposit();
long long int AccountNumber;
int depsoitedAmount, amount;
void main()
{
    int choice;
    printf("Please Enter your Account Number : ");
    scanf("%lld", &AccountNumber);

    printf("\n 1. Create Account ");
    printf("\n 2. Deposit Amount ");
    printf("\n 3. Withdraw Amount ");
    printf("\n 4. Check Your Balance ");
    printf("\n 5. Veiw Account Details ");
    printf("\n 0. Exit ");

    printf("Enter your choice : ");
    scanf("%d", &choice);

    while(1)
    {
        switch (choice)
        {
        case 2:
            deposit();
            break;
        case 0:
            break;
        default:
            printf("Please entre valid option");
            break;
        }
    }
}
void deposit()
{

    if (AccountNumber != 0)
    {
        printf("\nHow much would you like to Deposit : ");
        scanf("%d", &depsoitedAmount);
        printf("Please Wait a moment");
        amount += depsoitedAmount;
        printf("\n\x1b[32m Your Totle Balance after Deposit : \x1b[0m %d", amount);
        printf("\nThankyou");
    }
    else
    {
        printf("\n\x1b[31m Please Creat Your Account \x1b[0m");
    }
}