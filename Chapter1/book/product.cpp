#include<iostream>
/*
 * main function 
 * this is a program that calculate the product of two numbers.
 */
int main() 
{	
	std::cout << "Enter two numbers:" << std::endl;
	int num1 = 0, num2 = 0;
	std::cin >> num1 >> num2;
	std::cout << "The product of " << num1 << " and " << num2 << " is " << num1 * num2 << std::endl;

	return 0;
}
