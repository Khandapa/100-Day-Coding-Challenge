#include<iostream>
#include<algorithm>
using namespace std;
int secondlarge(int arr[], int n)
{
	sort(arr,arr + n);
	return arr[n-2];
	
}
int main()
{
	    // Our test data
    int scores[] = {7, 10, 3, 2};
   // int biggest = *max_element(arr, arr + 4); to fing largest number
    
    // The correct formula to find the size of the array
    int size = sizeof(scores) / sizeof(scores[0]); 
    
    // Call the function and print the returned result
    cout << "The second largest score is: " << secondlarge(scores, size) << endl;
    getchar();
    return 0;
}
