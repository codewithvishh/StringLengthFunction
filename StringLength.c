#include <stdio.h>
int getLength(char s[]);
int getLength(char s[])
{
  int i;
  for(i=0;s[i]!='\0';i++){}
   printf("%d",i);
}
int main()
{
    char s[100];
    printf("enter string:");
    scanf("%s",s);
    getLength(s);
    return 0;
}
