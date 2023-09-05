#include <iostream>
#include <vector>

int find_not_duplicate(const std::vector<int>& vec){
	int temp = 0;
	for (auto in : vec){
		temp = temp ^ in;
	}
	return temp;
}

int main(){

	std::vector<int> vec = {1,2,5,3,4,2,1,3,4,};

	std::cout << find_not_duplicate(vec) << std::endl;

	return 0;
}