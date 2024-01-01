#include <bits/stdc++.h>
using namespace std;

void explainPair()
{
	pair<int, int> p = {1, 2};
	cout << p.first << " " << p.second << endl;
	pair<pair<int, int>, int> p1 = {{1, 6}, 2};
	cout << p1.first.first << " " << p1.second << endl;
	pair<int, int> arr[] = {{1, 2}, {4, 6}, {7, 2}};
	cout << arr[0].first << " " << arr[2].first;
}

void explainVector()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	vector<pair<int, int>> v1;
	v1.push_back({1, 2});

	for (auto it : v)
	{
		cout << it << " ";
	}
	cout << endl;
	for (auto it = v.begin(); it != v.end(); it++)
	{
		cout << *(it) << " ";
	}
}

void explainSet()
{
	set<int> s;
	s.insert(1);
	auto it = s.find(1);
	s.erase(1);
	// s.erase(it1,it2);
}

int main()
{
	explainVector();
	return 0;
}
