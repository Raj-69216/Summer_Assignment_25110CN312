#include <stdio.h>
#include <ctype.h>

int main(){char name[50];int age;printf("=== Voting Eligibility ===\n");printf("Name: ");scanf("%s",name);printf("Age: ");scanf("%d",&age);if(age>=18)printf("%s is ELIGIBLE to vote.\n",name);else printf("%s is NOT eligible (%d more year(s)).\n",name,18-age);
return 0;
}
