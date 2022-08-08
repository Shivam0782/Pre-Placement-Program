
#include <bits/stdc++.h>
using namespace std;

// function to print the k numbers with most occurrences
void print_N_mostFrequentNumber(int arr[], int n, int k)
{
	// unordered_map 'um' implemented as frequency
	// hash table
	unordered_map<int, int> um;
	for (int i = 0; i < n; i++)
		um[arr[i]]++;

	// Use frequencies as indexes and put
	// elements with given frequency in a
	// vector (related to a frequency)
	vector<int> freq[n + 1];
	for (auto x : um)
		freq[x.second].push_back(x.first);

	// Initialize count of items printed
	int count = 0;

	// Traverse the frequency array from
	// right side as we need the most
	// frequent items.
	for (int i = n; i >= 0; i--) {

		// Print items of current frequency
		for (int x : freq[i]) {
			cout << x << " ";
			count++;
			if (count == k)
				return;
		}
	}
}

// Driver program to test above
int main()
{
	int arr[] = { 3, 1, 4, 4, 5, 2, 6, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 2;
	print_N_mostFrequentNumber(arr, n, k);
	return 0;
}
