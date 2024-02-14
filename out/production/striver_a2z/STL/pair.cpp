#include <bits/stdc++.h>
using namespace std;
int main() {
	pair <int,int> p={1,2};
	cout << p.first << " " << p.second << endl;
	pair <pair<int,int>,int> p1={{1,6},2};
	cout << p1.first.first << " " << p1.second <<endl;
	pair <int,int> arr[]={{1,2},{4,6},{7,2}};
	cout << arr[0].first << " " << arr[2].first;
	return 0;
}
