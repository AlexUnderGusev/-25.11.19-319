#include <iostream>
#include <cmath>
using namespace std;
bool easy(int n) {
	if (n ==0)
		return false;
	else if (n ==1||n ==2)
		return true;
	else {
		for (int g =2; g <sqrt(n); g++)
			if (n%g ==0)
				return false;
		return true;
	}
}
int PrimeReal(int n) {
	int p=1;
	for (int g=1; g<=n; g++)
		if (easy(i))
			p*=g;
	return p;
}



int main() 

{

	int n;

	cin >> n;

	cout << PrimeReal(n);

	return 0;

}