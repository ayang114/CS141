#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  int importAmount;
  cin >> importAmount;

  string name;
  string house;
  
  vector<string> Gryffindor;
  vector<string> Hufflepuff;
  vector<string> Ravenclaw;
  vector<string> Slytherin;

  for(int i = 1; i <= importAmount; i++){
    cin >> name;
    cin >> house;
    if(house == "Gryffindor"){
      Gryffindor.push_back(name);
    }
    else if(house == "Hufflepuff"){
      Hufflepuff.push_back(name);
      }
    else if(house == "Ravenclaw"){
      Ravenclaw.push_back(name);
    }
    else if(house == "Slytherin"){
      Slytherin.push_back(name);
    }
  }
  
  sort(Gryffindor.begin(), Gryffindor.end());
  sort(Hufflepuff.begin(), Hufflepuff.end());
  sort(Ravenclaw.begin(), Ravenclaw.end());
  sort(Slytherin.begin(), Slytherin.end());

  
  int gEnd = Gryffindor.size();
  int hEnd = Hufflepuff.size();
  int rEnd = Ravenclaw.size();
  int sEnd = Slytherin.size();
  
  cout << "Gryffindor";
  cout << endl;
  for(int i = 0; i < gEnd; i++){
    cout << Gryffindor[i] << endl;;
  }
  cout << "Hufflepuff";
  cout << endl;
  for(int i = 0; i < hEnd; i++){
    cout << Hufflepuff[i] << "\n";
  }
  cout << "Ravenclaw";
  cout << endl;
  for(int i = 0; i < rEnd; i++){
    cout << Ravenclaw.at(i) << "\n";
    //cout << endl;
  }
  cout << "Slytherin";
  cout << endl;
  for(int i = 0; i < sEnd; i++){
    cout << Slytherin.at(i) << "\n";
    //cout << endl;
  }
  

}
