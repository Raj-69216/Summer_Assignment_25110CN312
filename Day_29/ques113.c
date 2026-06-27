#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){float a,b;int ch;do{printf("\n1.Add 2.Sub 3.Mul 4.Div 5.Mod 6.Exit\nChoice: ");scanf("%d",&ch);if(ch>=1&&ch<=5){printf("Two numbers: ");scanf("%f %f",&a,&b);if(ch==1)printf("=%.2f\n",a+b);else if(ch==2)printf("=%.2f\n",a-b);else if(ch==3)printf("=%.2f\n",a*b);else if(ch==4){if(b)printf("=%.2f\n",a/b);else printf("Div by zero!\n");}else printf("=%d\n",(int)a%(int)b);}}while(ch!=6);
return 0;
}
