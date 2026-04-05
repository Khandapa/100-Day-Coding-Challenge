#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
	string word;
	cin>>word;
	int n=word.length();
	string reversed;
	for(int i=n-1;i>=0;i--)
	{
		reversed+=word[i];
	}
	if(word==reversed)
	{
		cout<<"palindrome";
	}
	else
	{
		cout<<"not palindrome";
	}
	getch();
}
