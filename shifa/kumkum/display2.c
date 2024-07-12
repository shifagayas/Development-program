#include <stdio.h>
#include <string.h>

long long int  AccountNumber ;  
double balance ;



void DisplayAccountDetail();
void VerifytaskNo(int taskNo);



int main() {
    int taskNo;
    AccountNumber ;
    balance ;

        printf("please enter account number :");
        scanf("%lld",&AccountNumber);
    
    printf("Enter task number ( 2: Display Account Detail, 3: Invalid Task): ");
    scanf("%d", &taskNo);

    switch (taskNo) {
        
        case 2:
            DisplayAccountDetail();
            break;
        default:
            VerifytaskNo(taskNo);
            break;
    }

    return 0;
}



void DisplayAccountDetail()
 {
    
    
    if (AccountNumber!=0)
    {
        printf("Account Number: %lld\n", AccountNumber);
        printf("Total Balance: $%.2f\n", balance);
    } 
    else 
    {
        printf("No account found. Please create an account first.\n");
    }
}


void VerifytaskNo(int taskNo) {
    printf("Error: Invalid task number %d. Please enter a valid task number.\n", taskNo);
}
