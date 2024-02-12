#include <bits/stdc++.h>
using namespace std;

void print (int arr[], int index, int n, int sum, vector<int>&temp) {
	if (index == n) {
		cout << sum << " - ";
		cout << "{";
		for (int i = 0; i < temp.size(); i++) {
			cout << temp[i];
			if (i != temp.size() - 1) cout << ",";
		}
		cout << "}";
		cout << endl;
		return;
	}
	print(arr, index+1, n, sum, temp);
	temp.push_back(arr[index]);
	print(arr, index+1, n, sum+arr[index], temp);
	temp.pop_back();
}

int main() {
	int n=4, arr[] = {1, 2, 3, 4};
	vector<int> temp;
	print(arr, 0, n, 0, temp);
}
