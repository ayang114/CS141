#include <iostream>
#include <vector>
#include <bits/stdc++.h>


using namespace std;

int main() {
  int facilityNumber;
  cin >> facilityNumber;
  int facilityNumberHalf = (facilityNumber / 2)+1;
/*
  cout  << facilityNumberHalf + 1;
  cout << endl;
*/

  
  int votes;
  vector<int> VotesVector;
  for(int i = 0; i < facilityNumber; i++){
    cin >> votes;
    VotesVector.push_back(votes);
  }
  
  sort(VotesVector.begin(), VotesVector.end());  

/*
  for(int i = 0; i < facilityNumber; i++){
    cout << "Unsorted Vector: " << VotesVector[i];
    cout << endl;
  }
*/

  vector<int> VotesVectorNeeded;
  for(int j = 0; j < facilityNumberHalf; j++){
    VotesVectorNeeded.push_back(VotesVector[j]);
  }

/*
  for(int i = 0; i < facilityNumberHalf; i++){
    cout << "Sorted Vector: " << VotesVectorNeeded[i];
    cout << endl;
  }
*/

  int totalVotes = 0;
  for(int j = 0; j < facilityNumberHalf; j++){
    int tempHalf = 0;
    tempHalf = (VotesVectorNeeded[j] / 2) + 1;
/*
    cout << "VectorNeededHALFED: " << tempHalf;
    cout << endl;
*/

    totalVotes = totalVotes + tempHalf;
/*
    cout << "Totalsagfsdiofgsf2: " << totalVotes;
    cout << endl;
*/
  }

  cout << totalVotes;

}
