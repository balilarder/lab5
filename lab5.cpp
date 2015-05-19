#include<iostream>
#include<string>
#include"lab5.h"
using namespace std;
HugeInt::HugeInt(int x)
{
	length=0;
	int fill=0;
	for(int i=0;i<100;i++)
		num[i]=0;
	while(1)
	{
		int q=x/10;
		int r=x%10;
		num[fill]=r;
		fill++;
		length++;
		x=q;
		if(x==0)
			break;
	}

}
HugeInt::HugeInt(string str)
{
	for(int i=0;i<100;i++)
		num[i]=0;
	int l=str.length();
	length=l;
	for(int i=0;i<length;i++)
		num[i]=str.at(l-1-i)-48;
}
ostream& operator<<(ostream& out,const HugeInt& a)
{
	for(int i=a.length-1;i>=0;i--)
		out<<a.num[i];
	return out;
}
istream& operator>>(istream& in,HugeInt& a)
{
	string input;
	cin>>input;
	int l=input.length();
	for(int i=0;i<input.length();i++)
		a.num[i]=input.at(l-1-i)-48;
	a.length=input.length();
	return in;
}
