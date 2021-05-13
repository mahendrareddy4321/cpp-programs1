#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int count=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count+=1;
		}
	}
	if(count==2)
		cout<<"Prime"<<endl;
	else
		cout<<"Not Prime"<<endl;
	return 0;
}
