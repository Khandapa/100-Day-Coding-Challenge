#include<iostream>
#include<string>
using namespace std;
class hero{
	public:
		string name;
		int hp;
		int attackpower;
	hero(string n,int h,int a)
	{
		name=n;
		hp=h;
		attackpower=a;
	}
	void displaystats()
	{
		cout<<"Hero's Stats"<<endl<<name<<endl<<"HP="<<hp<<endl<<"AttackPower="<<attackpower<<endl;
	}
};
int main()
{
	hero roster[3]={hero("Warrior",200,50),
	                hero("Mage",80,100),
					hero("Archer",120,75)};
	for(int i=0;i<3;i++)
	{
	roster[i].displaystats();
	cout<<endl;
    }
}
