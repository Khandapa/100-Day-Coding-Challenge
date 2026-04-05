#include<iostream>
#include<string>
using namespace std;
string palindrome()
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
}
int main()
{
 cout<<palindrome();
}

             //using bool

/*#include <iostream>
#include <string>
using namespace std;

// 1. Return type is bool (true/false)
// 2. It takes the string as an input parameter
bool isPalindrome(string word) {
	int n = word.length();
	string reversed = "";
	
	for(int i = n - 1; i >= 0; i--) {
		reversed += word[i];
	}
	
	// 3. We RETURN true or false, we don't print here.
	if(word == reversed) {
		return true;
	} else {
		return false;
	}
}

int main() {
    string userInput;
    cout << "Enter a word to check: ";
    cin >> userInput; // Get the input in main
    
    // Call the function. If it hands back 'true', do the first block.
    if(isPalindrome(userInput) == true) {
        cout << "palindrome" << endl;
    } else {
        cout << "not palindrome" << endl;
    }
    
    return 0;
}*/
