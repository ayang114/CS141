# CS141-Homework-3

Austin Yang

CodeForces ID: ayang114

Coding Assignment 3 Write Up

1.

As we merge two of the smallest numbers in a list of numbers, I populated an array with all the numbers and used the sort function to sort them from least to greatest. Afterward, I have a variable named temp that would store the value of the smallest and the second smallest numbers and store it into variable temp. I then push_back the variable temp into the array and multiply the temp variable by 2 and add it to a variable named total. I then erased the smallest and second smallest integer from the array and then sort the array again. I would repeat this whole process based on the array size - 1. Iterating through the whole array will give me the total count of combining the smallest and second smallest number after each combination.

As we use the sort function, the run time complexity will be O(n log(n)).


2.

//https://www.tutorialspoint.com/cplusplus-program-to-solve-knapsack-problem-using-dynamic-programming

//https://www.google.com/search?q=youtube+knapsack+coding&ei=AHlXY4-
ZKpCLkPIPrs2U8A4&ved=0ahUKEwiPmevQ1_r6AhWQBUQIHa4mBe4Q4dUDCBA&uact=5&oq=youtube+knapsack+coding&gs_lp=Egdnd3Mtd2l6uAED-AEBMgYQABgWGB7CAgoQABhHGNYEGLADwgIFEAAYgATCAgUQIRigAcICBRAhGKsCkAYISK8LUJEEWJ8KcAF4AcgBAJABAJgBXKAB3wSqAQE34gMEIE0YAeIDBCBBGADiAwQgRhgAiAYB&sclient=gws-wiz#fpstate=ive&vld=cid:6eaae4ee,vid:xOlhR_2QCXY

//https://cplusplus.com/reference/algorithm/max/

//https://stackoverflow.com/questions/5955166/x-y-what-is-the-meaning-of-that

I have first taken in the total weight we have in addition to the total inputs that are going to be available for us to compare each other too. I then populated two arrays with the weight and value of each item and pushed the total weight we’re given, the weight of each item, the value of each item, and the number of inputs into a knapsack function.

In the knapsack function, I first created a 2d array to store the index’s position + the weight of the corresponding index. Afterward, I included a base case to ensure none of the weight is 0. If it was, there would be no reduction in the overall weight. I then compare the weight of the item in the previous index’s position and make sure that it’s less than the total weight capacity. If it is, I add the values of the pre-existing value with the index’s value and subtract the total weight from the weight of the index in order to see how much more capable weight I have remaining. If the weight of the current index is greater than the new array’s index’s weight stays the same but the index goes back by one. After iterating through all the indexes, it will return the calculated weight which is the index’s weight that wa1

The run time of this code would be O(n^2). It’s not O(n * S) where S  is how many subproblems exist. O(n^2) has a greater runtime than this runtime, thus, the runtime for this code is O(n^2).
