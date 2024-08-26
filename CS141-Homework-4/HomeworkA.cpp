//https://www.youtube.com/watch?v=okgM58Tv9jQ
//added on 11/29 realizing i didn't include it into my prog report or code https://www.geeksforgeeks.org/c-program-for-longest-increasing-subsequence/

#include <iostream>
#include <vector>

using namespace std;

int LDS(vector<int> const& numberVect){
  int vSize = numberVect.size();
  vector<int> something(vSize, 1);
  for (int i = 1; i < vSize; i++){
    for (int j = 0; j < i; j++){
      if (numberVect[j] > numberVect[i]){
        something[i] = max(something[i], something[j] + 1);
      }
    }
  }
  
  int answer = something[0];
  
  for(int i = 1; i < vSize; i++){
    answer = max(answer, something[i]);
  }
  return answer;
}


int main() {
  int total;
  cin >> total;

  vector<int> numbers;

  int test;
  
  for(int i = 0; i < total; i++){
    int temp;
    cin >> temp;
    numbers.push_back(temp);
  }

  
/*
  for(int i = 0; i < total; i++){
    cout << numbers[i];
    cout << endl;
  }
*/

 cout << LDS(numbers);
}
