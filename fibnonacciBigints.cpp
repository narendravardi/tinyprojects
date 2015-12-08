//Developed by Narendra Vardi
//This program will prints first n fibonacci numbers without worrying about the integer overflows.
//uses mulBigints.cpp for this purpose 



#include<cstdio>
#include<string>
#include<cmath>
#include<vector>
#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

string to_string(int num)
{
	string result;
	while(num > 0)
	{
		int remainder = num %10;
		result.push_back(remainder+'0');
		num/=10;
	}
	reverse(result.begin(),result.end());
	return result;
}
string addBigints(string a,string b)
{

	deque<char> first,second;
	for(int i=0;i<a.size();++i)
	{
		first.push_back(a[i]);
	}
	for(int i=0;i<b.size();++i)
	{
		second.push_back(b[i]);
	}
	int n1=a.size();
	int n2=b.size();
	int diff=abs(n1-n2);
	if(n1<n2)
	{
		for(int i=0;i<diff;++i)
			first.push_front('0');
	}
	else
	{
		for(int i=0;i<diff;++i)
			second.push_front('0');
	}
	int carry=0;
	int temp;
	int digit;
	deque<char> result;
	for(int i=second.size()-1;i>=0;--i)
	{

		 temp = first[i]-'0' + second[i]-'0' + carry;
		 digit = temp%10;
		 carry = temp/10;
		char c = digit+'0';
		result.push_front(c);
	}
	while(carry > 0)
	{
		int temp = carry%10;
		result.push_front(temp+'0');
		carry/=10;
	}
	string res;
	for(int i=0;i<result.size();++i)
		res.push_back(result[i]);

	return res;
}

string mulbyDigit(string a,char b)
{
	
	int carry = 0;
	int number = 0;
	reverse(a.begin(),a.end());
	deque<char> res;
	for(int i=0;i<a.size();++i)
	{
		number = ((b-'0')*(a[i]-'0'))+carry;
		carry = number / 10;
		int remainder = number %10;
		res.push_front(remainder+'0');
	}
	while(carry > 0)
	{
		
		int temp = carry%10;
		res.push_front(temp+'0');
		carry/=10;

	}
	string result;
	for(int i=0;i<res.size();++i)
	{
		result.push_back(res[i]);
	}
	return result;
}
string mulBigints(string a,string b)
{
	
	vector<string> inter;
	for(int i=0;i<b.size();++i)
	{
		inter.push_back(mulbyDigit(a,b[i]));

	}
	int size = inter.size();
	size--;
	for(int i=0;i<inter.size();++i)
	{
		string temp;
		for (int j = 0; j < size; ++j)
		{
			temp.push_back('0');
		}
		inter[i]+=temp;
		size--;
	}
	string res="0";
	for(int i=0;i<inter.size();++i)
	{
		res = addBigints(res,inter[i]);
	}
	return res;
}
int main()
{
	vector<string> fib;
	fib.push_back("1");
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n;++i)
	{
		int size=fib.size()-1;
		fib.push_back(mulBigints(to_string(i),fib[size]));
	}
	for(int i=0;i<fib.size();++i)
	{
		cout<<fib[i]<<"\n";
	}
	return 0;
}
