# CS141-Homework-5

Austin Yang

CodeForces ID: ayang114

Coding Assignment 5 Write Up



1.

//https://www.geeksforgeeks.org/bellman-ford-algorithm-dp-23/

//https://www.programiz.com/dsa/bellman-ford-algorithm

//https://stackoverflow.com/questions/26547816/understanding-time-complexity-calculation-for-dijkstra-algorithm 

To solve this problem, I have first implemented everything and created a node struct that will carry the beginning, end, and weight of each city. Additionally, I have created a bidirectional node that will contain each end to beginning cities alongside the corresponding weights. After this, I pushed the nodes, amount of totalCities, amount of totalConnectRoads, and the start/end value to a dij function. (this function is bellman ford, I have first attempted dijkstra’s but changed to bellman ford)

In this function, I created a vector DistanceCar and populated it with 9999999 to indicate infinity. I have a nested for loop that checks whether the beginning node + the new weights that will be added onto the existing weights will be less than the lastNode which contains the smallest weight after each iteration. Before the second loop iterates, I have a boolean to help with run time in the case that the new iteration has a greater route. If so, it breaks the loop and moves onto the next iteration. If the new node + existing weight is less than the last node, then it will replace it, else, it will go onto the next beginning node and do the whole process again. After all the beginning node and the added weights are iterated, the end node will contain the smallest weight from the beginning node to the end node, giving us the answer.

In the nested for loop, there’s a 2x because the nodes are bidirectional.

The runtime of this code will be O(ElogV) where E is the number of edges and V is the number of vertices in the graph. I have used the link above to help me solve this problem to figure out the run time and I have used the slides the links above to figure out the algoirthm				

2. 

//https://www.geeksforgeeks.org/kruskals-minimum-spanning-tree-using-stl-in-c/

//https://favtutor.com/blogs/kruskal-algorithm-cpp

//https://www.softwaretestinghelp.com/graph-implementation-cpp/

//https://www.simplilearn.com/tutorials/data-structure-tutorial/kruskal-algorithm

To solve this problem, I first inputted every input and created a graph to store the starting, end, and weight that connects the two. This data was pushed back in a vector named nodes using the void Edges function and then sorted from least to greatest. Afterwards, the nodes were sent to the Kurskal function to find the weight of the tree.

In the Kruskal function, the weights of the node that was sent in and the second node were compared where if the new node weighed more than the second node, the parent node’s value of the second node will become the new node’s value and the weight is added up. This is all done by calling the merge function. This happens the same if the new node weighs less than the end node but instead the vise verse. After all the nodes are iterated by the same method, the lightest weight will be stored in the answer variable and outputted.

To check if the edge creates any cycles, I have implemented 

If a cycle isn’t created, then the two sets will be merged in the DSU alongside the weight being updated.

The runtime of this code will be O(ElogV) where E is the number of edges and V is the number of vertices in the graph. I have used the websites linked above alongside the slides of this class to help me create Kurskals.


