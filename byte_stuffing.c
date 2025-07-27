#include<stdio.h>
#include<string.h> 

void byte_stuffing()
{
int si=0,di=0;
char begin[]="*", end[]="*", src[100],dest[200];
printf("\n\n -----------------Character stuffing----------------------\n\n"); 
printf("Enter the frame data in ASCII:\t");
fgets(src, sizeof(src), stdin);
src[strcspn(src, "\n")] = '\0';  

strcpy(dest,begin); 
di=di+1;
while (src[si]!='\0')
{
if (src[si]=='*')
{
dest[di]='$',dest[di+1]='*';
si=si+1;
di=di+2;
}
else if(src[si]=='$')
{
dest[di]='$', dest[di+1]='$';
si=si+1;
di=di+2;
}
else dest[di++]=src[si++];
}
dest[di]='\0';
strcat(dest,end);
printf("\n\n Character stuffed frame is : \t %s ", dest);
}

