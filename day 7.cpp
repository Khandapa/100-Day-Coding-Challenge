#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	int pick;
	vector<string> inventory;
	
	cout << "--- Dungeon Room ---" << endl;
	cout << "You see a pile of loot." << endl;
	cout << "To pick up things from the ground press 1: ";
	cin >> pick;
	
	if(pick == 1) {
	    inventory.push_back("Iron Sword");
	    inventory.push_back("Health Potion");
	    inventory.push_back("Gold Coin");
	    cout << "\nSuccess! Loot acquired." << endl;
	} else {
	    cout << "\nYou ignored the loot and walked away." << endl;
	}
	
	cout << "You are currently holding " << inventory.size() << " items." << endl;
	cout << "Your Inventory: ";
	
	for(int i = 0; i < inventory.size(); i++)
	{
	    cout << "[" << inventory[i] << "] ";
    }
    cout << endl;

    return 0;
}
