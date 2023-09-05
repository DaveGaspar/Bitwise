#include <iostream>

bool more_1_or_0(int a){

	int count_0 = 0;
	int count_1 = 0;
    
	for (int x = 1; x <= a; x = x<<1){
        if ((x & a) == 0){
            count_0++;
		}
	}

	while (a) {
        count_1 += a & 1;
        a >>= 1;
    }

	return count_0 > count_1;
}

int main(){

	int a = 4;

	if (more_1_or_0(a)){
		std::cout << "There are more 0" << std::endl;
	}
	else{
		std::cout << "There are more 1" << std::endl;
	}

	return 0;
}