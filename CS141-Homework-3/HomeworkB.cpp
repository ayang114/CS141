//https://www.tutorialspoint.com/cplusplus-program-to-solve-knapsack-problem-using-dynamic-programming
//https://www.google.com/search?q=youtube+knapsack+coding&ei=AHlXY4-ZKpCLkPIPrs2U8A4&ved=0ahUKEwiPmevQ1_r6AhWQBUQIHa4mBe4Q4dUDCBA&uact=5&oq=youtube+knapsack+coding&gs_lp=Egdnd3Mtd2l6uAED-AEBMgYQABgWGB7CAgoQABhHGNYEGLADwgIFEAAYgATCAgUQIRigAcICBRAhGKsCkAYISK8LUJEEWJ8KcAF4AcgBAJABAJgBXKAB3wSqAQE34gMEIE0YAeIDBCBBGADiAwQgRhgAiAYB&sclient=gws-wiz#fpstate=ive&vld=cid:6eaae4ee,vid:xOlhR_2QCXY

#include <iostream>

using namespace std;

//https://cplusplus.com/reference/algorithm/max/
int max(int a, int b){
  //saying if x is greater than y, use x then use y
  //https://stackoverflow.com/questions/5955166/x-y-what-is-the-meaning-of-that
  return (a > b) ? a : b;
}

int knapsack(int weight, int weightV[], int valueV[], int numberOfLines){
  int i;
  int itemWeight;
  int something[numberOfLines + 1][weight + 1];
  for (int i = 0; i <= numberOfLines; i++){
    for (itemWeight = 0; itemWeight <= weight; itemWeight++){
      //Base Case
      if (i == 0 || itemWeight == 0){
        something[i][itemWeight] = 0;
      }
        //if the current weight is greater than the total weight
      else if (weightV[i - 1] >= itemWeight){
        something[i][itemWeight] = something[i - 1][itemWeight];
      }
      else if (weightV[i - 1] <= itemWeight){
        something[i][itemWeight] = max(valueV[i - 1] + something[i - 1][itemWeight - weightV[i - 1]], something[i - 1][itemWeight]);
      }
    }
  }
   return something[numberOfLines][weight];
}

int main(){
  
  int weight;
  int numberOfLines;
  cin >> weight;
  cin >> numberOfLines;

  
  int weightV[numberOfLines];
  int valueV[numberOfLines];
  for (int i = 0; i < numberOfLines; i++) {
   
    cin >> weightV[i];
    cin >> valueV[i];
  }
  
  cout << knapsack(weight, weightV, valueV, numberOfLines);
  
}
