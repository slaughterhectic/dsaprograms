#include <stdio.h>
void offsetneg(char chm1[3],int a)
{
	char s[27]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

	int i,w,j;

	for (i=0;i<27;i++)
	{
		for (j=0;j<3;j++){
		
		if (chm1[j]==s[i])
		{
		
		if (i-a<0)
		{
			w=(26-(a-i));
			printf(" %c",s[w]);	
		}
		else
		{
			w= (i-a);
			printf(" %c",s[w]);	
		}
		}
		else{
			continue;
		}
		}
}

}
void offsetpos(char chm1[3],int a)
{
	char s[27]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

	int i,w,j;

	for (i=0;i<27;i++)
	{
		for (j=0;j<3;j++){
		
		if (chm1[j]==s[i])
		{
		
		if (i+a>26)
		{
			w=(i+(a-i));
			printf(" %c",s[w]);	
		}
		else
		{
			w= (i+a);
			printf(" %c",s[w]);	
		}
		}
		else{
			continue;
		}
		}
}

}
int main()
{
	
	
	
	char ch1[3],sgn;
	int x;
	
	printf ("Enter 3 Character with no space in between: ");
	scanf ("%s",ch1);
	printf ("Enter a sign(+/-)\t");
	scanf (" %c",&sgn);
	printf ("Enter a number you want to offset by : ");
	scanf("%d",&x);
	if (sgn==45)
	{
	
		offsetneg(ch1,x);
	}
	else if (sgn==43)
	{
		offsetpos(ch1,x);
	}
}
