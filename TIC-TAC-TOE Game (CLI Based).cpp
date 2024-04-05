#include <iostream>
#include <ctime>
#include <conio.h>
#include <windows.h>

using namespace std;
void drawboard(char spaces[3][3])
{
    cout << "\n\n     |     |     ";
    cout << "\n  " << spaces[0][0] << "  |  " << spaces[0][1] << "  |  " << spaces[0][2];
    cout << "\n_____|_____|_____";
    cout << "\n     |     |     ";
    cout << "\n  " << spaces[1][0] << "  |  " << spaces[1][1] << "  |  " << spaces[1][2];
    cout << "\n_____|_____|_____";
    cout << "\n     "
         << "|"
         << "     "
         << "|"
         << "   ";
    cout << "\n  " << spaces[2][0] << "  |  " << spaces[2][1] << "  |  " << spaces[2][2];
    cout << "\n     |     |     \n";
}
void user_pick(char spaces[3][3])
{
    int x, y, check = 0;
    do
    {
        cout << "\nEnter row number (1 to 3):";
        cin >> x;
        cout << "Enter column number (1 to 3):";
        cin >> y;
        x--;
        y--;
        if (spaces[x][y] == 'X' || spaces[x][y] == 'O')
            cout << "The space is already filled\n";
        else if ((x < 0 || x > 3 || y < 0 || y > 3))
            cout << "Please chose valid row and columns\n";
        else
        {
            spaces[x][y] = 'X';
            check = 1;
        }
    } while (check != 1);
}
void comp_pick(char spaces[3][3], int choice, bool middle)
{
    int x, y, check = 0;
    if (choice == 3 || choice == 4)
    {
        if (middle == false)
        {
            if (spaces[1][1] == ' ')
            {
                spaces[1][1] = 'O';
            }
            else
                spaces[0][0] = 'O';
            return;
        }
        if (choice == 4 && (((spaces[0][0] != ' ' && spaces[2][2] != ' ') && !(spaces[0][2] != ' ' && spaces[2][0] != ' ')) || (!(spaces[0][0] != ' ' && spaces[2][2] != ' ') && (spaces[0][2] != ' ' && spaces[2][0] != ' '))) && spaces[1][1] != ' ' && spaces[2][1] == ' ' && spaces[1][2] == ' ' && spaces[1][0] == ' ' && spaces[0][1] == ' ')
        {
            if (spaces[1][1] == 'O')
                spaces[1][2] = 'O';
            else if (spaces[0][2] == 'O' || spaces[2][0] == 'O')
                spaces[2][2] = 'O';
            else if (spaces[0][0] == 'O' || spaces[2][2] == 'O')
                spaces[0][2] = 'O';
            return;
        }
        for (int i = 0; i < 3; i++)
        {
            if (spaces[i][0] == 'O' && spaces[i][0] == spaces[i][1] && spaces[i][2] == ' ')
            {
                spaces[i][2] = 'O';
                return;
            }
            if (spaces[i][0] == 'O' && spaces[i][0] == spaces[i][2] && spaces[i][1] == ' ')
            {
                spaces[i][1] = 'O';
                return;
            }
            if (spaces[i][1] == 'O' && spaces[i][1] == spaces[i][2] && spaces[i][0] == ' ')
            {
                spaces[i][0] = 'O';
                return;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            if (spaces[0][i] == 'O' && spaces[0][i] == spaces[1][i] && spaces[2][i] == ' ')
            {
                spaces[2][i] = 'O';
                return;
            }
            if (spaces[0][i] == 'O' && spaces[0][i] == spaces[2][i] && spaces[1][i] == ' ')
            {
                spaces[1][i] = 'O';
                return;
            }
            if (spaces[1][i] == 'O' && spaces[1][i] == spaces[2][i] && spaces[0][i] == ' ')
            {
                spaces[0][i] = 'O';
                return;
            }
        }
        if (spaces[0][0] == 'O' && spaces[0][0] == spaces[1][1] && spaces[2][2] == ' ')
        {
            spaces[2][2] = 'O';
            return;
        }
        if (spaces[0][0] == 'O' && spaces[0][0] == spaces[2][2] && spaces[1][1] == ' ')
        {
            spaces[1][1] = 'O';
            return;
        }
        if (spaces[1][1] == 'O' && spaces[1][1] == spaces[2][2] && spaces[0][0] == ' ')
        {
            spaces[0][0] = 'O';
            return;
        }
        if (spaces[0][2] == 'O' && spaces[0][2] == spaces[1][1] && spaces[2][0] == ' ')
        {
            spaces[2][0] = 'O';
            return;
        }
        if (spaces[0][2] == 'O' && spaces[0][2] == spaces[2][0] && spaces[1][1] == ' ')
        {
            spaces[1][1] = 'O';
            return;
        }
        if (spaces[1][1] == 'O' && spaces[1][1] == spaces[2][0] && spaces[0][2] == ' ')
        {
            spaces[0][2] = 'O';
            return;
        }
    }
    if (choice == 2 || choice == 3 || choice == 4)
    {
        for (int i = 0; i < 3; i++)
        {
            if (spaces[i][0] == 'X' && spaces[i][0] == spaces[i][1] && spaces[i][2] == ' ')
            {
                spaces[i][2] = 'O';
                return;
            }
            if (spaces[i][0] == 'X' && spaces[i][0] == spaces[i][2] && spaces[i][1] == ' ')
            {
                spaces[i][1] = 'O';
                return;
            }
            if (spaces[i][1] == 'X' && spaces[i][1] == spaces[i][2] && spaces[i][0] == ' ')
            {
                spaces[i][0] = 'O';
                return;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            if (spaces[0][i] == 'X' && spaces[0][i] == spaces[1][i] && spaces[2][i] == ' ')
            {
                spaces[2][i] = 'O';
                return;
            }
            if (spaces[0][i] == 'X' && spaces[0][i] == spaces[2][i] && spaces[1][i] == ' ')
            {
                spaces[1][i] = 'O';
                return;
            }
            if (spaces[1][i] == 'X' && spaces[1][i] == spaces[2][i] && spaces[0][i] == ' ')
            {
                spaces[0][i] = 'O';
                return;
            }
        }
        if (spaces[0][0] == 'X' && spaces[0][0] == spaces[1][1] && spaces[2][2] == ' ')
        {
            spaces[2][2] = 'O';
            return;
        }
        if (spaces[0][0] == 'X' && spaces[0][0] == spaces[2][2] && spaces[1][1] == ' ')
        {
            spaces[1][1] = 'O';
            return;
        }
        if (spaces[1][1] == 'X' && spaces[1][1] == spaces[2][2] && spaces[0][0] == ' ')
        {
            spaces[0][0] = 'O';
            return;
        }
        if (spaces[0][2] == 'X' && spaces[0][2] == spaces[1][1] && spaces[2][0] == ' ')
        {
            spaces[2][0] = 'O';
            return;
        }
        if (spaces[0][2] == 'X' && spaces[0][2] == spaces[2][0] && spaces[1][1] == ' ')
        {
            spaces[1][1] = 'O';
            return;
        }
        if (spaces[1][1] == 'X' && spaces[1][1] == spaces[2][0] && spaces[0][2] == ' ')
        {
            spaces[0][2] = 'O';
            return;
        }
    }
    do
    {
        x = rand() % 3;
        y = rand() % 3;
        if (spaces[x][y] != 'X' && spaces[x][y] != 'O')
        {
            spaces[x][y] = 'O';
            check = 1;
        }
    } while (check != 1);
}
void check_winner(char spaces[3][3], bool *result)
{
    for (int i = 0; i < 3; i++)
    {
        if (spaces[i][0] != ' ' && spaces[i][0] == spaces[i][1] && spaces[i][0] == spaces[i][2])
        {
            if (spaces[i][0] == 'X')
                cout << "\n        ******** You Won! ********";
            else
                cout << "\n        ******** Computer Won! ********";
            *result = true;
            return;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (spaces[0][i] != ' ' && spaces[0][i] == spaces[1][i] && spaces[0][i] == spaces[2][i])
        {
            if (spaces[0][i] == 'X')
                cout << "\n        ******** You Won! ********";
            else
                cout << "\n        ******** Computer Won! ********";
            *result = true;
            return;
        }
    }
    if (spaces[0][0] != ' ' && spaces[0][0] == spaces[1][1] && spaces[0][0] == spaces[2][2])
    {
        if (spaces[0][0] == 'X')
            cout << "\n        ******** You Won! ********";
        else
            cout << "\n        ******** Computer Won! ********";
        *result = true;
        return;
    }
    if (spaces[0][2] != ' ' && spaces[0][2] == spaces[1][1] && spaces[0][2] == spaces[2][0])
    {
        if (spaces[0][2] == 'X')
            cout << "\n        ******** You Won! ********";
        else
            cout << "\n        ******** Computer Won! ********";
        *result = true;
        return;
    }
    if (spaces[0][0] != ' ' && spaces[0][1] != ' ' && spaces[0][2] != ' ' && spaces[1][0] != ' ' && spaces[1][1] != ' ' && spaces[1][2] != ' ' && spaces[2][0] != ' ' && spaces[2][1] != ' ' && spaces[2][2] != ' ')
    {
        cout << "\n        ******** It's tie! ********";
        *result = true;
        return;
    }
}
int main()
{
    int choice;
    bool result = false, middle;
    char ch;
    srand(time(0));
    // char spaces[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    cout << "         ************ TICK TACK GAME ************\n";
    cout << "\n1 -> Easy mode";
    cout << "\n2 -> Medium mode";
    cout << "\n3 -> Hard mode";
    cout << "\n4 -> Extremely Hard mode";
    do
    {
        cout << "\nYour choice:";
        cin >> choice;
        if (choice < 1 || choice > 4)
            cout << "\nChose Valid option:";
    } while (choice < 1 || choice > 4);
    cout << "\nYour sign is X";
    cout << "\nComputer sign is O";
    do
    {
        char spaces[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
        result = false;
        middle = false;
        drawboard(spaces);
        while (result == false)
        {
            user_pick(spaces);
            cout << "\nBoard after your Pick";
            drawboard(spaces);
            check_winner(spaces, &result);
            if (result == false)
            {
                comp_pick(spaces, choice, middle);
                middle = true;
                cout << "\nComputer is Picking ...........";
                Sleep(2500);
                cout << "\nBoard after computer Pick";
                drawboard(spaces);
                check_winner(spaces, &result);
            }
        }
        cout << "\n"
             << "Press Enter key to exit (otherwise press any key):";
    } while ((ch = _getch()) != '\r');
    return 0;
}