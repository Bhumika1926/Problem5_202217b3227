#include<stdio.h>
//#include<conio.h> // This header is not standard and may not be available on all compilers
#include<stdlib.h> // Include this for exit()
#define n 5
void main() {
   int queue[n], ch = 1, front = 0, rear = 0, i, j = 1, x = n; // Corrected variable declarations
   //clrscr(); // Commented out since clrscr() is not a standard function
   printf("Queue using Array");
   printf("\n1.Insertion \n2.Deletion \n3.Display \n4.Exit");
   while (ch) {
       printf("\nEnter the Choice:");
       scanf("%d", &ch);
       switch (ch) {
           case 1:
               if (rear == n)
                   printf("\n Queue is Full");
               else {
                   printf("\n Enter number %d:", j++);
                   scanf("%d", &queue[rear++]);
               }
               break;
           case 2:
               if (front == rear) {
                   printf("\n Queue is empty");
               } else {
                   printf("\n Deleted Element is %d", queue[front++]);
                   x++; // Corrected increment logic
               }
               break;
           case 3:
               printf("\n Queue Elements are:\n");
               if (front == rear)
                   printf("\n Queue is Empty");
               else {
                   for (i = front; i < rear; i++) {
                       printf("%d\n", queue[i]);
                   }
               }
               break;
           case 4:
               exit(0); // Exit the program gracefully
           default:
               printf("Wrong Choice: please see the options");
       }
   }
   //getch(); // Commented out getch() since it's not a standard function
}