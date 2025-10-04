#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int profit[] = {2, 5, 8,1};
    int weight[] = {10, 15, 6,9};
    int n = sizeof(profit) / sizeof(profit[0]);  // Number of items n= 3
    int i = 0;
    int capacity = 30; // Maximum weight capacity of the knapsack
    // Calculate the ratio of profit to weight for each item
    vector<pair<double, int>> ratio(n);  // Vector to store profit/weight ratio and index ex. // ratio = { (25/18, 0), (24/15, 1), (15/10, 2) }
    for (i = 0; i < n; i++) {
        ratio[i].first = (double)profit[i] / weight[i]; // profit/weight ratio 
        ratio[i].second = i; // index of the item
    }
    // Sort the items based on the profit/weight ratio in descending order
    sort(ratio.begin(), ratio.end(), [](const pair<double, int>& a, const pair<double, int>& b) {   // Lambda function to compare pairs ex. (25/18, 0) > (24/15, 1)
        return a.first > b.first; // Sort in descending order
    });
    // Initialize variables to keep track of total profit and weight
    double totalProfit = 0.0;
    int totalWeight = 0;
    // Iterate through the sorted items
    for (i = 0; i < n; i++) {
        int index = ratio[i].second; // Get the original index of the item
        if (totalWeight + weight[index] <= capacity) {
            // If adding the whole item does not exceed capacity, add it
            totalWeight += weight[index];
            totalProfit += profit[index];
        } else {
            // If adding the whole item exceeds capacity, add a fraction of it
            double fraction = (double)(capacity - totalWeight) / weight[index];
            totalProfit += profit[index] * fraction;
            totalWeight = capacity; // Knapsack is now full
            break; // No more items can be added
        }
    }
    // Output the total profit and weight
    cout << "Total Profit: " << totalProfit << endl;
    cout << "Total Weight: " << totalWeight << endl;
    return 0;
    

}