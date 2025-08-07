#include <stdio.h>
#include <stdlib.h>
#define size 5


int top = -1;
int intarray[size];
void push();
void pop();
void peek();
int x;


int main()
{
   int choice, c;
   do
   {
       printf("\nPerform operation on stack:\n");
       printf("\n1.Push element\n2.Pop the element\n3.Peek\n4.End");
       printf("\n\nEnter the choice:");
       scanf("%d", &choice);
       switch (choice)
       {
       case 1:
           push();
           break;
       case 2:
           pop();
           break;
       case 3:
           peek();
           break;
       case 4:
           exit(0);
           break;
       default:
           printf("\nInvalid Choice!!");
       }
       printf("If want to continue press 1\n");
       scanf("%d", &c);
   } while (c == 1);
   return 0;
}
void push()
{
   if (top == size - 1)
   {
       printf("\nOverflow!!");
   }
   else
   {
       printf("\nEnter the elements to be added onto the stack:");
       scanf("%d", &x);
       top = top + 1;
       inparray[top] = x;
   }
}
void pop()
{
   if (top == -1)
   {
       printf("\nUnderflow");
   }
   else
   {
       printf("\nPopped element: %d", x);
       top = top - 1;
   }
}
void peek()
{
   if (top == -1)
   {
       printf("\nUnderflow");
   }
   else
   {
       printf("\nTop of Stack: %d", inparray[top]);
   }
}
