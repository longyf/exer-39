#include <iostream>
#include "MoreThanHalfNum_Solution.h"
#include <vector>
#include <stdexcept>
using namespace std;

int main() {
	vector<int> v1 = {1, 2, 3, 2, 2, 2, 5, 4, 2};
	try {
		int result = MoreThanHalfNum_Solution(v1);
		cout<<"The result is "<<result<<endl;
	} catch (invalid_argument err) {
		cout<<err.what()<<endl;
		cout<<endl;
	}
	return 0;
}
