#include<iostream>
#include<vector>
#include<string>
using namespace std;
void weaponupgrade(vector<string> &a)
{
	a[0]="Steel Sword";
	a[1]="Steel Sheild";
}
int main()
{
	vector<string> backpack;
	int i;
	backpack.push_back("Irom Sword");
	backpack.push_back("Iron Sheild");
	cout<<"Your weapons are : [ "<<backpack[0]<<" ]    [ "<<backpack[1]<<" ]"<<endl;
	cout<<"To upgrade weapon press 1 : ";
	cin>>i;
	if(i==1)
	{
		weaponupgrade(backpack);
		cout<<"Weapons are upgrading..."<<endl;
		cout<<"Now your weapons are : [ "<<backpack[0]<<" ]    [ "<<backpack[1]<<" ]"<<endl;
	}
	return 0;
}
