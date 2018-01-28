#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> find4IntsThatSumToTarget(vector<int> nums, int target){
	vector<int> solution;
	int len = nums.size() -1;
	sort(nums.begin(), nums.end());
	for(int i = 0; i < len; i++){
		int st1 = i + 1, st2 = i + 2, end = len;
		while(st1 < end && st2 < end){
			int sum = nums[st1] + nums[st2] + nums[end];
			if(sum == target - nums[i]){
				solution.insert(solution.end(), {nums[i], nums[st1], nums[st2], nums[end]});
				break;
			}
			else if(sum < target - nums[i]){
				st1++;
				st2++;
			}else {
				end--;
			}
		} 
	}
	return solution;
}

int main(int argc, char** argv){
	using inputVector = vector<int>;
	initializer_list<int> initList{-5, 2, 4,5, 7, 11, 16};
	initializer_list<int> initL2{0, 10, 3, -17, 1, -21, 6, -8};
	inputVector numbers(initList);
	inputVector nums(initL2);
	int target = 30;
	vector<int> solution = find4IntsThatSumToTarget(numbers, target);
	cout << "{" << solution[0] << ", " << solution[1] << ", " << solution[2] <<", " << solution[3] << "}" << endl;
	vector<int> solution1 = find4IntsThatSumToTarget(nums, -13);
	cout << "{" << solution1[0] << ", " << solution1[1] << ", " << solution1[2] <<", " << solution1[3] << "}" << endl;
}