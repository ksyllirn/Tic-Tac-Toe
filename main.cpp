#include <iostream>

using namespace std;

char square[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int check_win()
{
    if(square[1] == square[2] && square[2] == square[3])
    {
        return 1;
    }
    else if(square[4] == square[5] && square[5] == square[6])
    {
        return 1;
    }
    else if(square[7] == square[8] && square[8] == square[9])
    {
        return 1;
    }
    else if(square[1] == square[5] && square[5] == square[9])
    {
        return 1;
    }
    else if(square[3] == square[5] && square[5] == square[7])
    {
        return 1;
    }
    else if(square[1] == square[4] && square[4] == square[7])
    {
        return 1;
    }
    else if(square[2] == square[5] && square[5] == square[8])
    {
        return 1;
    }
    else if(square[3] == square[6] && square[6] == square[9])
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

void board()
{
    system('cls');
    cout << "\n\n TICTACTOE \n\n";

    cout<< "plyer 1 - x     player 2 - o" << endl;
    
    cout << "   |   |   " << endl;

}

int main()
{

}
