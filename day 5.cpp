#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
class ATM{
	private:
	double balance;
	public:
		string name;
	ATM(string n, double b)
	{
	balance=b;
	name=n;
	}
	void deposit(double amount)
	{
		balance+=amount;
	}
	void withdraw(double amount)
	{
		if(balance>=amount)
		{
			balance=balance-amount;
		}
		else
		{
			cout<<"insufficient balance"<<endl;
		}
	}
	void check()
	{
		cout<<"Account holder name :"<<name<<endl;
		cout<<"Balance in account ="<<balance<<endl;
	}

};
int main()
{
	string name;
	bool boolen=true;
	double balance,amount;
	char option,e;
	cout<<"Welcome to open bank account:"<<endl;
	cout<<"Enter owner name=";
	cin>>name;
	cout<<"Enter starting balance=";
	cin>>balance;
	ATM myaccount(name,balance);
	do
	{
	cout<<"For deposit press D"<<endl<<"For withdraw press W"<<endl<<"For check balance pressed C"<<endl;
	cout<<"Enter key:";
	cin>>option;
	switch(option)
	{
	case 'D':
		cout<<"Enter deposit amount =";
		cin>>amount;
		myaccount.deposit(amount);
		break;
	case 'W':
		cout<<"Enter withdraw amount:";
		cin>>amount;
		myaccount.withdraw(amount);
		break;
	case 'C':
		myaccount.check();
		break;
	default:
		cout<<"Invalid key is pressed"<<endl;
    }
    cout<<"To go in back menu pressed any Key or to end program enter E :"<<endl<<"Enter:";
    cin>>e;
   if(e == 'E' || e == 'e') 
        {
            boolen = false; 
        }
	}while(boolen==true);
	cout << "Thank you for using our bank. Goodbye!" << endl;
	getchar();
    return 0;
}

