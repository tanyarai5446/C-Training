//ATM machine using switch case
#include<stdio.h>
int main()
{
  int balance,amount,deposit,pin1,ch;int pin =1234;
  printf("balance in atm:");
  scanf("%d",&balance);
  while(1){
  printf("1-->check balance\n2-->cash withdrawal\n3-->deposit amount\n4-->exit\nchoose action:");
    scanf("%d",&ch);
  
  switch(ch)
  {
    case 1:
           printf("enter pin:");
           scanf("%d",&pin1);
           if(pin==pin1)
            printf("current balance=%d",balance);
           else{
            printf("wrong pin entered");
            break;} 
           break;
    case 2:printf("\nenter amount to be withdarwed:");
           scanf("%d",&amount);
           printf("enter pin:");
           scanf("%d",&pin1);
           if(pin==pin1 && amount<=balance){
            printf("thanks for transaction");
            printf("current balance=%d",balance-amount);}
           else if(pin!=pin1){
            printf("wrong pin entered.Try again\n");
            break;} 
            else{
            printf("insufficient balance.");
            break;}
           break;
    case 3:printf("\nenter amount to be deposited:");
           scanf("%d",&deposit);
           printf("enter pin:");
           scanf("%d",&pin1);
           if(pin==pin1){

            printf("amount deposited!");
            printf("current balance after deposit=%d",balance+deposit);} 
           else{
            printf("wrong pin entered");
            break; }
           break;
    case 4:printf("exiting");return 0;
           
    default:printf("invalid choice");
    } 
  }
  return 0; 
}