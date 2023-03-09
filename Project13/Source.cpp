#include <iostream>
using namespace std;
int main()
{
	int k, n;
	int arr[80]={};
	cin >> n ;
	cin >> k;
	for (int i = 1;i <= n;i++)
	{
		cin >> arr[i];
	}
	int counter = 0;
	for (int i= 1;i <= n;i++)
	{
		if (arr[i] >= arr[k] && arr[i]!= 0)
			counter++;
	}
	cout << counter;
}