#include <stdio.h>
#include <ctype.h>
int main(){char*q[]={"5+3=?","Capital of India?","Largest planet?"};char*o[][4]={{"A.7","B.8","C.9","D.10"},{"A.Mumbai","B.Delhi","C.Chennai","D.Kolkata"},{"A.Earth","B.Saturn","C.Jupiter","D.Mars"}};char ans[]={'B','B','C'};int sc=0;printf("=== Quiz ===\n");for(int i=0;i<3;i++){printf("\nQ%d: %s\n",i+1,q[i]);for(int j=0;j<4;j++)printf("%s\n",o[i][j]);char a;printf("Answer: ");scanf(" %c",&a);if(toupper(a)==ans[i]){printf("Correct!\n");sc++;}else printf("Wrong! Ans: %c\n",ans[i]);}printf("\nScore: %d/3\n",sc);
return 0;
}
