#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio;

	int N, X;
	int number;

	cin >> N >> X;

	for (int i = 0; i < N; ++i)
	{
		cin >> number;

		if (number < X)
			cout << number << " ";
	}

	return 0;
}