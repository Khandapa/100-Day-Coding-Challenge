#include<iostream>
using namespace std;
int fungrid(int grid[3][3])
{
    int max=grid[0][0];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(grid[i][j]>max)
			{
				max=grid[i][j];
			}
		}
	}
	return max;
}
int main()
{
	int grid[3][3];
	cout<< "Please enter 9 elevation numbers for the radar:" << endl;
	int k=1;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout<<"Elevation number "<<k<<":";
            cin >> grid[i][j]; 
            k++;
        }
    }
    cout << "\nScan Complete! Here is your map:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl<<"Highest elevation:"<<fungrid(grid);
    getchar();
}
// Raw one or first try
/*#include<iostream>
using namespace std;
int fungrid(int grid[3][3],int max)
{

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(grid[i][j]>max)
			{
				max=grid[i][j];
			}
		}
	}
	return max;
}
int main()
{
int grid[3][3]= {
    {1, 2, 3},  
    {4, 5, 6},  
    {7, 8, 9}   
};
	int max=grid[0][0];
	cout<<fungrid(grid,max);
	getchar();
	
}*/

