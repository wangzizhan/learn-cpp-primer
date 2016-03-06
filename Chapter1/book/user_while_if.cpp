#include<iostream>
int main() 
{
	int numStart, numEnd;
	
	std::cin >> numStart >> numEnd;
	if(numStart <= numEnd) {
		for(int i = numStart; numStart <= numEnd; ++numStart) {
			std::cout << numStart << std::endl;
		}
	} else {
		for(int k = numStart; numStart >= numEnd; --numStart) {
			std::cout << numStart << std::endl;
		}
	}
	
	return 0;
}
