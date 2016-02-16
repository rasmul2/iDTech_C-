#include <iostream>

using namespace std;


int main(){
	char board [3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
	int x;
	int y;
	bool playing = true;
	char player = 'O';
	while(playing){
		if (player == 'O')
		{
			cout << "Player 1 where would you like to put your X?" << endl;
			cout << "x" << endl;
			cin >> x;
			cout << "y" << endl;
			cin >> y;

			player = 'X';
		}


		else if(player == 'X') {
			cout << "Player 2 where would you like to put your O?" << endl;
			cout << "x" << endl;
			cin >> x;
			cout << "y" << endl;
			cin >> y;


			player = 'O';
		}

		

		//for loop to replace piece
		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				if (i == x && j == y && board[i][j]== ' ')
				{
					board[i][j]= player;
				}
			}
		}

		//for loops to print board
		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				cout << board[i][j];
			}
			cout << endl;
		}

		//for loop to check for win
		if(player == 'X'){
			for (int i = 0; i < 3; ++i)
			{
				for (int j = 0; j < 3; ++j)
				{
					if (board[i+1][j]== 'X' && board[i-1][j]== 'X')
					{
						cout << "Tic Tac Toe! Player 1" << endl;
						playing = false;
					}
					if (board[i][j-1]== 'X' && board[i][j+1] == 'X')
					{ 
						cout << "Tic Tac Toe! Player 1" << endl;
						playing = false;
					}
					if (board[i-1][j+1] == 'X' && board[i+1][j-1]== 'X')
					{
						cout << "Tic Tac Toe! Player 1" << endl;
						playing = false;
					}
				}
			}

		}
		


		if(player == 'O'){
			for (int i = 0; i < 3; ++i)
			{
				for (int j = 0; j < 3; ++j)
				{
					if (board[i+1][j]== 'O' && board[i-1][j]== 'O')
					{
						cout << "Tic Tac Toe! Player 2" << endl;
						playing = false;
					}
					if (board[i][j-1]== 'O' && board[i][j+1] == 'O')
					{ 
						cout << "Tic Tac Toe! Player 2" << endl;
						playing = false;
					}
					if (board[i-1][j+1] == 'O' && board[i+1][j-1]== 'O')
					{
						cout << "Tic Tac Toe! Player 2" << endl;
						playing = false;
					}
				}
			}

		}
		

	}
}




