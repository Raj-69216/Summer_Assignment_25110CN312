#include <stdio.h>
#include <string.h>
typedef struct{char name[50];int roll;float marks;}Stu;
typedef struct{char name[50];int id;char dept[30];float sal;}Emp;
int main(){char name[50];int roll;float sub[5],total=0;char*subs[]={"Math","Physics","Chem","English","CS"};printf("=== Marksheet ===\nName: ");scanf("%s",name);printf("Roll: ");scanf("%d",&roll);for(int i=0;i<5;i++){printf("%s: ",subs[i]);scanf("%f",&sub[i]);total+=sub[i];}float avg=total/5;char*g=(avg>=90)?"A+":(avg>=75)?"A":(avg>=60)?"B":(avg>=45)?"C":"F";printf("\n====MARKSHEET====\nName:%s Roll:%d\n",name,roll);for(int i=0;i<5;i++)printf("%-10s: %.1f\n",subs[i],sub[i]);printf("Total:%.1f Avg:%.2f Grade:%s\n%s\n",total,avg,g,(total>=250)?"PASS":"FAIL");
return 0;
}
