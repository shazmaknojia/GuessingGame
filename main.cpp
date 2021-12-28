#include <iostream>
#include <math.h>

using namespace std;



int main(){
    int Guesses, Value;
    int n=0;
    int tries = 5;
    bool found = false; 
    string response;
    //first ask if they want to play
    cout << "Do You want to play(y/n): ";
    cin >> response;
    if(response == "n"){
        cout << "Thank32s for playing!!" << endl;
        return 0;
    }
    //then set a random number between 1-100
    Value = rand() % 100 + 1;
    //run a while loop until get it right or run out of tries.
    cout << "I have set a number between 1-100, you have 5 tries to guess it. ";
    do{
        cout << "Guess: ";
        cin >> Guesses;
        if(Value == Guesses){
            cout << "You guessed Right!!" << endl;
            cout << "You win!!" << endl;
            found = true;
        }
        else if(Guesses > Value){
            n++;
            cout << "Your guess was bigger then the number." <<endl;
            cout << "You have " << tries - n << " chances left" << endl;
            found = false;
        }
        else{
            n++;
            cout << "Your guess was smaller then the number." <<endl;
            cout << "You have " << tries - n << " chances left" << endl;
            found = false;
        }  

    }while(found == false && tries != n);
    if(found == false){
        cout << "better luck next time."<< endl; 
    }
    
    cout << "Thanks for playing!!" << endl;
    return 0;
}