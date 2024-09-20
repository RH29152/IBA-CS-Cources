#include <iostream>
#include<vector>
using namespace std;
int average(vector<int> nums, int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
        sum += nums[i];
    }
    return sum / (end - start + 1);
}

int scoresAverage(vector<int> nums, int length) {
    int mid = length / 2;
    int firstHalfAverage = average(nums, 0, mid - 1);
    int secondHalfAverage = average(nums, mid, length - 1);

    if (firstHalfAverage > secondHalfAverage) {
        return firstHalfAverage;
    } else {
        return secondHalfAverage;
    }
}

int main() {
    vector<int> first = {2, 2, 4, 4};
    int size1 = first.size();

    int result1 = scoresAverage(first, size1);
    std::cout << "scoresAverage({2, 2, 4, 4}) → " << result1 << std::endl;

    vector<int> second = {4, 4, 4, 2, 2, 2};
    int size2 = second.size();

    int result2 = scoresAverage(second, size2);
    std::cout << "scoresAverage({4, 4, 4, 2, 2, 2}) → " << result2 << std::endl;

    vector<int> third = {3, 4, 5, 1, 2, 3};
    int size3 = third.size();

    int result3 = scoresAverage(third, size3);
    std::cout << "scoresAverage({3, 4, 5, 1, 2, 3}) → " << result3 << std::endl;

    return 0;
}
