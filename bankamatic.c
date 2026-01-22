#include <stdio.h>
int deposit(int balance,int n){
    return balance + n;
}
int withdraw(int balance,int n){
    return balance - n;
}
void show_balance(int balance){
    printf("your currenct balance =%d\n",balance);
}
int calculate_interest(int balance){
    return balance+((balance*10)/100);
}


int main(){
    int selection,a,balance=0,b,interest;
    printf("pls select the process\n");
    printf("1.deposit   2.withdraw   3.show balance   4.calculate interest(interest rate %10)   5.exit\n");
    scanf("%d",&selection);
    while(selection!=5){//atm selection
        switch(selection){
        case 1:
            printf("pls enter the value\n");
            scanf("%d",&a);//a is amount to be added
            balance = deposit(balance,a);
            printf("new balance = %d\n",balance);
            printf("select process\n");
            break;
        case 2:
            if(balance >0){
            printf("pls enter the value\n");
            scanf("%d",&b);
            if(balance>=b){
                balance = withdraw(balance,b);
                printf("new balance = %d\n",balance);
                printf("select process\n");
                }
                else{
                printf("pls deposit money\n");
                printf("select process\n");
                }
            }
            else{
                printf("pls deposit money\n");
                printf("select process\n");
            }
            break;
        case 3:
            show_balance(balance);
            printf("select process\n");
            break;
        case 4:
            interest=calculate_interest(balance);
            printf("your interest rate =%d\n",interest);
            printf("select process\n");
            break;
        case 5:
            break;
        default:
            printf("pls enter variable value\n");
        break;
        }
        scanf("%d",&selection);
    }
  return 0;
}
