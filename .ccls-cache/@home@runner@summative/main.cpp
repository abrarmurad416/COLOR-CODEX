#include <iostream>
#include <string>
#include <chrono>
#include <cstdlib>
#include <time.h>
#include <unistd.h>
#include <iomanip>
using namespace std;

class player1color{
public:

void colorset1() {
  cout << "Type the color name which doesn't correspond with the color... \n";
  cout << " \n";
  cout << "Which one is the phony? \n";
  cout << "========================= \n";
  cout << "white \n";
  cout << "\033[31m" << "red \n";
  cout << "\033[32m" << "green \n";
  cout << "\033[34m" << "yellow \n"; //fake
  cout << "\033[94m" << "brightblue";
  cout << " \n";
}

void colorset2() {
  cout << "\033[37m" << "Which one is the phony? \n";
  cout << "\033[37m" << "========================= \n";
  cout << "\033[35m" << "magenta \n";
  cout << "\033[37m" << "black \n"; //fake
  cout << "\033[33m" << "yellow \n";
  cout << "\033[91m" << "brightred \n";
  cout << "\033[93m" << "brightyellow";
  cout << " \n";
}

void colorset3 () {
  cout << "\033[37m" << "Which one is the phony? \n";
  cout << "\033[37m" << "========================= \n";
  cout << "\033[96m" << "brightcyan \n";
  cout << "\033[95m" << "brightmagenta \n";
  cout << "\033[92m" << "brightgreen \n";
  cout << "\033[30m" << "black \n";
  cout << "\033[97m" << "green \n"; //fake
  cout << " \n";

}
};

class player2color{
public:

void colorset1() {
  cout << "\033[37m" << "Which one is the phony? \n";
  cout << "\033[37m" << "========================= \n";
  cout << "\033[32m" << "green \n";
  cout << "\033[34m" << "blue \n";
  cout << "\033[36m" << "brightred \n"; //fake
  cout << "\033[31m" << "red \n"; 
  cout << "\033[97m" << "brightwhite";
  cout << " \n";
}

void colorset2() {
  cout << "\033[37m" << "Which one is the phony? \n";
  cout << "\033[37m" << "========================= \n";
  cout << "\033[95m" << "brightmagenta \n";
  cout << "\033[37m" << "white \n"; 
  cout << "\033[91m" << "brightred \n";
  cout << "\033[90m" << "brightblack \n";
  cout << "\033[93m" << "blue"; //fake
  cout << " \n";
}

void colorset3 () {
  cout << "\033[37m" << "Which one is the phony? \n";
  cout << "\033[37m" << "========================= \n";
  cout << "\033[30m" << "black \n";
  cout << "\033[32m" << "green \n";
  cout << "\033[36m" << "cyan \n";
  cout << "\033[33m" << "yellow \n";
  cout << "\033[91m" << "magenta \n"; //fake
  cout << " \n";
}
};

struct aboutpage{
string description = "Color Codex is a free game meant for everyone of all ages, but most entertaining to those 18 or under. The game associates a color with the exact word that color derives from. For example: red will be in red coloring. It's the player's job to find out which word DOES NOT associate with the color. For example: white which is in black coloring is a phony! Enjoy the game! \n";
}about;

class time1{
public:
string color1;
string color2;
string color3;

void timetracker() {
  using Clock = std::chrono::high_resolution_clock;
  auto start = Clock::now();
 
  cout << "Enter the first phony: ";
  cin >> color1;
    while(color1 != "yellow"){
    cout << "try again: ";
    cin >> color1;
  }
  
  cout << "Enter the second phony: ";
  cin >> color2;
     while(color2 != "black"){
    cout << "try again: ";
    cin >> color2;
  }

  cout << "Enter the third phony: ";
  cin >> color3;
     while(color3 != "green"){
    cout << "try again: ";
    cin >> color3;
  }
  
  auto end = Clock::now();
  auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

  std::cout << "Your input took " << ms << " milliseconds" << std::endl;
  }
};

class time2{
public:
string colora;
string colorb;
string colorc;

void timetracker1() {
  using Clock = std::chrono::high_resolution_clock;
  auto start = Clock::now();
 
  cout << "\033[37m" << "Enter the first phony: ";
  cin >> colora;
    while(colora != "brightred"){
    cout << "try again: ";
    cin >> colora;
  }
  
  cout << "Enter the second phony: ";
  cin >> colorb;
     while(colorb != "blue"){
    cout << "try again: ";
    cin >> colorb;
  }

  cout << "Enter the third phony: ";
  cin >> colorc;
     while(colorc != "magenta"){
    cout << "try again: ";
    cin >> colorc;
  }
  
  auto end = Clock::now();
  auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

  std::cout << "Your input took " << ms << " milliseconds" << std::endl;
  }
};

int main(){
int choice1;
int choice2;
string choice3;
string player1;
string player2;
int rows = 3;
int columns = 3;
  
cout << "welcome to... \n";
sleep(2);
cout << "████████████████████████████████████████████████████████████ \n";
cout << "█─▄▄▄─█─▄▄─█▄─▄███─▄▄─█▄─▄▄▀███─▄▄▄─█─▄▄─█▄─▄▄▀█▄─▄▄─█▄─▀─▄█ \n";
cout << "█─███▀█─██─██─██▀█─██─██─▄─▄███─███▀█─██─██─██─██─▄█▀██▀─▀██ \n";
cout << "▀▄▄▄▄▄▀▄▄▄▄▀▄▄▄▄▄▀▄▄▄▄▀▄▄▀▄▄▀▀▀▄▄▄▄▄▀▄▄▄▄▀▄▄▄▄▀▀▄▄▄▄▄▀▄▄█▄▄▀ \n";
      for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= columns; ++j) {
          cout << setw(15) << "*";
        }
      cout << endl;
    }     
  
cout << " \n";
cout << "press 1 to enter site: ";
cin >> choice1;

if(choice1 != 1){
  cout << "see you next time! \n";
}

while(choice1 == 1){
  cout << "welcome to COLOR CODEX \n";
  cout << "1. How do you play? \n";
  cout << "2. PLAY! \n";
  cout << "Enter number: ";
  cin >> choice2;

  while(choice2 < 1 || choice2 > 2){
    cout << "Invalid input, try again: ";
    cin >> choice2;
  }

  while(choice2 == 1){
    system("clear");
    cout << about.description;
  
  cout << "Type exit to go back to the main menu... \n";
  cout << "Enter here: ";
  cin >> choice3;

  if(choice3 == "Exit" || choice3 == "exit" || choice3 == "EXIT"){
    break;
  }

  else{
   cout << "try again: ";
   cin >> choice3;
  }
  }

  while(choice2 == 2){
    cout << "player 1 | enter username: ";
    cin >> player1;
    cout << " \n";
    cout << "player 2 | enter username: ";
    cin >> player2;
    cout << " \n";
    cout << player1 << " VS. " << player2 << " \n";
    cout << " \n";
    sleep(4);
    
    player1color a1;
    cout << " \n";
    a1.colorset1();
    cout << " \n";
    a1.colorset2();
    cout << " \n";
    a1.colorset3();

    cout << " \n";
    cout << " \n";

    class time1 player1;
    player1.timetracker();

    cout << " \n";
    cout << "Now it's player 2's turn, 4 seconds to get ready... \n";
    sleep(4);

    player2color b1;
    cout << " \n";
    b1.colorset1();
    cout << " \n";
    b1.colorset2();
    cout << " \n";
    b1.colorset3();

    cout << " \n";
    cout << " \n";

    class time2 player2;
    player2.timetracker1();

    cout << " \n";
    cout << "Whoever took the least time is the winner! Congratulations and thank you for playing. \n";
    break;

    
  }
  
}
}