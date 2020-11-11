#include <iostream>
using namespace std;

int main() {
	int n;
	int a, b;
	int number[255];

	cin >> n;
	
	for (int i = 0; i < n; ++i)
	{
		cin >> a >> b;
		number[i] = a + b;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << number[i] << endl;
	}

	return 0;
}