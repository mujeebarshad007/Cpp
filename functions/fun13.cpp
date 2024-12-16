#include <iostream>
using namespace std;

// Function prototypes
void displayBoard(char board[3][3]);
bool checkWinner(char board[3][3], char symbol);
bool isDraw(char board[3][3]);

int main()
{
    char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    char currentPlayer = 'X';
    int turns = 0;
    bool gameWon = false;

    while (turns < 9 && !gameWon)
    {
        displayBoard(board);
        int choice;
        cout << "Player " << currentPlayer << ", enter a position (1-9): ";
        cin >> choice;

        // Convert choice to row and column
        int row = (choice - 1) / 3;
        int col = (choice - 1) % 3;

        // Validate move
        if (choice < 1 || choice > 9 || board[row][col] == 'X' || board[row][col] == 'O')
        {
            cout << "Invalid move, try again.\n";
            continue;
        }

        // Make move
        board[row][col] = currentPlayer;
        turns++;

        // Check for winner
        if (checkWinner(board, currentPlayer))
        {
            gameWon = true;
            displayBoard(board);
            cout << "Player " << currentPlayer << " wins!\n";
            break;
        }

        // Switch player
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    if (!gameWon && isDraw(board))
    {
        displayBoard(board);
        cout << "It's a draw!\n";
    }

    return 0;
}

// Function to display the board
void displayBoard(char board[3][3])
{
    cout << "\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

// Function to check if a player has won
bool checkWinner(char board[3][3], char symbol)
{
    // Check rows and columns
    for (int i = 0; i < 3; i++)
    {
        if ((board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol) || // Row
            (board[0][i] == symbol && board[1][i] == symbol && board[2][i] == symbol))
        { // Column
            return true;
        }
    }
    // Check diagonals
    if ((board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol) || // Diagonal 1
        (board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol))
    { // Diagonal 2
        return true;
    }
    return false;
}

// Function to check if the game is a draw
bool isDraw(char board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != 'X' && board[i][j] != 'O')
            {
                return false;
            }
        }
    }
    return true;
}
