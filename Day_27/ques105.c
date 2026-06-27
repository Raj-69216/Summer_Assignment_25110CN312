#include <stdio.h>
#include <string.h>
typedef struct{char name[50];int roll;float marks;}Stu;
typedef struct{char name[50];int id;char dept[30];float sal;}Emp;
int main
(){int n;printf("=== Student Record ===\nStudents: ");
    scanf("%d",&n);getchar();Stu s[n];for(int i=0;i<n;i++){printf("\nName: ");
        fgets(s[i].name,50,stdin);s[i].name[strcspn(s[i].name,"\n")]='\0';printf("Roll: ");scanf("%d",&s[i].roll);printf("Marks: ");scanf("%f",&s[i].marks);getchar();}printf("\n%-15s %-8s %-8s\n","Name","Roll","Marks");for(int i=0;i<n;i++)printf("%-15s %-8d %-8.2f\n",s[i].name,s[i].roll,s[i].marks);
    return 0;
    }