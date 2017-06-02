#include <bits/stdc++.h>

#define out freopen("output.txt", "w", stdout);
#define in freopen("input.txt", "r", stdin);
#define clr(arr, key) memset(arr, key, sizeof arr)
#define pub push_back
#define pob pop_back
#define infinity 2147483647
#define LL long long
#define Pi acos(-1)
#define SZ 100010
#define VI vector <int>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

///int col[8] = {0, 1, 1, 1, 0, -1, -1, -1};
///int row[8] = {1, 1, 0, -1, -1, -1, 0, 1};
///int col[4] = {1, 0, -1, 0};
///int row[4] = {0, 1, 0, -1};
///int months[13] = {0, ,31,28,31,30,31,30,31,31,30,31,30,31};

struct point{int x, y;};

template <class T> T sqr(T a){return a * a;};
template <class T> double getdist(T a, T b){return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));}
template <class T> T GCD(T a, T b) {if(b == 0) return a; return GCD(b, a % b);}
template <class T> T LCM(T a, T b) {return (a * b) / GCD(a, b);}

using namespace std;


class PositiveArray {
public:
	int countMoves(vector <string> data) {
		int arr[data.size() + 1][data[0].size() + 1];
		clr(arr, 0);
		int i, j, r, n = data.size(), C = data[0].size();
		for(i = 0; i < n; i++){
            for(j = 0; j < C; j++){
                char c = data[i][j];
                if(data[i][j] >= '0' && data[i][j] <= '9')
                    arr[i][j] = data[i][j] - '0';
                else if(c >= 'A' && c <= 'Z')
                    arr[i][j] = -(c - 'A' + 1);
                else
                    arr[i][j] = c - 'a' + 10;
            }
        }
        for(i = 0; i < n; i++){
            for(j = 0; j < C; j++){
                arr[i][C] += arr[i][j];
                arr[n][j] += arr[i][j];
            }
        }
        for(i = 0; i <= n; i++){
            for(j = 0; j <= C; j++){
                cout << arr[i][j] << ' ';
            }
            cout << endl;
        }
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <string> p0, bool hasAnswer, int p1) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << "\"" << p0[i] << "\"";
	}
	cout << "}";
	cout << "]" << endl;
	PositiveArray *obj;
	int answer;
	obj = new PositiveArray();
	clock_t startTime = clock();
	answer = obj->countMoves(p0);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p1 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == p1;
	}
	if (!res) {
		cout << "DOESN'T MATCH!!!!" << endl;
	} else if (double(endTime - startTime) / CLOCKS_PER_SEC >= 2) {
		cout << "FAIL the timeout" << endl;
		res = false;
	} else if (hasAnswer) {
		cout << "Match :-)" << endl;
	} else {
		cout << "OK, but is it right?" << endl;
	}
	cout << "" << endl;
	return res;
}
int main() {
	bool all_right;
	all_right = true;

	vector <string> p0;
	int p1;

	{
	// ----- test 0 -----
	string t0[] = {"12"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 0;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}

	{
	// ----- test 1 -----
	string t0[] = {"aB"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 1;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}

	{
	// ----- test 2 -----
	string t0[] = {"Z2","21"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 2;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}

	{
	// ----- test 3 -----
	string t0[] = {"Z9","99"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = -1;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}

	if (all_right) {
		cout << "You're a stud (at least on the example cases)!" << endl;
	} else {
		cout << "Some of the test cases had errors." << endl;
	}
	return 0;
}
// PROBLEM STATEMENT
//
// A two-dimensional array of integers is positive if the sum of all elements in each row and each column is strictly greater than zero.
//
//
// For example, the following array is positive:
//
//
//  2  1 -1
// -1  2  2
//
// , while the next one is not:
//
//  1  1 -1
// -1  2  2
//
//
// (the sum of the elements in the first column is 0).
//
//
// You will be given a vector <string> data, representing a 2-d array. The j-th character of the i-th element of data represents the j-th number in the i-th row of the array. Digits ('0'-'9') denote numbers between 0 and 9, lowercase letters ('a'-'z') denote numbers between 10 and 35, respectively, and uppercase letters ('A'-'Z') denote negative numbers between -1 and -26, respectively. For example, 'a' represents 10, 'c' represents 12, 'A' represents -1 and 'Z' represents -26.
//
//
// In one move you are allowed to change the signs of all numbers in some row or column (i.e., multiply all numbers in a row or in a column by -1). Return the minimal number of moves you'll need to get a positive array, or -1 if this is impossible.
//
//
// DEFINITION
// Class:PositiveArray
// Method:countMoves
// Parameters:vector <string>
// Returns:int
// Method signature:int countMoves(vector <string> data)
//
//
// CONSTRAINTS
// -data will contain between 1 and 18 elements, inclusive.
// -Each element of data will contain between 1 and 18 characters, inclusive.
// -Each element of data will contain only digits ('0'-'9') or letters ('a'-'z', 'A'-'Z').
// -All elements of data will have the same length.
//
//
// EXAMPLES
//
// 0)
// {"12"}
//
//
// Returns: 0
//
// The input array is already positive.
//
// 1)
// {"aB"}
//
//
// Returns: 1
//
// We change signs in the last column and get a positive array.
//
// 2)
// {"Z2","21"}
//
//
// Returns: 2
//
// We can not succeed with less than 2 moves. One of the possible solutions is to reverse the first row and the last column.
//
// 3)
// {"Z9",
//  "99"}
//
// Returns: -1
//
//
//
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!