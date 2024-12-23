#include <iostream>
using namespace std;
void Displayboard(char arr[3][3])
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void EnterValue(char arr1[3][3])
{
    char currentPlayer = 'X';
    int num;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Player " << currentPlayer << ", enter your move (1-9): ";
            cin >> num;
            if (num < 1 || num > 9)
            {
                cout << " Invalid Input ! Please Try Again .\n";
                j--;
                continue;
            }
            int row = (num - 1) / 3;
            int col = (num - 1) % 3;

            if (arr1[row][col] == 'X' || arr1[row][col] == 'O')
            {
                cout << " This Position is already filled. Try again please !\n";
                j--;
                continue;
            }

            arr1[row][col] = currentPlayer;
            Displayboard(arr1);
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }
    }
}

int main()
{
    char game[3][3] = {{'1', '2', '3'},
                       {'4', '5', '6'},
                       {'7', '8', '9'}};
    Displayboard(game);
    EnterValue(game);

    return 0;
}