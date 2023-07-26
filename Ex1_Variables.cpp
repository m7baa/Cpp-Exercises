	//****Variables****

	#include<iostream>
	#include<string>

	using namespace std;

	int main(){

	// Create variables and assign values.
	int myInt = {100};
	string myString = {"hello world"};  // Double quotes for strings.
	double myDouble = {20.5};
	float myFloat = {5.05};
	char myChar = {'T'}; // Note single quotes.
	char myChar2 = {84}; // Same as myChar (T) above.
	bool myBool = {6 > 10};

	cout << myInt << "\n";
	cout << myString << "\n";
	cout << myDouble << ", " << myFloat << "\n";
	cout << myChar << ", " << myChar2 << "\n";
		
	const int myNum = 15; // Constant,  unchangeable and read-only)
	
	if (myBool){
		cout << "6 > 10 is True!\n";
	}else {
		cout << "6 > 10 is False!\n";
	}
	
	return 0;

	}
