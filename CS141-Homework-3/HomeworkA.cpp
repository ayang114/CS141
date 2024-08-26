#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
  int total;
  cin >> total;

  vector<int> something;
  int inputs;
  for(int i = 0; i < total; i++){
    cin >> inputs;
    something.push_back(inputs);
  }

  sort(something.begin(), something.end());

  /*
  for(int i = 0; i < total; i++){
    cout << "Sorted: ";
    cout << endl;
    cout << something[i];
    cout << endl;
  }
  */

  int totalCandy = 0;
 // while(something.size() > 2){
  for(int i = 0; i < total - 1; i++){
    int temp;
    sort(something.begin(), something.end());
    //cout << "something1: " << something[0] << " " << "something2: " << something[1];
    //cout << endl;
    temp = something[0] + something[1];
    something.push_back(temp);
    temp = temp * 2;
    totalCandy = totalCandy + temp;


    //cout << "totalCandy: " << totalCandy;
    //cout << endl;


    something.erase(something.begin());
    something.erase(something.begin());

    //cout << "temp: " << temp;
    //cout << endl;

    temp = 0;
    
    
  }
  cout << totalCandy;
  
}
