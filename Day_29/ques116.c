#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){typedef struct{int id;char item[50];int qty;float price;}Item;Item inv[50];int cnt=0,ch;do{printf("\n1.Add 2.View 3.Update 4.Total 5.Exit\nChoice: ");scanf("%d",&ch);getchar();if(ch==1){inv[cnt].id=cnt+1;printf("Item: ");fgets(inv[cnt].item,50,stdin);inv[cnt].item[strcspn(inv[cnt].item,"\n")]='\0';printf("Qty: ");scanf("%d",&inv[cnt].qty);printf("Price: ");scanf("%f",&inv[cnt].price);getchar();cnt++;printf("Added!\n");}else if(ch==2){printf("%-4s %-20s %-6s %-8s\n","ID","Item","Qty","Price");for(int i=0;i<cnt;i++)printf("%-4d %-20s %-6d %-8.2f\n",inv[i].id,inv[i].item,inv[i].qty,inv[i].price);}else if(ch==3){int id,q;printf("ID: ");scanf("%d",&id);printf("New qty: ");scanf("%d",&q);getchar();if(id>=1&&id<=cnt){inv[id-1].qty=q;printf("Updated!\n");}}else if(ch==4){float t=0;for(int i=0;i<cnt;i++)t+=inv[i].qty*inv[i].price;printf("Total value: Rs%.2f\n",t);}}while(ch!=5);
return 0;
}
