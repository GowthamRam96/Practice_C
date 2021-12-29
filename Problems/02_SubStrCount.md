# Problem Statement
Given a string S consisting of only 1s and 0s, find the number of substrings which start and end both in 1.

In this problem, a substring is defined as a sequence of continuous characters Si, Si+1, ..., Sj where 1 ≤ i ≤ j ≤ N.

Input
First line contains T, the number of testcases. Each testcase consists of N(the length of string) in one line and string in second line.

Output
For each testcase, print the required answer in one line.

Constraints

1 ≤ T ≤ 105

1 ≤ N ≤ 105

Sum of N over all testcases ≤ 105

# Solution
```c++
#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		char arr[n];

		long count = 0;// earlier int was used and got errors due to the length constraints for certain use cases.

		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			if (arr[i] == '1') {
				count++;
			}
		}
		cout << (count * (count + 1)) / 2 << endl;
	}
}
```

# Result

![image](https://user-images.githubusercontent.com/84629235/147665691-1c55afef-9f13-4dbc-90ca-b442d7bcce0d.png)
