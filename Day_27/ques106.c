#include <stdio.h>
#include <string.h>
typedef struct{char name[50];int roll;float marks;}Stu;
typedef struct{char name[50];int id;char dept[30];float sal;}Emp;
int main(){int n;printf("=== Employee Management ===\nEmployees: ");scanf("%d",&n);getchar();Emp e[n];for(int i=0;i<n;i++){printf("\nName: ");fgets(e[i].name,50,stdin);e[i].name[strcspn(e[i].name,"\n")]='\0';printf("ID: ");scanf("%d",&e[i].id);printf("Dept: ");scanf("%s",e[i].dept);printf("Salary: ");scanf("%f",&e[i].sal);getchar();}printf("\n%-15s %-6s %-12s %-8s\n","Name","ID","Dept","Salary");for(int i=0;i<n;i++)printf("%-15s %-6d %-12s %-8.2f\n",e[i].name,e[i].id,e[i].dept,e[i].sal);\
return 0;
}