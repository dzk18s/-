#include <stdio.h>
int f(long long x)
{
	static int count=0;
	if(x>0)
	{
		count++;
		f(x/10);
	}
	return count;
}
long long gx(long long num,long long i)
{
	
	long long a=0,j=0,l=0;
	long long x=f(num);
	for(int c=1;c<x;c++)
	{
		i=i*10;
	}
	for(l=0;l<x;l++){
	if(num>0)
	{
		a=num%10*i;
		j=a+j;
		i=i/10;
		num=num/10;
	}
	}
	return j;
}  
int main()
{
	long long num,i=1;
	scanf("%lld",&num);
	long long x=gx(num,i);
	if(x==num){
		printf("%lld=%lld,是回文数",num,x);
	}
	else printf("不是回文数");
	return 0;
}
