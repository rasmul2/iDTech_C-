#include <iostream>
#include <string>

using namespace std;

int main(){
	string item;
	int x = 0;
	int y = 0;
	string groceries[2][2] = {{"peaches", "bananas"},{"peppers", "brocolli"}};

	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			cout << groceries[i][j]<< endl;
		}
	}

	bool changed = false;

	cout << "What item would you like to change in the grocery list?" << endl;
	cin >> item;
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			if(item == groceries[i][j]){
				changed = true;
				x = i;
				y = j;
			}
		}
	}
	
	if (changed == false)
	{
		cout << "Did not find item." << endl;
	}

	else{
		cout << "What would you like to change the item to?" << endl;
		cin >> item;
		groceries[x][y] = item;

		cout << "Your new list is..." << endl;
		
		for (int i = 0; i < 2; ++i)
		{
			for (int j = 0; j < 2; ++j)
			{
				cout << groceries[i][j]<< endl;
			}
		}

	}

	
}