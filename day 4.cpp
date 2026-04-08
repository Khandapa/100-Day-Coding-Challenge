#include<iostream>
#include<string>
using namespace std;
struct playerstats{
	string name;
	float kills;
	float death;
};
int main()
{
	cout<<"Program to find KD in game:"<<endl;
	playerstats player;
	cout<<"Enter player name:";
	cin>>player.name;
	cout<<"Enter player kills:";
	cin>>player.kills;
	cout<<"Enter player no.of death:";
	cin>>player.death;
	float kd;
	if(player.death==0)
	{
		kd=player.kills;
	}
	else
	{
	    kd=player.kills/player.death;
	}
	cout<<"KD of "<<player.name<<" is "<<kd;
	
}

