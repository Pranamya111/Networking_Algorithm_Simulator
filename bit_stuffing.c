#include<stdio.h>
#include<string.h>
#define Max 100
void bit_stuffing()
{
int si=0,di, count=6;
char flag []="*", src[Max],dest[Max];
printf("\n\n -----------------bit stuffing--------------------\n\n");
printf("Enter the data in binary:\t");
scanf("%s",src);
strcpy(dest,flag);
di=strlen(flag);
while (src[si]!='\0')
{
if (src[si]=='1')
count++; else
count=0;
dest[di]=src[si];
di++;
si++;
if(count==5)
{
dest[di]='0';
di++;
count=6;
}
}
dest[di]='\0';
strcat(dest,flag);
printf("\n\n Stuffed data is : \t %s ", dest);
}

