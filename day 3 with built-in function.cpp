#include <iostream>
#include <algorithm> // Required for max_element and max
using namespace std;

int fungridFast(int grid[3][3], int rows) {
    int absoluteMax=grid[0][0]; 

    // We only need ONE loop now! We just loop down the rows.
    for(int i = 0; i < rows; i++) {
        
        // 1. Find the biggest number in this specific row.
        // Remember 'arr + 4' from yesterday? 
        // Here we say: start at row 'i', and stop 3 spaces later!
        int rowMax = *max_element(grid[i], grid[i] + 3);
        
        // 2. std::max instantly compares two numbers and returns the bigger one
        absoluteMax = max(absoluteMax, rowMax);
    }
    
    return absoluteMax;
}

int main() {
    int grid[3][3] = {
        {1, 2, 3},  
        {4, 5, 6},  
        {7, 8, 9}   
    };
    
    cout << "The highest peak is: " << fungridFast(grid, 3) << endl;
    getchar();
    return 0;
}
