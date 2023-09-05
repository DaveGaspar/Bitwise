#include <iostream>

bool _10th_bit(int a){
	return (a & (1 << 9));
}

int main(){

	int a = 613;
	if (_10th_bit(a)){
		std::cout << "True" << std::endl;
	}
	else{
		std::cout << "False" << std::endl;
	}
	return 0;
}