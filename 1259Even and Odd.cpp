#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n, even[100000], odd[100000],iodd=0,ieven=0,num;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (num % 2 == 0)
		{
			even[ieven] = num;
			ieven++;
		}
		else
		{
			odd[iodd] = num;
			iodd++;
		}
	}
	sort(even, even + ieven);
	sort(odd, odd + iodd);
	for (int i = 0; i < ieven; i++) cout << even[i] << endl;
	for (int i = 0; i < iodd; i++) cout << odd[iodd-1-i] << endl;
	return 0;
}