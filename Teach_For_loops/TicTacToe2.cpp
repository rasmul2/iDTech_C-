#include <iostream>

using namespace std;

void CheckBoard(char* b[][3]);

int main(){
	char board [3][3] = {{'-','-','-'},{'-','-','-'},{'-','-','-'}};
	CheckBoard(board);

}

void CheckBoard(char* b[][3]){
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++i)
		{
			cout << b[i][j];
		}
		cout << endl;
	}

}