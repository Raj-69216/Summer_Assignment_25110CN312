#include <stdio.h>
#include <string.h>
int main(){char titles[20][80],authors[20][50];int avail[20],cnt=0,ch;do{printf("\n1.Add 2.View 3.Issue 4.Return 5.Exit\nChoice: ");scanf("%d",&ch);getchar();if(ch==1){printf("Title: ");fgets(titles[cnt],80,stdin);titles[cnt][strcspn(titles[cnt],"\n")]='\0';printf("Author: ");fgets(authors[cnt],50,stdin);authors[cnt][strcspn(authors[cnt],"\n")]='\0';avail[cnt]=1;cnt++;printf("Added!\n");}else if(ch==2){printf("%-4s %-30s %-20s %-10s\n","ID","Title","Author","Status");for(int i=0;i<cnt;i++)printf("%-4d %-30s %-20s %-10s\n",i+1,titles[i],authors[i],avail[i]?"Available":"Issued");}else if(ch==3){int id;printf("Book ID: ");scanf("%d",&id);getchar();if(id>=1&&id<=cnt){if(avail[id-1]){avail[id-1]=0;printf("Issued!\n");}else printf("Not available!\n");}}else if(ch==4){int id;printf("Book ID: ");scanf("%d",&id);getchar();if(id>=1&&id<=cnt){avail[id-1]=1;printf("Returned!\n");}}}while(ch!=5);
return 0;
}
