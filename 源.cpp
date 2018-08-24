#include"stdio.h"
#include"iostream"
using namespace std;
double save1[1111]={0},a;
int main()
{
	int cycle,sum1,sum=0;
	bool flag[1111];
	for(int i=0;i<=1001;i++)
	{
		flag[i]=false;
	}
	scanf("%d",&cycle);
	for(int i=0;i<cycle;i++)
	{
		scanf("%d",&sum1);
		scanf("%lf",&save1[sum1]);
		if(flag[sum1]!=true)
		sum++;
		flag[sum1]=true;
	}
	scanf("%d",&cycle);
	for(int i=0;i<cycle;i++)
	{
		scanf("%d",&sum1);
		scanf("%lf",&a);
		save1[sum1]+=a;
		if(flag[sum1]==false)
			sum++;
	}
	printf("%d",sum);
	for(int i=1001;i>=0;i--)
	{
			
		if(save1[i]!=0)
		{
			printf(" %d %.1f",i,save1[i]);
		}
	}
		return 0;
}

/*
const int max_n=1111;
double p[max_n]={};
int main()
{
	int k,n,count=0;
	double a;
	scanf("%d",&k);
	for(int i=0;i<k;i++)
	{

		scanf("%d",&n);
		scanf("%lf",&a);
		p[n]+=a;
	}
	scanf("%d",&k);
	for(int i=0;i<k;i++)
	{
		scanf("%d",&n);
		scanf("%lf",&a);
		p[n]+=a;
	}
	for(int i=0;i<max_n;i++)
	{
		if(p[i]!=0)
		{
			count++;
		}
	}
	printf("%d",count);
	for(int i=max_n-1;i>=0;i--)
	{
			
		if(p[i]!=0)
		{
			printf(" ");
			printf("%d ",i);
			printf("%.1lf",p[i]);
		}
	}
		return 0;
}*/