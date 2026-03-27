#include<stdio.h>
int main()
{
	char a[100];
	int i,vow=0,con=0,sp=0;
	printf("enter the string :");
	fgets(a,100,stdin);
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
		{
			vow=vow+1;

		}
		else if((a[i])>'a'&&(a[i])>'z'||(a[i])>'A'&&(a[i])>'Z')
		{
			con=con+1;
		}
		else if(a[i]==' ')
		{
			sp=sp+1;
		}
	}
	printf("vowels=%d,consonants=%d,spaces=%d\n",vow,con,sp);
	return 0;
}
