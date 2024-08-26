#include <iostream>

using namespace std;

int main() {
  int totalHealth;
  int teamAHealth;
  int teamBHealth;

  int numberRounds;
  int roundCounter = 1;

//Takes in Hp and assigns HP to castle
  cin >> totalHealth;
  teamAHealth = totalHealth;
  teamBHealth = totalHealth;

  cin >> numberRounds; 
  
/*
  cout << "A Health Init: " << teamAHealth;
  cout << endl;
  cout << "B Health Init: " << teamBHealth;
  cout << endl;
  
  cout << "Rounds Init: " << numberRounds;
  cout << endl;
*/
  
  //while(lightSwitchTest == true){
  while(teamAHealth != 0 || teamAHealth < 0 || teamBHealth != 0 || teamBHealth < 0){
    int teamATotal;
    int teamBTotal;
    int A;
    int B;
    int C;
    int D;

    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;
/*
    //TESING
    cout << "A: " << A;
    cout << endl;
    cout << "B: " << B;
    cout << endl;
    cout << "C: " << C;
    cout << endl;
    cout << "D: " << D;
    cout << endl;
*/
    
    teamATotal = A * B;
    teamBTotal = C * D;

/*
    //TESTING
    cout << "A damage: " << teamATotal;
    cout << endl;
    cout << "B damage: " << teamBTotal;
    cout << endl;
*/

    teamAHealth = teamAHealth - teamBTotal;
//    cout << "TeamA Health: " << teamAHealth;
//    cout << endl;
    teamBHealth = teamBHealth - teamATotal;
//    cout << "TeamB Health: " << teamBHealth;
//    cout << endl;

/*
    cout << "roundCounter: " << roundCounter;
    cout << endl;
*/
    if(teamAHealth <= 0 && teamBHealth > 0){
      cout << "Team 2 wins at round " << roundCounter << "!";
      return 0;
    }
    if(teamBHealth <= 0 && teamAHealth > 0){
      cout << "Team 1 wins at round " << roundCounter << "!";
      return 0;
    }
    if(teamAHealth <= 0 && teamBHealth <= 0){
      cout << "It's a tie at round " << roundCounter << "!";
      return 0;
    }
    roundCounter++;
    if(roundCounter > numberRounds){
      cout << "Oh no!";
      return 0;
    }
  }
}
