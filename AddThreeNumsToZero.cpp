#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> addThreeNumsToZero(std::vector<int> numbers){
	vector<vector<int>> result;
	vector<int> solution;

	sort(numbers.begin(), numbers.end());
	for(int i = 0; i < numbers.size(); i++){

		int target = -numbers[i];
		int start = i + 1;
		int end = numbers.size() - 1;

		while(start < end){
			
			if(numbers[start] + numbers[end] < target){
				start++;
			}else if(numbers[start] + numbers[end] > target){
				end--;
			}else{
				solution.clear();
				solution.insert(solution.end(),{numbers[i], numbers[start], numbers[end]});
				result.push_back(solution);
				start++; 
				end--;
			}
		}
	}
	return result;
}

int main(int argc, char** argv){

	using myVector = vector<int>;
	
	initializer_list<int> initList{-6, 4, 11, 5, -3, 10, 6, 4, -2, 3, -1, -9, 2, 7, 0};
	myVector numbers(initList);

	vector< vector<int> > triplets = addThreeNumsToZero(numbers);
	vector<int> solution;
	
	for(vector< vector<int> >::iterator it = triplets.begin(); it != triplets.end(); ++it){
		solution = *it;
		cout << "{" << solution[0] << ", " << solution[1] << ", " << solution[2] << "}" << endl;
	}
}