#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

vector<int> static twoSum(const vector<int>& nums, int target) {
	unordered_map<int, int> num_map;
	for (int i = 0; i < nums.size(); i++) {
		int complement = target - nums[i];
		if (num_map.count(complement)) {
			return { num_map[complement], i };
		}
		num_map[nums[i]] = i;
	}
	return {};
}

int main() {
	int n;
	cout << "enter how length of vector" << endl;
	cin >> n;
	cout << "enter the elements: \n";
	vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	int target;
	cout << "enter target num" << endl;
	cin >> target;

	vector<int> result = twoSum(nums, target);
	if (!result.empty()) {
		cout << result[0] << ", " << result[1] << endl;
	}
	else {
		cout << "No solutions found!" << endl;
	}
	return 0;
}



