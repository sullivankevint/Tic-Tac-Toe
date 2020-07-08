// Tic Tac Toe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "ttt_functions.h"

int main()
{
    welcome();
    int game_status = 0; //game status variable, will change to 1 or 2 depending on which player wins 3 qill indicate a tie
    char board[9] = { };
    char board_index[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
    int square_choice;

    while (!game_status) {
        display_board(board_index);
        display_board(board);
        std::cout << "Player 1! Choose which square to put your X!";
        std::cin >> square_choice;
        board[square_choice - 1] = 'X';
        if (!check_winner(board)) {
            display_board(board);
            std::cout << "Player 2! Choose which square to put your O!";
            std::cin >> square_choice;
            board[square_choice - 1] = 'O';
        }
        game_status = check_winner(board);
    }
    switch (game_status)
    {
    case 1:
        std::cout << "Congratulations player 1! Your X's dominated!\n";
        break;

    case 2:
        std::cout << "Congratulations player 2! Your O's ruled the day!\n";
        break;

    case 3:
        std::cout << "A cats game for those even at wits\n";
        break;
    
    default:
        break;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
