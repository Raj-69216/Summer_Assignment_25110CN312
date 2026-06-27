#include <stdio.h>
#include <string.h>
void q110(){char name[50];int acc;float bal;printf("=== Bank Account ===\nHolder: ");scanf("%s",name);printf("Account No: ");scanf("%d",&acc);printf("Initial deposit: ");scanf("%f",&bal);int ch;float amt;do{printf("\n1.Deposit 2.Withdraw 3.Balance 4.Exit\nChoice: ");scanf("%d",&ch);if(ch==1){printf("Amount: ");scanf("%f",&amt);bal+=amt;printf("Balance: Rs%.2f\n",bal);}else if(ch==2){printf("Amount: ");scanf("%f",&amt);if(amt>bal)printf("Insufficient!\n");else{bal-=amt;printf("Balance: Rs%.2f\n",bal);}}else if(ch==3)printf("Balance: Rs%.2f\n",bal);}while(ch!=4);
return 0;
}
