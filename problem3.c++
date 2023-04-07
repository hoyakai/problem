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

//A와 B 

string s1,s2,s3;
char c[100];
int check1,check2;


int function2(int a)
{
	int i;
	if(a=0)
	{
		if(s1==s2)
		{
			s1=s3;
			return 1;
		}
		return 0;
	}
	for(i=0;i<s2.length()-a;i++)
	{
		c[i]=s1[i];
	}
	for(i=0;i<s2.length()-a;i++)
	{
		s1[s2.length()-a-1-i]=c[i];
	}
	s1=s1+'B';
	a-1;
	check1 = function1(a);
	check2 = function2(a);
	if(check1 || check2)
	{
		return 1;
	}
}



int function1(int a)
{
	if(a=0)
	{
		if(s1 == s2)
		{
			s1=s3;
			return 1;
		}
		return 0;
	}
	s1=s1+'A';
	a-1;
	check1 = function1(a);
	check2 = function2(a);
	if(check1 || check2)
	{
		return 1;
	}
}








int main()
{
	int i,a;
	cin >> s1;
	cin >> s2;
	s3=s1;
	a=s2.length()-s1.length();
	if(function1(a); || function2(a);)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
}
