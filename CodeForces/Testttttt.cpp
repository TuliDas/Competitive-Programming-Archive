#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
#include<string>
int main()
{
	cout<<"enter a string: ";
	string s;
	getline(cin,s);
	transform(s.begin(), s.end(), s.begin(), toupper);
	cout<<s;
}
