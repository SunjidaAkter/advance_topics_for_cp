#include<bits/stdc++.h>
using namespace std;

bool canFillContainers(const vector<int>& capacities, int m, int maxCapacity) {
    int containers = 1;
    int currentCapacity = 0;

    for (int i = 0; i < capacities.size(); i++) {
        if (currentCapacity + capacities[i] > maxCapacity) {
            containers++;
            currentCapacity = 0;
        }

        if (containers > m) {
            return false;
        }

        currentCapacity += capacities[i];
    }

    return true;
}

int findMinimalMaxCapacity(const vector<int>& capacities, int m) {
    int left = *max_element(capacities.begin(), capacities.end());
    int right = accumulate(capacities.begin(), capacities.end(), 0);
    int result = INT_MAX;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (canFillContainers(capacities, m, mid)) {
            result = min(result, mid);
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return result;
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        vector<int> capacities(n);
        for (int i = 0; i < n; i++) {
            cin >> capacities[i];
        }

        int minimalMaxCapacity = findMinimalMaxCapacity(capacities, m);
        cout << minimalMaxCapacity << endl;
    }

    return 0;
}
