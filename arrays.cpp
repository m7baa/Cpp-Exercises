#include<iostream>
#include<string>

using namespace std;

// Declare an array. Define the variable type, the name of the array
// followed by square brackets and  the number of elements it should store:
int num[5] = {};

void message(){
  cout << " : Array now " <<  "\n";
}

void print(){
	for (int i : num){
		cout << i << " ";
	}
}

int main(){

	print();

	message();

	num[0] = 100;
	num[3] = 300;
	num[2] = -200;
	
    print();

	num[0] = 90;
	num[1] = 20;
	num[4] = 50;

	message();

 	print();

	cout << " : Final array" <<  "\n";

    /*To find out how many elements an array has, 
	  you have to divide the size of the array by the
	  size of the data type it contains:*/
	int getArrayLength = sizeof(num) / sizeof(int);
	cout << "Array length: " << getArrayLength << endl;

	return 0;
}
