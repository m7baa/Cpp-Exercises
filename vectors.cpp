#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
	
	// Create vector.
	vector<double> vector1{6.8, 20.5, 50};

	// Add to vector
	vector1.push_back(100);

	// Ranged loop
	for (double i : vector1){
	cout << i << ", ";
	}

	cout << "\n" << vector1.at(2) << endl;// Preferred 
	cout << vector1[2] << endl; 

	// change element at index 0
	vector1.at(0) = 9;

	for (double i : vector1){
	cout << i << ", ";
	}

	// Remove the last element
	vector1.pop_back();
	cout << endl;

	for (double i : vector1){
	cout  << i << ", ";
	}

	cout << endl;

	return 0;
}

