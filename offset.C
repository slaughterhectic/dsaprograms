#include <stdio.h>
void offsetneg(char str[27],char chm1[3],int a)
{
	printf(" %c",chm1[0]);
}
int main()
{
	char s[27],i;
	for (i=65;i<91;i++)
	{
		s[i]=i;
	}
	printf (" %c",s[0]);
	
	
	char ch1[3],sgn;
	int x;
	
	printf ("Enter 3 Character with no space in between: ");
	scanf ("%s",ch1);
	printf ("Enter an offset value #note do mention the sign(+/-)\t");
	//scanf(" %c",&sgn);
	scanf("%d",&x);
	offsetneg(s,ch1,x);
	
}
