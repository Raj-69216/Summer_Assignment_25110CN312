
#include <stdio.h>
#include <ctype.h>
int main(){float bal=10000;int pin,ent,ch;printf("=== ATM Simulation ===\nEnter PIN: ");scanf("%d",&ent);if(ent!=1234){printf("Wrong PIN!\n");return;}do{printf("\n1.Balance 2.Deposit 3.Withdraw 4.Exit\nChoice: ");scanf("%d",&ch);if(ch==1)printf("Balance: Rs %.2f\n",bal);else if(ch==2){float a;printf("Amount: ");scanf("%f",&a);bal+=a;printf("New balance: Rs %.2f\n",bal);}else if(ch==3){float a;printf("Amount: ");scanf("%f",&a);if(a>bal)printf("Insufficient!\n");else{bal-=a;printf("Balance: Rs %.2f\n",bal);}}}while(ch!=4);printf("Thank you!\n");
return 0;
}
