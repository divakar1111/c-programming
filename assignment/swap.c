#include <stdio.h>

int main(void) {
char s[30];
int i,l,temp;
scanf("%s",&s);
l=strlen(s);
for(i=0;i<(l/2)*2;i=i+2)
{
temp=s[i];
s[i]=s[i+1];
s[i+1]=temp;
}
printf("%s",s);
}
