#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int wins = 0, loss = 0, draws = 0, rounds = 0;
    char choice;
    string name;
     cout <<"=================================================Rock Paper Scissors====================================================\n";
    cout <<"======================================================By Elisha=========================================================\n";
    cout <<"Enter your name: ";
    getline(cin, name);
    srand(time(0));
    do {
            rounds ++;
        cout <<"\n=================Round "<< rounds <<"================="<<endl;
        cout <<"Current Score \n";
        cout <<"Wins: " << wins << endl;
        cout <<"Draws: "<< draws <<endl;
        cout <<"Losses: "<<loss <<endl;
    int user, computer;
    computer = rand() % 3 + 1;
    cout <<"\n 1.  Rock";
    cout <<"\n 2.  Paper";
    cout <<"\n 3.  Scissors" << endl;
    cout <<"Pick a number to represent what you want: ";
    cin >> user;
    switch (user)
    {
    case 1:
        cout <<"You chose Rock \n";
        break;
    case 2:
        cout <<"You chose Paper \n";
        break;
    case 3:
        cout <<"You chose Scissors \n";
        break;
    default:
        cout <<"\n Invalid Choice \n";
    }
    switch (computer)
    {
    case 1:
        cout <<"The computer chose Rock \n";
        break;
    case 2:
        cout <<"The computer chose Paper \n";
        break;
    case 3:
        cout <<"The computer chose Scissors \n";

    }
    if (user < 1 || user > 3){
        cout <<"You forfeited " << endl;
        cout <<"The computer wins \n";
        loss ++;
    }else {
        if (user == computer){
            cout <<"draw \n";
            draws ++;
        }
        else if (user == 1 && computer == 3){
            cout <<name <<" wins \n";
            wins ++;
        }
        else if (user == 2 && computer == 1){
            cout <<name <<" wins \n";
            wins ++;
        }
        else if(user == 3 && computer == 2){
            cout <<name <<" wins \n";
            wins ++;
        }
        else{
            cout <<"The computer wins \n";
            loss ++;
        }
    }
    cout <<"\n Do you wish to repeat (Y / N): ";
    cin >> choice;
    }while (choice == 'Y' || choice == 'y');
    cout <<endl;
    cout <<"\n===================================================================================================================="<< endl;
    cout <<"\n                                                    TOURNAMENT OVER                                                      "<<endl;
    cout <<"===================================================================================================================="<< endl;
    cout <<"Player: "<<name << endl;
    cout <<"Rounds played: "<<rounds << endl;
    cout <<" | Wins: " <<wins <<endl
         <<" | Draws: " <<draws << endl
         <<" | Losses: "<<loss << endl;
    if (wins > loss){
        cout <<"\n Overall Winner: "<<name<<endl;
    }
    else if (loss > wins){
        cout <<"\n Overall Winner: Computer" <<endl;
    }
    else {
        cout <<"\n Overall Result: Draw "<<endl;
    }
    return 0;
}
