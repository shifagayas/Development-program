#include <stdio.h>
#include <string.h>
void createaccount();
void deposit();
void withdraw();
void checkblance();
void DisplayAccountDetail();
long long int AccountNumber, flag;
char name[10];
int amount, withdrawalamount, depsoitedAmount;

void main()
{

    int choice;
    printf("\n \x1b[36m********** Banking Managment System ********** \x1b[0m \n");
    printf("\n \x1b[33m 1. Create Account \x1b[0m");
    printf("\n \x1b[33m 2. Deposit Amount \x1b[0m");
    printf("\n \x1b[33m 3. Withdraw Amount \x1b[0m");
    printf("\n \x1b[33m 4. Check Your Balance \x1b[0m");
    printf("\n \x1b[33m 5. Veiw Account Details \x1b[0m");
    printf("\n \x1b[33m 0. Exit \x1b[0m");

    while (choice != 0)
    {
        printf("\n What would You Like to Do Sir / Maam :");
        scanf("%d", &choice);
        getchar();
        switch (choice)
        {
        case 1:
            createaccount();
            break;
        case 2:
            deposit();
            break;
        case 3:
            withdraw();
            break;
        case 4:
            checkblance();
            break;
        case 5:
            DisplayAccountDetail();
            break;
        case 0:
            break;
        default:
            printf("\n \x1b[31m Please Enter a Valid Option so that we can provide Service of your choice \x1b[0m");
            getchar();
            continue;
        }
    }
}

// Method for Creating Account//
void createaccount()
{

    while (1)
    {
        flag = 0;

        printf("\n\n Please Enter your 11 digit account number : ");
        scanf("%lld",&AccountNumber);
        getchar();
        while (AccountNumber != 0)
        {
            AccountNumber /= 10;
            ++flag;
        }

        if (flag == 11)
        {
            break;
        }
        else
        {
            continue;
        }
    }
    while (1)
    {
        printf("Enter Account Holders Name :");
        scanf("%s", name);

        if (strlen(name) == 1 || strlen(name) == 2 || strlen(name) == 3)
        {
            printf("\x1b[31m Please Enter Your Real Name \x1b[0m \n");
            continue;
        }
        else
        {
            break;
        }
    }
    while (1)
    {
        printf("Minimum 500 Rupees is required for Opening New Account : ");
        scanf("%d", &amount);
        getchar();
        if (amount < 500)
        {
            continue;
        }
        else
        {
            printf("\n\033[22;34m Your Acount Has Been Created  \033[0m");
            printf("\n\x1b[32m Thank You for Trusting Us \x1b[0m");
            break;
        }
    }
}

void deposit()
{

    if (flag != 0)
    {
        printf("\nHow much would you like to Deposit : ");
        scanf("%d", &depsoitedAmount);
        printf("\n \x1b[33m Please Wait a moment till we process it \x1b[0m\n");
        amount += depsoitedAmount;
        printf("\n\x1b[32m Your Totle Balance after Deposit : \x1b[0m %d", amount);
        printf("\n\033[22   Thankyou \x1b[0m");
    }
    else
    {
        printf("\n\x1b[31m Please Creat Your Account \x1b[0m");
    }
}

// Method for Withdrawing Amount//
void withdraw()
{

    if (flag != 0)
    {
        printf("How much you want to Withdraw : ");
        scanf("%d", &withdrawalamount);
        amount -= withdrawalamount;
        printf("\n\x1b[32m Your Remaining Balance : \x1b[0m %d", amount);
    }
    else
    {
        printf("\x1b[31m Please Creat Your Account \x1b[0m");
    }
}

// Method for Displaying Account Details//
void DisplayAccountDetail()
{

    if (flag != 0)
    {
        printf("Account Number: %lld\n",AccountNumber);
        printf("Total Balance: %d\n", amount);
    }
    else
    {
        printf("\x1b[31m No account found. Please create an account first \x1b[0m\n");
    }
}

// Method for Checking Balance//
void checkblance()
{
    if (flag != 0)
    {
        printf("your current blance %d", amount);
    }
    else
    {
        printf("\x1b[31m Please Creat Your Account \x1b[0m");
    }
}