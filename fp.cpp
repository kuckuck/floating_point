/*
 Name:           Nicholas Kuckuck
 Date:           2/26/2014
 Instructor:     Prof. Dean Nevins
 Course number:  CS131
 Exercise 2: Floating Point Problem 3
 */

#include <iostream>
#include <bitset>
int main() {
	float decin;
	
    std::cout << "Enter a floating-point number: \n";
	std::cin >> decin;
	int ftoi = *(int *) &decin;
	std::bitset < sizeof(int) * 8 > bits(ftoi);
	std::cout << "\nSign Bit: " << bits[31] << " Exponent: ";

    for (int i = 30; i > 22; --i) {
		std::cout << bits[i];
	}
	std::cout << " Significand: ";

	for (int i = 22; i > -1; --i) {
		std::cout << bits[i];
	}
	std::cout << "\n";
}
