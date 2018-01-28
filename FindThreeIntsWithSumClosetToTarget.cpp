#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> findThreeIntsWithSumClosetToTarget(vector<int> nums, int target){
	int min, sum;
	vector<int> solution;
	sort(nums.begin(), nums.end());
	for(int i = 0; i < nums.size(); i++){
		int start = i + 1;
		int end = nums.size() - 1;

		while(start < end){
			sum = nums[start] +nums[end] + nums[i];
			if(sum == target){
				solution.clear();
				solution.insert(solution.end(), {nums[i], nums[start],nums[end]});
				min = 0;
				break;
			}
			if(sum < target){
				if(target - sum < min){
					min = target - sum;
					solution.clear();
					solution.insert(solution.end(), {nums[i], nums[start],nums[end]});				
				}
				start++;
			}else{
				if(sum - target < min){
					min = sum - target;
					solution.clear();
					solution.insert(solution.end(), {nums[i], nums[start],nums[end]});
				}
				end--;
			}
		}
	}
	return solution;
}

int main(int argc, char** argv){
	using numVector = vector<int>;
	initializer_list<int> initList{-15, -8, -3, -1, 2, 4, 7, 9, 13, 14, 17};
	numVector numbers(initList);
	int target = 46;
	vector<int> solution = findThreeIntsWithSumClosetToTarget(numbers, target);
	cout << "{" << solution[0] << ", " << solution[1] << ", " << solution[2] << "}" << endl;

}