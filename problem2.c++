#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <utility>
#include <queue>
#include <stack>
#include <vector>
using namespace std;

//주유소 


int main()
{
	int n,l[1000],p[1001],p2=999999,i,m=0;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		scanf("%d",&l[i]);
	}
	for(i=1;i<=n;i++)
	{
		scanf("%d",&p[i]);
	}
	for(i=1;i<=n-1;i++)
	{
		if(p[i]<p2)
		{
			p2=p[i];
		}
		m=m+l[i]*p2;
	}
	printf("%d",m);
}
