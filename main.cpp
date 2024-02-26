
// Xiomara Gamez
// CSIS 137
// Homework #1

#include <iostream>
#include "TicTacToe.hpp"
using namespace std;

int main()
{
    char selection;
    char person1;
    int row;
    int column;
    int numRow;
    int numCol;
    int numMoves = 0;
    
    TicTacToe game;
    
    do
    {
        cout << "\nTicTacToe Game" << endl;
        cout << "--------------" << endl;
        cout << "P) Play Game" << endl;
        cout << "Q) Exit Game" << endl;
        cin >> selection;
            
            if(selection == 'P' || selection == 'p')
            {
                cout << "\nPlayer 1 choose X or O" << endl;
                cin >> person1;
                
                while(person1 != 'x' && person1 != 'o')
                {
                    cout << "Invalid input. Try again." << endl;
                    cout << "Player choose X or O" << endl;
                    cin >> person1;
                }
                game.setplayers(person1);
                
                cout << "\nPlayer 1 is " << game.getplayer1() << endl;
                cout << "Player 2 is " << game.getplayer2() << "\n" << endl;

                game.gameBoard();
                
                do
                {
                    if(!game.winner1())
                    {
                        cout << "\nPlayer 1: " << endl;
                        cout << "Enter row number: " << endl;
                        cin >> row;
                        
                        cout << "Enter the column: " << endl;
                        cin >> column;
                        
                        while(!game.setplayerMove(game.getplayer1(), row - 1, column - 1))
                        {
                            game.gameBoard();
                            
                            cout << "Space is taken. Try again.\n" << endl;
                            cout << "Player 1: " << endl;
                            cout << "Enter row number: " << endl;
                            cin >> row;
                            
                            cout << "Enter the column: " << endl;
                            cin >> column;
                        }
                        game.setplayerMove(game.getplayer1(), row - 1, column - 1);
                        game.gameBoard();
                        
                        numMoves += 1;
                        cout << numMoves << endl;
                    }
                    
                    if(!game.winner2() && numMoves < 9)
                    {
                        cout << "Player 2: " << endl;
                        cout << "Enter row number: " << endl;
                        cin >> numRow;
                        
                        cout << "Enter the column: " << endl;
                        cin >> numCol;
                        
                        while(!game.setplayerMove(game.getplayer2(), numRow - 1, numCol - 1))
                        {
                            game.gameBoard();
                            
                            cout << "\nSpace is taken. Try again." << endl;
                            cout << "Player 2: " << endl;
                            cout << "Enter row number: " << endl;
                            cin >> numRow;
                            
                            cout << "Enter the column: " << endl;
                            cin >> numCol;
                        }
                        game.setplayerMove(game.getplayer2(), numRow - 1, numCol - 1);
                        game.gameBoard();
                        
                        numMoves += 1;
                        cout << numMoves << endl;
                    }
                    
                    if(game.winner1())
                    {
                        cout << "Player 1: YOU WON." << endl;
                    }
                    else if(game.winner2())
                    {
                        cout << "Player 2: YOU WON" << endl;
                    }
                    else if (numMoves == 9)
                    {
                        cout << "Tie" << endl;
                    }
                       
                }while(!game.winner1() && !game.winner2() && numMoves < 9);
                
        }
        else if(selection == 'Q' || selection == 'q')
        {
            cout << "You quit the program." << endl;
        }
        else
            cout << "Invalid selection. Try again" << endl;
        
        game.clearBoard();
        numMoves = 0;
    }while(selection != 'Q' || selection != 'q');
}
