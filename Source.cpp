#include <iostream>
#include <vector>

using namespace std;

int findMissingNumber(vector<int>& nums) {
    int n = nums.size();
    int total = (n + 1) * (n + 2) / 2; // Sum of first n+1 natural numbers

    for (int i = 0; i < n; i++) {
        total -= nums[i];
    }

    return total;
}

int main() {
    vector<int> nums = { 1, 2, 4, 5, 6 }; // مثال على مصفوفة بها رقم مفقود
    int missingNumber = findMissingNumber(nums);

    cout << "The missing number is: " << missingNumber << endl;

    return 0;
}
