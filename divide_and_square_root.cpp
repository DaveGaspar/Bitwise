#include <iostream>

int divide(int a, int b){
	int result = 0; 
	bool negative = false;
	
	if (a < 0 || b < 0){
		if (a < 0 && b < 0){

		}
		else{
			negative = true;
		}
	}

	a = abs(a);
	b = abs(b);

	for (int i = sizeof(int) - 1; i > -1; --i){
		if ((b << i) <= a){
			a -= b << i;
			result += 1 << i;
		}
	}

	if (!negative){
		return result;
	}
	return result * (-1);

}

int square_root(int a){
	if (a < 0){
		throw "Negative numbers don't have square roots";
	}
	if (a == 0){
		return 0;
	}
	int x = 1;
	int count = 0;
	while (x <= a){
		x *= 2;
		count++;
	}
	x = (1 << count);
	int result = 0;
	while(x != 0){
		if ((result + x) * (result + x) <= a){
            result += x;
        }
        x >>= 1;
	}
    return result;
}

int main(){

	int a = -35, b = 7, c = 49;

	std::cout << "Divide: " << std::endl;
	std::cout << divide(a,b) << std::endl;
	
	std::cout << "Square root: " << std::endl;
	try{
		std::cout << square_root(c) << std::endl;
	}
	catch(const char * c){
		std::cout << c << std::endl;
	}

	return 0;
}
