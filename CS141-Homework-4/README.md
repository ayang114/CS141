# CS141-Homework-4

Austin Yang

CodeForces ID: ayang114

Coding Assignment 4 Write Up


1.

To do this, I first coded up LIS instead, then changed the condition where instead if the current number is less than the next number, it’ll see if the current number is greater than the following number as the programming assignment asks for Longest decreasing subsequence.

I first populated a vector with the numbers given and passed it to a function called “LDS” that takes in the populated vector. In the function, there is another vector (something) with the same size as the initial vector filled with the value “1” It is populated with 1 because when keeping track of the LDS, the minimum LDS will always be 1. This vector will keep track of when the condition (current > next) is true to indicate that a decreasing subsequence is occurring. Two for loops are utilized to traverse and compare the number of populated vectors via the variables “i” and “j”. If j (current is > than the next index), then the something will compare the current index of something and the index after the current index. If the current index is greater than the next index, the index will stay the same and vice versa. Afterwards, the function will compare index 0 of vector something and the end index of vector something and whichever is greater is returned as that indicates the greatest LDS.

The runtime of this code will be O(n^2) as there are two for loops in order to traverse through the vectors.


2.

I have first taken two integers which are the sizes of arrays temp1 and temp2. I then populated temp1 and temp2 with integers that are given and passed the two arrays and the sizes of the corresponding arrays into a function “editDistDP”.

In the function, a 2d array (arr3) is created to populate the weight. I have the first condition where if the row and column are 0, then the output will simply be 0 as the arrays are empty. 

In order to find the minimum weight when matching temp1 to temp2, I have utilized replacement, insertion, and deletion ( (arr3[i-1][j-1] + abs(arr1[j - 1] - arr2[i - 1]), arr3[i][j-1] + arr1[j-1]), arr3[i-1][j] + arr2[i-1]) )respectively. This was used within a nested for loop from arr3[1][1] (beginning of the first iteration) to the end arr3[s1][s2] where s1 is the size of the first array temp1 or arr1 and s2 is the size of the second array temp2 or arr2. After all the for loop is iterated, the result will give the minimum weight of transforming the first array to the second array.

The runtime of this code is O(n^2 +kn) where k is the length of the string and n^2 is the nested for loop. O(n^2 +kn) becomes a runtime of O(n^2).
