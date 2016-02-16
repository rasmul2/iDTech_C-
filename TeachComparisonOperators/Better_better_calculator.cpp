#include <iostream>

using namespace std;

float add(float x, float y){
	float z;
	z = x + y;
	return z;
}

float subtract(float x, float y){
	float z;
	z = x - y;
	return z;
}

float multiply(float x, float y){
	float z;
	z = x * y;
	return z;
}

float divide(float x, float y){
	float z;
	if(y == 0){
		cout << "ERROR: Can't Divide By Zero." << endl;
	}
	else{
		z = x/y;
		return z;
	}
}

int main(){
	float x = 0;
	float y = 0;

	float answer = 0;
	string calculation; 
	cout << "What calculation would you like to do?" << endl;
	cin >> calculation; 

	cout << "What is the first number?" << endl;
	cin >> x; 
	cout << "What is the second number?" << endl;
	cin >> y;


	if (calculation == "add"){
		answer = add(x,y);
		cout << "The answer is " << answer << "." << endl;
	}

	if (calculation == "subtract")
	{
		answer = subtract(x,y);
		cout << "The answer is " << answer << "." << endl;
	}

	if (calculation == "multiply")
	{
		answer = multiply(x,y);
		cout << "The answer is " << answer << "." << endl;
	}

	if(calculation == "divide"){
		answer = divide(x,y);
		cout << "The answer is " << answer << "." << endl;
	}

	else{
		cout << "Unknown calculation" << endl;
	}
	return 0;
}
