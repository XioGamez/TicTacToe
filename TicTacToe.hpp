// Xiomara Gamez
// CSIS 137
// Homework #1

/*
 
 UML Diagram
 
 TicTacToe
 
 -player1 : char
 -player2 : char
 -board [3][3] : int
 
 +TicTacToe()
 +gameBoard() : void
 +claerBoard() : void
 +setplayer(player : char) : void
 +getplayer1() : char : const
 +getplayer2() : char ; const
 +setplayerMove(player : char, row : int, column : int) : bool
 +winner1() : bool
 +winner2() : bool
 
 */

#ifndef TicTacToe_hpp
#define TicTacToe_hpp
#include <string>
using namespace std;

class TicTacToe
{
    private:
        char player1;
        char player2;
        int board[3][3];
        
    public:
        TicTacToe();
    
        void gameBoard();
        void clearBoard();
    
        void setplayers(char);
        char getplayer1()const;
        char getplayer2()const;
    
        bool setplayerMove(char, int, int);
    
        bool winner1();
        bool winner2();
};
#endif /* TicTacToe_hpp */
