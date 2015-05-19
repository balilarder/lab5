#include<iostream>
#include<string>
using namespace std;
class HugeInt
{
	friend ostream& operator<<(ostream&,const HugeInt&);
	friend istream& operator>>(istream&,HugeInt&);
public:
	HugeInt(int a=0);
	HugeInt(string str);
private:
	int num[100];
	int length;
};
