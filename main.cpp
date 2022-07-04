#include <iostream>
#include <string>
#include <stdlib.h> /* srand, rand */
#include <time.h> /* time */


using namespace std;

string drawCards(int drawNumCards){
  // create two vectors, one with suits and the other with numbers, randomly pick two values then format the cards. 
  string cards;
  int secretNum, guess;

/* initialize random seed: */
  srand (time(NULL));

/* generate secret number between 1 and 10: */
  secretNum = rand() % 10 + 1;

  
  return cards;
}

int cardCount(string cards){
  // 3c-Ac
  int count = 0;
  int numAces = 0;
  char FaceCards[4] = {'K', 'Q', 'J', 'A'};
  for(int i = 0; i < 4 ; i++){
    for(int x = 0; x < cards.length(); x++){
      if(cards[x] == FaceCards[i]){
        if(cards[x] == 'A'){
          count += 1;
          numAces++;
        }
        else;
          count += 10;
      }
      else if(isdigit(cards[x])){
        count += stoi(cards[x]);
      }
    }
  }
  if(numAces >= 1 && count + 10 < 21){
      count += 10;
      numAces--;
    }
  return count;
}
bool draw(){
  cout << "Would you like to draw another card?" << endl << "Y/N" << endl;
  char answer;
  cin >> answer;
  if(answer == 'Y')
    return true;
  
  else
    return false;  
  }

string drawACard(bool answer){
  if(answer){
    string newCardValue[14] = {"1","2","3","4","5","6","7","8","9","10","J","Q","K","A"};
    //Import random and choose a position
  }
  else
    return "";
}
int main() {
  cout << "The name of the game is Black Jack, the aim of the game is to get as close to 21 without going over." << endl;
  
}