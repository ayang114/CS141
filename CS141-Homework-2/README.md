# CS141-Homework-2

Austin Yang

CodeForces ID: ayang114

Coding Assignment 2 Write Up

1.

https://www.geeksforgeeks.org/merge-sort/

I have first creates an array to populate with scores which is then put through a mergeSort recursive function. If the array isn’t sorted from greatest to least, the mergeSort function calls itself to divide the array in half and constantly in half until the array is in order from least to greatest. To sort, the merge function is utilized.

In the merge function, I have two temporary arrays (one for the left half and one for the right half). In each half, if the left side indexed number is less than the right, then it will “swap”. This repeats until the mergeSort function’s if(Left side of array > right side of array) comes out false, meaning that the array is sorted from least to greatest.

As merge sort divides an array in half recursively and linearly repopulates the array once the merge sort is concluded, the runtime of the code comes out to be O(n log n).


2.

I first inputted the number of inputs and populated a vector with the number of facility members. This vector was sorted with the sort algorithm in order to sort all the departments in least to greatest order. Afterwards, I created another vector and populated it with the first half of the first vector as only the first half of the total facility department are needed to be counted for. 

Afterwards, I have divided each of the facility numbers in half with a +1. This gave me the number of votes needed per department. After each index of the second vector was divided in half +1, I totaled them after each iteration of the for loop which divided the facility number in half which gave me the total number of votes needed in the half of the population of each facility in the bottom half of the department.

Each time the mergeSort function was utilized, I stored the difference between the most left and most right index of each half array by subtracting the most right (highest) with the most left (lowest) number of each array. After each recursion call, this will total up the number of “candies” from the highest to the lowest index of each half array and added up in the end.

As I utilized the sort algorithm, the runtime of this code would be O(n log n).



3. N/A

4. N/A 
