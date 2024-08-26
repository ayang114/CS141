#include <bits/stdc++.h>
#include <vector>
#include <algorithm>


using namespace std;
int editDistDP(int arr1[], int arr2[], int s1, int s2){
  int arr3[s2+1][s1+1];

  int temp1;
  int temp2;

  if(s1 == 0 && s2 == 0){
    return 0;
  }
  
  arr3[0][0] = 0;
  for(int i = 0; i < s1; i++){
    arr3[0][i + 1] = arr3[0][i] + arr1[i];
  }

  for(int j = 0; j < s2; j++){
    arr3[j + 1][0] = arr3[j][0] + arr2[j];
  }

  for (int i = 1; i <= s2; i++) {
    for (int j = 1; j <= s1; j++) {
      arr3[i][j] = min(min(arr3[i-1][j-1] + abs(arr1[j - 1] - arr2[i - 1]), arr3[i][j-1] + arr1[j-1]), arr3[i-1][j] + arr2[i-1]);
    }
  }

  /*
  for(int k = 0; k < s1; k++){
    for(int m = 0; m < s2; m++){
      min(arr3[s1][s2] = arr3[s1-1][s2-1] + abs(arr1[s2-1] - arr2[s1-1]), 
        arr3[s1][s2 - 1] + arr1[s2 - 1],
        arr3[s1 - 1][s2] + arr2[s1 - 1]);
    }
  }
  */

  //printing function
  /*for (int l = 0; l < s2 + 1; l++) {
    for (int m = 0; m < s1 + 1; m++) {
      cout << arr3[l][m] << "   ";
    }
    cout << endl;
  }*/

  //return arr3[s2 + 1][s1 + 1];
  return arr3[s2][s1];
}

int main(){
  int size1;
  int size2;
  cin >> size1;
  cin >> size2;
    
  int arr1[size1];
  int arr2[size2];
  
  int temp1;
  int temp2;
  
  for(int i = 0; i < size1; i++){
    cin >> temp1;
    arr1[i] = temp1;
  }
  for(int j = 0; j < size2; j++){
    cin >> temp2;
    arr2[j] = temp2;
  }

  // for(int i = 0; i < size1; i++){
  //   cout << arr1[i];
  //   cout << endl;
  // }
  // for(int j = 0; j < size2; j++){
  //   cout << "p: " <<  arr2[j];
  //   cout << endl;
  // }
  
  

    int temp3 = editDistDP(arr1, arr2, size1, size2);
  cout << temp3;

}
