#include <iostream>
#include <cmath>
#include <string>
long long arr[25] = { 0 };
using namespace std;

int main()
{
	
	int counter = 0;
	int n, d;
	cin >> n >> d;
	arr[0] = d;
	for (int i = 1; i < 16; i++)
	{
		arr[i] = d * pow(10, i) + arr[i - 1];
		
	}
	for (int i = 0; i < 16; i++)
	{
		if (arr[z] % n == 0)
		{
			cout << i + 1;
			counter++;
			break;
		}
	}
	if (counter == 0)
	{
		cout << "-1";
	}

	return 0;
}
