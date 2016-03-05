#include<iostream>
int main() 
{
	int numStart, numEnd;
	
	std::cin >> numStart >> numEnd;

	while(numStart <= numEnd) {
		std::cout << numStart << std::endl;
		numStart++;
	}

	return 0;
}
