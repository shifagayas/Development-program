#include <stdio.h>
#include <string.h>
void createaccount();
long long int acc_no=0,flag;
char name[10];
int amount;
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

    while(choice!=0)
    {
        printf("\n What would You Like to Do Sir / Maam :");
        scanf("%d",&choice);
        getchar();
        switch (choice)
        {
            case 1:
                createaccount();
                break;
            case 0:
                break;    
            default:
                getchar();
                printf("\n \x1b[31m Please Enter a Valid Option so that we can provide Service of your choice \x1b[0m");
                continue;
        }
    }
}
void createaccount()
{
    
    while (1)
    {
        flag=0; 

        printf("\n\n Please Enter your 11 digit account number : ");
        scanf("%lld",&acc_no);
        

        while (acc_no != 0)
        {
            acc_no /= 10;
            // printf("%ld",acc_no);
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
        if (amount < 500)
        {
            continue;
        }
        else
        {
            printf("\n\033[22;34m Your Acount Has Been Created  \033[0m");
            printf("\n\x1b[32m Thank You for Trusting Us \x1b[0m");
            // printf("\033[22;34m thanks\033[0m");
            break;
        }
    }
}
