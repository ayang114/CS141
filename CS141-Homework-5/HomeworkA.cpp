#include <iostream>
#include <vector>

using namespace std;

struct Node {
  int start;
  int end;
  int weight;
};

int dij(vector<Node> nodes, int totalCities, int totalConnectRoad, int start,
        int end) {

  vector<int> DistanceCar(totalCities);

  for (int i = 0; i < totalCities; i++) {
    DistanceCar.at(i) = 999999999; // We're replciatiing infintite
  }

  DistanceCar.at(start) = 0;

  for (int k = 1; k < totalCities - 1; k++) {

    // bool doneCase = false;

    for (int j = 0; j < totalConnectRoad; j++) {
      int begNode = nodes.at(j).start;
      int lastNode = nodes.at(j).end;
      int newWeight = nodes.at(j).weight;

      if (DistanceCar.at(begNode) + newWeight < DistanceCar.at(lastNode)) {
        // doneCase = true;
        DistanceCar.at(lastNode) = DistanceCar.at(begNode) + newWeight;
      }
    }

    // if(!doneCase){
    // break;
    //}
  }

  return DistanceCar.at(end);
}

int main() {
  int totalCities;
  int totalConnectRoad;
  int start;
  int end;
  int startCityInput;
  int endCityInput;
  int CityWeight;

  cin >> totalCities;
  cin >> totalConnectRoad;
  cin >> start;
  cin >> end;

  vector<Node> nodes(totalConnectRoad);

  for (int i = 0; i < totalConnectRoad; ++i) {
    cin >> startCityInput;
    cin >> endCityInput;
    cin >> CityWeight;

    Node connectRoad = {startCityInput, endCityInput, CityWeight};
    nodes[i] = connectRoad;
  }

  for (int i = 0; i < totalConnectRoad; ++i) {
    Node bidrection = {nodes.at(i).end, nodes.at(i).start, nodes.at(i).weight};
    nodes.push_back(bidrection);
  }

  int answer = dij(nodes, totalCities, totalConnectRoad, start, end);

  cout << answer;
}
