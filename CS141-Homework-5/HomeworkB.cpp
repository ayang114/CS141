//https://www.geeksforgeeks.org/kruskals-minimum-spanning-tree-using-stl-in-c/
//https://favtutor.com/blogs/kruskal-algorithm-cpp
//https://www.geeksforgeeks.org/kruskals-minimum-spanning-tree-algorithm-greedy-algo-2/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class DSU {
    int* parent;
    int* weight;

public:
    DSU(int k){
        parent = new int[k];
        weight = new int[k];

        for (int i = 0; i < k; i++){
            parent[i] = i;
            weight[i] = 0;
        }
    }

    int find(int i){
        if (parent[i] == i){
            return i;
        }
        return parent[i] = find(parent[i]);
    }

    void merge(int x, int y){
        int a = find(x);
        int b = find(y);

        if(a != b){
          if (weight[a] > weight[b]){
            parent[b] = a;
            weight[a] = weight[a] + weight[b];
          }
          else{
            parent[a] = b;
            weight[b] = weight[b] + weight[a];
          }
          if(weight[a] == weight[b]){
            weight[b]++;
          }
        }
    }
};

class Graph {
    vector<vector<int> > nodes;
    int n;

public:
//https://www.softwaretestinghelp.com/graph-implementation-cpp/
//https://www.simplilearn.com/tutorials/data-structure-tutorial/kruskal-algorithm
    Graph(int n){this->n = n;}

    void Edges(int start, int end, int w){
        nodes.push_back({w, start, end});
    }

    void kruskals(){
    sort(nodes.begin(), nodes.end());
      
      DSU s(n);
      int answer = 0;

      //for (it=edges.begin(); it!=edges.end(); it++) from geekforgeek
      for(auto edge : nodes){
        int w = edge[0];
        int start = edge[1];
        int end = edge[2];

        if (s.find(start) != s.find(end)){
          s.merge(start, end);
          answer = answer + w;
        }
    }

    cout << answer;
    }
};

int main(){
  int n;
  int m;
  int i1;
  int i2;
  int i3;

  cin >> n;
  cin >> m;

  Graph graph(n);

  for(int i = 0; i < m; i++){
    cin >> i1;
    cin >> i2;
    cin >> i3;
    graph.Edges(i1, i2, i3);
  }
  
  graph.kruskals();
}
