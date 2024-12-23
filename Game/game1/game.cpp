// A GAME DEVELOPED BY ME

#include <iostream>
using namespace std;
void Displayboard(char arr[3][3])
{
    string indent = "\t\t\t\t\t\t\t\t\t";

    cout << "\n"
         << indent << " -------------" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << indent << "| ";
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " | ";
        }
        cout << "\n"
             << indent << " -------------" << endl;
    }
}

bool checkWinner(char arr2[3][3], char currentPlayer)
{

    for (int i = 0; i < 3; i++)
    {
        if (arr2[i][0] == currentPlayer && arr2[i][1] == currentPlayer && arr2[i][2] == currentPlayer)
        {
            cout << " The player " << currentPlayer << " Won the game \n";
            return true;
        }
        if (arr2[0][i] == currentPlayer && arr2[1][i] == currentPlayer && arr2[2][i] == currentPlayer)
        {
            cout << " The player " << currentPlayer << " Won the game \n";
            return true;
        }
    }

    if (arr2[0][0] == currentPlayer && arr2[1][1] == currentPlayer && arr2[2][2] == currentPlayer)
    {
        cout << " The Player " << currentPlayer << " Won the game \n";
        return true;
    }
    if (arr2[0][2] == currentPlayer && arr2[1][1] == currentPlayer && arr2[2][0] == currentPlayer)
    {
        cout << " The Player " << currentPlayer << " Won the game \n";
        return true;
    }
    return false;
}
void EnterValue(char arr1[3][3])
{
    int moves = 0;
    char currentPlayer = 'X';
    int num;

    while (moves < 9)
    {
        cout << "Player " << currentPlayer << ", Kindly Enter your input (1-9): ";
        cin >> num;
        if (num < 1 || num > 9)
        {
            cout << " Invalid Input ! Please Try Again .\n";
            continue;
        }

        int row = (num - 1) / 3;
        int col = (num - 1) % 3;

        if (arr1[row][col] == 'X' || arr1[row][col] == 'O')
        {
            cout << " This Position is already filled. Try again please !\n";
            continue;
        }

        arr1[row][col] = currentPlayer;
        Displayboard(arr1);
        if (checkWinner(arr1, currentPlayer))
        {
            return;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        moves++;
    }
    cout << " Sorry it is a draw" << endl;
}
int main()
{
    char start;
    cout << "\t\t\t\t\t\t\t  ___________________________________________________" << endl;
    cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
    cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
    cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
    cout << "\t\t\t\t\t\t\t |             Welcome  Guys How are You!            |" << endl;
    cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
    cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
    cout << "\t\t\t\t\t\t\t |           This is NIKO's Tic Tac Toe Game         |" << endl;
    cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
    cout << "\t\t\t\t\t\t\t |             Please Press  /S/ to Start            |" << endl;
    cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
    cout << "\t\t\t\t\t\t\t |___________________________________________________|" << endl;
    cin >> start;
    if (start == 'S' || start == 's')
    {
        char game[3][3] = {{'1', '2', '3'},
                           {'4', '5', '6'},
                           {'7', '8', '9'}};
        Displayboard(game);
        EnterValue(game);
    }
    else
    {
        cout << " You didn't Press S, So Game would not start\n";
    }

    return 0;
}