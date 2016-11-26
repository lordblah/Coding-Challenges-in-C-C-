#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int n, x;
	vector<int>v;//creates a vector
	cin >> n;
	
	while (cin >> x)
	{
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	for (auto i = v.begin(); i != v.end(); ++i)
	{
		std::cout << *i << ' ';
	}
	return 0;
}
