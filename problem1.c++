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

//달팽이는 올라가고 싶다. 


int main()
{
	int a,b,v,i,day=0,w=0;
	scanf("%d %d %d",&a,&b,&v);
	while(1)
	{
		day++;
		w=w+a;
		if(w>=v)
		{
			printf("%d",day);
			break;
		}
		else
		{
			w=w-b;
		}
	}
	return 0;
}
