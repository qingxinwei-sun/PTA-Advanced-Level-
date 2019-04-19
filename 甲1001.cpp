#include<iostream>
#include<string>
using namespace std;
#define N 1000000

int main() {
	int a, b = 0;
	cin >> a >> b;
	int t = a + b;
	if (t < 0) {
		cout << "-";
		t = -t;
	}
	string m = to_string(t);
	int cnt = m.size();
	if (cnt > 6)
		cout << m[0] << "," << m[1] << m[2] << m[3] << "," << m[4] << m[5] << m[6] ;
	else if (cnt > 3) {
		for (int i = 0; i < m.size()-3; ++i)
			cout << m[i];
		cout<<","<< m[m.size()-3] << m[m.size() - 2] << m[m.size() - 1];
	}
	else {
		for (int i = 0; i <m.size(); ++i)
			cout << m[i];
	}
	cout << endl;
	return 0;
}
