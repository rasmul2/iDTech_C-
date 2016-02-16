#include <iostream>
#include <string>

using namespace std;

int main(){
	char letter;
	string line;
	int count;
	
	cout << "What would you like me to count?" << endl;
	cin >> letter;

	cout << "What would you like to say?" << endl;
	cin.ignore();
	getline (cin, line);
	cout << line << endl;

	for (int i = 0; i < line.size(); ++i)
	{
		if (line[i] == letter)
		{
			count += 1;
		}
	}

	cout << "Okay, the total number of that letter is...." << endl;
	cout << count << endl;


}