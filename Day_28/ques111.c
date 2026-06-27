#include <stdio.h>
#include <string.h>
int main(){int seats[11]={0},ch,s;printf("=== Ticket Booking ===\n");do{printf("\n1.View 2.Book 3.Cancel 4.Exit\nChoice: ");scanf("%d",&ch);if(ch==1){for(int i=1;i<=10;i++)printf("Seat%2d: %s\n",i,seats[i]?"Booked":"Available");}else if(ch==2){printf("Seat(1-10): ");scanf("%d",&s);if(s<1||s>10)printf("Invalid!\n");else if(seats[s])printf("Already booked!\n");else{seats[s]=1;printf("Booked!\n");}}else if(ch==3){printf("Cancel seat: ");scanf("%d",&s);if(seats[s]){seats[s]=0;printf("Cancelled!\n");}else printf("Not booked!\n");}}while(ch!=4);
return 0;
}
