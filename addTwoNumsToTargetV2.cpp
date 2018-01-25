#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Node {
	int value;
	int index;
	Node(int val, int idx): value(val), index(idx){}
};

static bool compare(const Node &left, const Node &right){
	return left.value < right.value;
}

vector<int> twoSum(vector<int> numbersList, int target){

	vector<Node> elements;
	vector<int> results;
	for(int i = 0; i < numbersList.size(); i++){
		elements.push_back(Node(numbersList[i], i));
	}
	std::sort(elements.begin(), elements.end(), compare);
	int start = 0, end = numbersList.size() - 1;
	while(start < end){
		int sum = elements[start].value + elements[end].value;
		if(sum == target){
			results.push_back(elements[start].index);
			results.push_back(elements[end].index);
			break;
		}else if(sum > target){
			end--;
		}else{
			start++;
		}
	}
	return results;
}


int main(int argc, char** argv){

	vector<int> input = {4, 7, 3, -5, 10, 13, 1};
	vector<int> results = twoSum(input, 13);
	cout << results[0]<< ", "<<results[1];
}