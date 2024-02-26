// Xiomara Gamez
// CSIS 137
// Homework #1

#include <iostream>
#include <cctype>
#include "TicTacToe.hpp"

TicTacToe::TicTacToe()
{
    for(int i = 0; i < 3; i++)
    {
        for(int j= 0; j < 3; j++)
        {
            board[i][j] = 0;
        }
    }
}

void TicTacToe::gameBoard()
{
    cout << "    " << (char)board[0][0] << "  |  " << (char)board[0][1] << "  |  " << (char)board[0][2] << endl;
    cout << "  --------------" << endl;
    cout << "    " << (char)board[1][0] << "  |  " << (char)board[1][1] << "  |  " << (char)board[1][2] << endl;
    cout << "  --------------" << endl;
    cout << "    " << (char)board[2][0] << "  |  " << (char)board[2][1] << "  |  " << (char)board[2][2] << endl;
}

void TicTacToe::clearBoard()
{
    for(int i = 0; i < 3; i++)
    {
        for(int j= 0; j < 3; j++)
        {
            board[i][j] = 0;
        }
    }
}

void TicTacToe::setplayers(char marker)
{
    if(marker == 'O' || marker == 'o')
    {
        if(islower(marker))
        {
            marker = toupper(marker);
            player1 = marker;
        }
        player2 = 'X';
    }
    else if(marker == 'X' || marker == 'x')
    {
        if(islower(marker))
        {
            marker = toupper(marker);
            player1 = marker;
        }
        player2 = 'O';
    }
}
char TicTacToe::getplayer1()const
{
    return player1;
}
char TicTacToe::getplayer2()const
{
    return player2;
}

bool TicTacToe::setplayerMove(char player, int across, int down)
{
    bool validData;
    
    if(board[across][down] == 0)
    {
        board[across][down] = player;
        validData = true;
    }
    else
        validData = false;
    
    return validData;
}

bool TicTacToe::winner1()
{
    bool validData;
    
    if(board[0][0] == getplayer1() && board[0][1] == getplayer1() && board[0][2] == getplayer1())
    {
        validData = true;
    }
    else if(board[1][0] == getplayer1() && board[1][1] == getplayer1() && board[1][2] == getplayer1())
    {
        validData = true;
    }
    else if(board[2][0] == getplayer1() && board[2][1] == getplayer1() && board[2][2] == getplayer1())
    {
        validData = true;
    }
    else if(board[0][0] == getplayer1() && board[1][0] == getplayer1() && board[2][0] == getplayer1())
    {
        validData = true;
    }
    if(board[0][1] == getplayer1() && board[1][1] == getplayer1() && board[2][1] == getplayer1())
    {
        validData = true;
    }
    if(board[0][2] == getplayer1() && board[1][2] == getplayer1() && board[2][2] == getplayer1())
    {
        validData = true;
    }
    if(board[0][0] == getplayer1() && board[1][1] == getplayer1() && board[2][2] == getplayer1())
    {
        validData = true;
    }
    if(board[2][0] == getplayer1() && board[1][1] == getplayer1() && board[0][2] == getplayer1())
    {
        validData = true;
    }
    else
        validData = false;
    
    return validData;
}
bool TicTacToe::winner2()
{
    bool validData;
    
    if(board[0][0] == getplayer2() && board[0][1] == getplayer2() && board[0][2] == getplayer2())
    {
        validData = true;
    }
    else if(board[1][0] == getplayer2() && board[1][1] == getplayer2() && board[1][2] == getplayer2())
    {
        validData = true;
    }
    else if(board[2][0] == getplayer2() && board[2][1] == getplayer2() && board[2][2] == getplayer2())
    {
        validData = true;
    }
    else if(board[0][0] == getplayer2() && board[1][0] == getplayer2() && board[2][0] == getplayer2())
    {
        validData = true;
    }
    if(board[0][1] == getplayer2() && board[1][1] == getplayer2() && board[2][1] == getplayer2())
    {
        validData = true;
    }
    if(board[0][2] == getplayer2() && board[1][2] == getplayer2() && board[2][2] == getplayer2())
    {
        validData = true;
    }
    if(board[0][0] == getplayer2() && board[1][1] == getplayer2() && board[2][2] == getplayer2())
    {
        validData = true;
    }
    if(board[2][0] == getplayer2() && board[1][1] == getplayer2() && board[0][2] == getplayer2())
    {
        validData = true;
    }
    else
        validData = false;
    
    return validData;
}
