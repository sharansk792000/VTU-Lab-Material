#include<string.h>
#include<stdio.h>
char str[100],pat[100],rep[100],ans[100];
int i,j,k,m,c,flag=0;


void putmat()
{
	int i=c=m=j=0;
	while(str[c]!='\0')
	{
		if(str[m]==pat[i])
		{
			i++;m++;
			if(pat[i]=='\0')
			{
				flag=1;
				for(k=0;rep[k]!='\0';k++,j++)
				{ans[j]=rep[k];
				i=0;c=m;
				}
			}
		}
		else
		{
			ans[j]=str[c];
			j++;
			c++;
			m=c;
			i=0;
		}
	}
	ans[j]='\0';
}

void main()
{
	printf("Enter the main string\n");
	gets(str);
	printf("Enter the pat string\n");
	gets(pat);
	printf("Enter the rep string\n");
	gets(rep);
	putmat();
	if(flag==1)
	printf("Pattern string is found in the main string\n The final string is:\n%s",ans);
	else
	printf("Pattern string is not found on the main string\n");
}
