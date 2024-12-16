#include "5555.h"
#include"1111.h"

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <set>

using namespace std;

int main(){
cout<<"p1_             "<<endl;
cout<<"p2_             "<<endl;
cout<<"p3_             "<<endl;
cout<<"p4_             "<<endl;
cout<<"p5_             "<<endl;
cout<<"p6_             "<<endl;
cout<<"p7_             "<<endl;
cout<<"p8_             "<<endl;

int c;
cout<<" please enter the number of gumes"<<endl;
cin>>c;

if(c==1){
    cout<<"p1_             "<<endl;
    int choice;
    Player<char>* players[2];
    p1_Board<char>* B = new p1_Board<char>();
    string playerXName, player2Name;

    cout << "Welcome to probelm _1 :)\n";

    
    cout << "Enter Player X name: ";
    cin >> playerXName;
    cout << "Choose Player X type:\n";
    cout << "1. Human\n";
    cout << "2. Random Computer\n";
    cin >> choice;

    switch(choice) {
        case 1:
            players[0] = new P1_Player<char>(playerXName, 'X');
            break;
        case 2:
            players[0] = new p1_Random_Player<char>('X');
            break;
        default:
            cout << "Invalid choice for Player 1. Exiting the game.\n";
            return 1;
    }

    
    cout << "Enter Player 2 name: ";
    cin >> player2Name;
    cout << "Choose Player 2 type:\n";
    cout << "1. Human\n";
    cout << "2. Random Computer\n";
    cin >> choice;

    switch(choice) {
        case 1:
            players[1] = new P1_Player<char>(player2Name, 'O');
            break;
        case 2:
            players[1] = new p1_Random_Player<char>('O');
            break;
        default:
            cout << "Invalid choice for Player 2. Exiting the game.\n";
            return 1;
    }

    
    GameManager<char> x_o_game(B, players);
    x_o_game.run();

    
    delete B;
    for (int i = 0; i < 2; ++i) {
        delete players[i];
    }

    return 0;

}
else if (c==2)
{
    cout<<"p2_             "<<endl;

}
else if (c==3)
{
    cout<<"p3_             "<<endl;

}
else if (c==4)
{
    cout<<"p4_             "<<endl;

}
else if (c==5)
{
    cout<<"p5_             "<<endl;
     int choice;
    Player<int>* players[2];
    Board_5<int>* B = new Board_5<int>();
    string player1Name, player2Name;

    cout << "Welcome to FCAI Numerical Tic-Tac-Toe Game. :)\n";

    // Set up player 1
    cout << "Enter Player 1 name: ";
    cin >> player1Name;
    cout << "Choose Player 1 type:\n";
    cout << "1. Human\n";
    cout << "2. Random Computer\n";
    cin >> choice;

    if (choice == 1) {
        players[0] = new Player_5<int>(player1Name, player_1, 1);
    } else if (choice == 2) {
        players[0] = new RandomPlayer_5<int>(player1Name, player_1, 1);
    } else {
        cout << "Invalid choice for Player 1. Exiting the game.\n";
        return 1;
    }

    // Set up player 2
    cout << "Enter Player 2 name: ";
    cin >> player2Name;
    cout << "Choose Player 2 type:\n";
    cout << "1. Human\n";
    cout << "2. Random Computer\n";
    cin >> choice;

    if (choice == 1) {
        players[1] = new Player_5<int>(player2Name, player_2, 2);
    } else if (choice == 2) {
        players[1] = new RandomPlayer_5<int>(player2Name, player_2, 2);
    } else {
        cout << "Invalid choice for Player 2. Exiting the game.\n";
        return 1;
    }

    // Create the game manager and run the game
    GameManager<int> numerical_ttt_game(B, players);
    numerical_ttt_game.run();

    // Clean up
    delete B;
    for (int i = 0; i < 2; ++i) {
        delete players[i];
    }
return 0;

}
else if (c==6)
{
    cout<<"p6_             "<<endl;

}
else if (c==7)
{
    cout<<"p7_             "<<endl;

}
else if (c==8)
{
    cout<<"p8_             "<<endl;

}


    
        else(c == 0);{
            cout << "The program has been locked. Thank you, dear user\n\n";

        }
        return 0;
       
        
}