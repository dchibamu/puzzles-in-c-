#include <iostream>
#include <vector>
#include <map>

std::vector<int> addTwoNumsToTarget(std::vector<int> numSeq, int target){
	std::vector<int> result;
	std::map<int, int> map;	
	 std::map<int,int>::iterator it;
	for(int i = 0; i < numSeq.size(); i++){
		map[numSeq[i]] = i;
	}

	for(int i = 0; i < numSeq.size(); i++){
		int operand = target - numSeq[i];
		
		if(map.find(operand) != map.end()){
			result.push_back(i);
			result.push_back(map[operand]);
			break;
		}
	}
	return result;
}




int main(){
	std::vector<int> numSeq = {3, 4, 11, -2, 6, 5, 9};

	std::vector<int> result = addTwoNumsToTarget(numSeq, 16);
	std::cout << result[0] << ",   " << result[1] << std::endl;
	return 0;
}
