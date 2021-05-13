#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int count=1;
	cin>>n;
	for(int i=2;i<=(n/2)+1;i++)
	{
		if(n%i==0)
		{
			cout<<"Not Prime"<<endl;
			count=0;
			break;
		}
	}
	if(count!=0)
		cout<<"Prime";
	return 0;
}
