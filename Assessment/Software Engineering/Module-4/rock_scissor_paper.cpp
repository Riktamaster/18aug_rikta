//WAP to generate Rock,Scissor and Paper game

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Game{
    string playerName;
    string Computer;
    int playerScore=0;
    int computerScore=0;
    int playerChoice;

public:
	//Constructor to initialize player's game
    Game(string name){
        playerName=name;
    }
    //Function to display the game menu and get player's choice
    int displayMenu(){
        int playerChoice;
        cout<<"\nWelcome to Rock, Scissor, Paper Game";
        cout<<"\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
        cout<<"\n1. Rock";
        cout<<"\n2. Scissor";
        cout<<"\n3. Paper";
        cout<<"\nEnter your choice (1-3): ";
        cin>>playerChoice;
        return playerChoice;
    }
    //Function to generate computer's choice(1-->Rock, 2-->Scissor, 3-->Paper
    int compChoice(){
        srand(time(0));
        return (rand()%3)+1;
    }
    //Function to determine winner and calculate score
    void determineWinner(int playerChoice,int computerChoice) {
        cout<<"Computer chose: ";
        switch (computerChoice){
            case 1:
                cout<<"Rock";
                break;
            case 2:
                cout<<"Scissor";
                break;
            case 3:
                cout<<"Paper";
                break;
        }

        cout<<"\n"<<playerName<<" chose: ";
        switch (playerChoice){
            case 1:
                cout<<"Rock";
                break;
            case 2:
                cout<<"Scissor";
                break;
            case 3:
                cout<<"Paper";
                break;        
        }

        if (playerChoice==computerChoice){
            cout<<"\nIt's a draw!";
        } else if ((playerChoice==1 && computerChoice==2)||
                   (playerChoice==2 && computerChoice==3)||
                   (playerChoice==3 && computerChoice==1)){
            cout<<"\n"<<playerName<<" wins!";
            playerScore++;
        } else {
            cout<<"\nComputer wins!";
            computerScore++;
        }

        // Display score
        cout<<"\n"<<playerName<< "'s Score: "<<playerScore;
        cout<<"\nComputer's Score: "<<computerScore;
    }
};

int main(){
    string playerName;
    cout<<"Enter your Name: ";
    cin>>playerName;

    Game game(playerName);//Object created for class Game
    //Main game loop
    while (true){
        int playerChoice=game.displayMenu();
        int computerChoice=game.compChoice();
        game.determineWinner(playerChoice,computerChoice);
        
        //Get player's choice to continue the game or not
        char playAgain;
        cout<<"\nPlay again? (y/n) ";
        cin>>playAgain;
        if (playAgain!='y'&& playAgain!='Y') {
            break;
        }
    }
	return 0;
}

