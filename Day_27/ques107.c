#include <stdio.h>
#include <string.h>
typedef struct{char name[50];int roll;float marks;}Stu;
typedef struct{char name[50];int id;char dept[30];float sal;}Emp;
int main(){char name[50];float basic,hra,da,gross,tax,net;printf("=== Salary Management ===\nName: ");scanf("%s",name);printf("Basic: ");scanf("%f",&basic);hra=0.20*basic;da=0.10*basic;gross=basic+hra+da;tax=(gross>20000)?0.10*gross:0;net=gross-tax;printf("\n--- Salary Slip: %s ---\nBasic: Rs%.2f\nHRA: Rs%.2f\nDA: Rs%.2f\nGross: Rs%.2f\nTax: Rs%.2f\nNet: Rs%.2f\n",name,basic,hra,da,gross,tax,net);
return 0;
}