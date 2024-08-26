#include <iostream>
using namespace std;

int totalCandies = 0;
int leftCandies = 0;
int rightCandies = 0;

void merge(int array[], int const left, int const mid, int const right) { 
	int const tempArrayLeftSize = mid - left + 1;
	int const tempArrayRightSize = right - mid;

	int *tempLeft = new int[tempArrayLeftSize];
  int *tempRight = new int[tempArrayRightSize];

	for (int i = 0; i < tempArrayLeftSize; i++)
		tempLeft[i] = array[left + i];
	for (int j = 0; j < tempArrayRightSize; j++)
		tempRight[j] = array[mid + 1 + j];

	int indexLeft = 0;
  int indexRight = 0;
	int indexMerged = left;
  
	while(indexLeft < tempArrayLeftSize && indexRight < tempArrayRightSize){
		if (tempLeft[indexLeft] <= tempRight[indexRight]){
      array[indexMerged] = tempLeft[indexLeft];
			indexLeft++;
		}
		else{
			array[indexMerged] = tempRight[indexRight];
			indexRight++;
		}
		indexMerged++;
	}


	while (indexRight < tempArrayRightSize){
		array[indexMerged] = tempRight[indexRight];
		indexRight++;
		indexMerged++;
	}
  
  while(indexLeft < tempArrayLeftSize){
		array[indexMerged] = tempLeft[indexLeft];
		indexLeft++;
		indexMerged++;
	}
  
  
  leftCandies = array[right] - array[left];
  totalCandies = totalCandies + leftCandies + rightCandies;

  
	delete[] tempLeft;
	delete[] tempRight;
}

void mergeSort(int array[], int const start, int const end){
	if (start >= end){
		return;
  }

	int mid = start + (end - start) / 2;
  
	mergeSort(array, start, mid);
	mergeSort(array, mid + 1, end);
	merge(array, start, mid, end);
}

/*
void printArray(int array[], int size){
	for (int i = 0; i < size; i++)
		cout << array[i] << " ";
}
*/   

int main(){
  int size;
  int input;
  cin >> size;

  
  int array[size];
  
  for(int i = 0; i < size; i++){
    cin >> input;
    array[i] = input;
  }
  
	int arraySize = sizeof(array) / sizeof(array[0]);


	mergeSort(array, 0, arraySize - 1);

  cout << totalCandies;
  
	return 0;
}
