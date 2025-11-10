#include<stdio.h>
#include<stdlib.h>
 
int Top = -1, MAX;
char *STACK;
 
void push(char item)
{
if(Top == MAX - 1)
{
printf("Stack is Overflow");
}
else
{
Top = Top + 1;
STACK[Top] = item;
}
}
 
char pop()
{
char item;
if (Top == -1)
{
printf("Stack is Underflow / Empty \n");
return '\0';
}
else
{
item=STACK[Top];
Top = Top - 1;
return item;
}
}
 
void StringReversal()
{
char string[MAX];
printf("Please Enter the string of size %d to reverse : ", MAX);
scanf("%s", string);
 
for(int c=0; c<MAX; c++)
{
push(string[c]);
}
 
printf("Reversed String : ");
 
for(int c=0; c<MAX; c++)
{
printf("%c", pop());
}
}
 
int main()
{
printf("Enter the size of CHAR STACK : ");
scanf("%d", &MAX);
STACK = realloc(STACK, MAX);
StringReversal();
return 0;
}
