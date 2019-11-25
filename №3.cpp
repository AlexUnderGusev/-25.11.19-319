#include <iostream>
#include <cmath>
using namespace std;
bool easy(int n) {
	for (int i =2; i <=sqrt(n); i++)
		if (n%i == 0)
			return false;
	return true;
}
int main() {
	int n, count;
	cin >>n;
	for (int i =0; i <n; i++) {
		for(count =4;true; ++count)
			if (!easy(count)) {
				cout << count<< " ";
				++count;
				break;
			}
	}
	return 0;
}