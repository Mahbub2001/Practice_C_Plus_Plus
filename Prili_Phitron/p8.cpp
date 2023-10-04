#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to calculate and store the sum of subsets in a vector of pairs
void generateSubsets(vector<int>& arr, int index, vector<pair<int, int>>& subsetSums, int sum1, int sum2) {
    // If we have reached the end of the array, store the sums in the vector
    if (index == arr.size()) {
        subsetSums.push_back({sum1, sum2});
        return;
    }

    // Include the current element in the first subset and recurse
    generateSubsets(arr, index + 1, subsetSums, sum1 + arr[index], sum2);

    // Include the current element in the second subset and recurse
    generateSubsets(arr, index + 1, subsetSums, sum1, sum2 + arr[index]);
}

int main() {
    

    return 0;
}
