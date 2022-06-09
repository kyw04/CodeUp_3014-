#include <iostream>
#include <stack>
#define MAX 100001
using namespace std;

int memo[MAX];
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		memo[input]++;
	}

	for (int i = 0; i < MAX; i++)
	{
		while (memo[i])
		{
			cout << i << ' ';
			memo[i]--;
		}
	}

	return 0;
}