#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

const int INF = 1e9;

// calculates the distance between two cities
double distance(pair<int, int> p1, pair<int, int> p2) {
    int x1 = p1.first, y1 = p1.second, x2 = p2.first, y2 = p2.second;
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

// calculates the total distance of a given tour
double tourDistance(vector<int>& tour, vector<pair<int, int>>& cities) {
    double dist = 0;
    for (int i = 0; i < tour.size() - 1; i++) {
        dist += distance(cities[tour[i]], cities[tour[i + 1]]);
    }
    dist += distance(cities[tour[tour.size() - 1]], cities[tour[0]]);
    return dist;
}

// generates all possible permutations of a given vector
vector<vector<int>> permutations(vector<int>& v) {
    vector<vector<int>> perms;
    sort(v.begin(), v.end());
    do {
        perms.push_back(v);
    } while (next_permutation(v.begin(), v.end()));
    return perms;
}

// solves the TSP using the Brute Force algorithm
vector<int> solveTSP(vector<pair<int, int>>& cities) {
    int N = cities.size();
    vector<int> tour(N);
    for (int i = 0; i < N; i++) {
        tour[i] = i;
    }
    double minDist = INF;
    vector<int> bestTour;
    vector<vector<int>> perms = permutations(tour);
    for (int i = 0; i < perms.size(); i++) {
        double dist = tourDistance(perms[i], cities);
        if (dist < minDist) {
            minDist = dist;
            bestTour = perms[i];
        }
    }
    return bestTour;
}

int main() {
    int N;
    cout << "Enter the number of cities: ";
    cin >> N;
    vector<pair<int, int>> cities(N);
    cout << "Enter the coordinates of the cities:" << endl;
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        cities[i] = make_pair(x, y);
    }
    vector<int> tour = solveTSP(cities);
    double dist = tourDistance(tour, cities);
    cout << "The shortest tour is: ";
    for (int i = 0; i < tour.size(); i++) {
        cout << tour[i] << " ";
    }
    cout << endl << "The total distance is: " << dist << endl;
    return 0;
}
