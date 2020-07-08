#include <iostream>
#include<algorithm>
#include<string>

void welcome() {
	std::cout << "Welcome to Tic Tac Toe!\n";
	std::cout << "=======================\n\n";
	std::cout << "Player 1 is 'X' and player two is 'O'\n\n";
}

int check_winner(char board[9]) {
	//Check verticals
	if (board[0] == 'X' && board[3] == 'X' && board[6] == 'X') {
		return 1;
	}
	else if (board[1] == 'X' && board[4] == 'X' && board[7] == 'X') {
		return 1;
	}
	else if (board[2] == 'X' && board[5] == 'X' && board[8] == 'X') {
		return 1;
	}
	else if (board[0] == 'O' && board[3] == 'O' && board[6] == 'O') {
		return 2;
	}
	else if (board[1] == 'O' && board[4] == 'O' && board[7] == 'O') {
		return 2;
	}
	else if (board[2] == 'O' && board[5] == 'O' && board[8] == 'O') {
		return 2;
	}
	//CHECK HORIZONTALS
	else if (board[0] == 'X' && board[1] == 'X' && board[2] == 'X') {
		return 1;
	}
	else if (board[3] == 'X' && board[4] == 'X' && board[5] == 'X') {
		return 1;
	}
	else if (board[6] == 'X' && board[7] == 'X' && board[8] == 'X') {
		return 1;
	}
	else if (board[0] == 'O' && board[1] == 'O' && board[2] == 'O') {
		return 2;
	}
	else if (board[3] == 'O' && board[4] == 'O' && board[5] == 'O') {
		return 2;
	}
	else if (board[6] == 'O' && board[7] == 'O' && board[8] == 'O') {
		return 2;
	}
	//CHECK DIAGONALS
	else if (board[0] == 'X' && board[4] == 'X' && board[8] == 'X') {
		return 1;
	}
	else if (board[2] == 'X' && board[4] == 'X' && board[6] == 'X') {
		return 1;
	}
	else if (board[0] == 'O' && board[4] == 'O' && board[8] == 'O') {
		return 2;
	}
	else if (board[2] == 'O' && board[4] == 'O' && board[6] == 'O') {
		return 2;
	} 
	else if (std::count(board, board + 9, 'X') + std::count(board, board + 9, 'O') == 9) {
		return 3;
	}
	else {
		return 0;
	}
}

void display_board(char board[9]) {
	std::cout << board[0] << " | " << board[1] << " | " << board[2] << "\n"
		<< " " << " | " << " " << " | " << " " << "\n"
		<< "---------\n"
		<< " " << " | " << " " << " | " << " " << "\n"
		<< board[3] << " | " << board[4] << " | " << board[5] << "\n"
		<< " " << " | " << " " << " | " << " " << "\n"
		<< "---------\n"
		<< " " << " | " << " " << " | " << " " << "\n"
		<< board[6] << " | " << board[7] << " | " << board[8] << "\n"
		<< " " << " | " << " " << " | " << " " << "\n";

}