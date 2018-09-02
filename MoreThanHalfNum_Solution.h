#ifndef MORE_THAN_HALF_NUM_SOLUTION
#define MORE_THAN_HALF_NUM_SOLUTION
#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

bool validNumber(vector<int> &numbers, int element) {
	auto length = numbers.size();
	int count = 0;
	for (int index = 0; index != length; index++) {
		if (numbers[index] == element) count++;
	}
	if (count * 2 > length) return true;
	else return false;
}

int MoreThanHalfNum_Solution(vector<int> &numbers) {
	if (numbers.empty()) throw invalid_argument("The input vector is empty.");
	int element = numbers[0];
	int count = 1;
	int index = 1;
	while (index != numbers.size()) {
		if (element == numbers[index]) {
			count++;
			index++;
		}
		else {
			count--;
			index++;
			if (count == 0) {
				if (index != numbers.size()) {
					element = numbers[index];
					count = 1;
					index++;
				}
			}
		}
	}
	if (validNumber(numbers, element)) return element;
	else throw invalid_argument("No suitable element found.");
}
				
#endif
