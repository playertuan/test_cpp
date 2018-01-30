

#include <iostream>

void printDivideByZero();

int main(){
	printDivideByZero();
}

void printDivideByZero(){
	std::cout << 1/0;
}
