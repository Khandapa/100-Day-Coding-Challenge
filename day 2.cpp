#include <iostream>
using namespace std;

int findSecondLargest(int arr[], int n) {
    // Step 1: Set up our "sticky notes". 
    // We start them at -1 assuming all kills are 0 or higher.
    int largest = -1;       
    int secondLargest = -1; 

    // Step 2: Loop through the array exactly ONCE.
    for(int i = 0; i < n; i++) {
        
        // Condition A: We found a brand new Top Fragger!
        if(arr[i] > largest) {
        secondLargest=largest;
            // The new guy takes the 1st place spot
            largest = arr[i];        
        } 
        // Condition B: Not the biggest, but bigger than the current 2nd place!
        // We also make sure it's not a tie with the 1st place guy.
        else if(arr[i] > secondLargest && arr[i] != largest) {
            // Just replace the 2nd place guy
            secondLargest = arr[i];  
        }
    }
    
    // Step 3: Hand back the final answer
    return secondLargest; 
}

int main() {
    // Our test data
    int scores[] = {6, 10, 3, 2};
    
    // The correct formula to find the size of the array
    int size = sizeof(scores) / sizeof(scores[0]); 
    
    // Call the function and print the returned result
    cout << "The second largest score is: " << findSecondLargest(scores, size) << endl;
    
    return 0;
}

