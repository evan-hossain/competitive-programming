#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>

#define out freopen("output.txt", "w", stdout);
#define in freopen("input.txt", "r", stdin);
#define clr(arr, key) memset(arr, key, sizeof arr)
#define pb push_back
#define infinity (1 << 28)
#define LL long long
#define PI acos(-1)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a)*((b)/gcd(a,b)))
#define all(v) v.begin(), v.end()
#define no_of_ones __builtin_popcount // count 1's in a numbers binary representation
#define SZ(v) (int)(v.size())
#define eps 10e-7

//int col[8] = {0, 1, 1, 1, 0, -1, -1, -1};
//int row[8] = {1, 1, 0, -1, -1, -1, 0, 1};
//int col[4] = {1, 0, -1, 0};
//int row[4] = {0, 1, 0, -1};
//int months[13] = {0, ,31,28,31,30,31,30,31,31,30,31,30,31};

using namespace std;

struct point{int x, y; point () {} point(int a, int b) {x = a, y = b;}};    // for coordinates;

template <class T> T sqr(T a){return a * a;}    // square
template <class T> T power(T n, T p) { T res = 1; for(int i = 0; i < p; i++) res *= n; return res;}     //  n  to the power p
template <class T> double getdist(T a, T b){return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));}    // distance between a and b
template <class T> T extract(string s, T ret) {stringstream ss(s); ss >> ret; return ret;}    // extract words or numbers from a line
template <class T> string tostring(T n) {stringstream ss; ss << n; return ss.str();}    // convert a number to string
template <class T> inline T Mod(T n,T m) {return (n%m+m)%m;}    // negative mod
template <class T> void print_all(T v) {for(int i = 0; i < v.size(); i++) cout << v[i] << ' ';};
template <class T> void print_all(T &v, int len) {for(int i = 0; i < len; i++) cout << v[i] << ' ';}     // prints all elements in a vector or array
template <class T> void print_pair(T v, int len) {for(int i = 0; i < len; i++) cout << v[i].first << ' ' << v[i].second << endl;} // prints pair vector
//LL bigmod(LL B,LL P,LL M){LL R=1; while(P>0)  {if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;} return R;}

#define MAX 51
/*************************************************HABIJABI ENDS HERE******************************************************/

class FIELDDiagrams {
public:

    LL dp[MAX][MAX];
    int n;

    LL call(int mx, int row)
    {
        if(row >= n)
            return 0;
        LL &ret = dp[mx][row], i;
        if(ret != -1) return ret;
        ret = 0;
        for(i = 0; i <= min(mx, n - row - 1); i++)
            ret += call(i, row + 1) + 1;
        return ret;
    }
	long long countDiagrams(int fieldOrder) {
        n = fieldOrder;
        clr(dp, -1);
        return call(n - 1, 0);
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit-pf 2.3.0
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cmath>
using namespace std;
bool KawigiEdit_RunTest(int testNum, int p0, bool hasAnswer, long long p1) {
	cout << "Test " << testNum << ": [" << p0;
	cout << "]" << endl;
	FIELDDiagrams *obj;
	long long answer;
	obj = new FIELDDiagrams();
	clock_t startTime = clock();
	answer = obj->countDiagrams(p0);
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
	bool disabled;
	bool tests_disabled;
	all_right = true;
	tests_disabled = false;

	int p0;
	long long p1;

	// ----- test 0 -----
	disabled = false;
	p0 = 2;
	p1 = 4ll;
	all_right = (disabled || KawigiEdit_RunTest(0, p0, true, p1) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------

	// ----- test 1 -----
	disabled = false;
	p0 = 3;
	p1 = 13ll;
	all_right = (disabled || KawigiEdit_RunTest(1, p0, true, p1) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------

	// ----- test 2 -----
	disabled = false;
	p0 = 5;
	p1 = 131ll;
	all_right = (disabled || KawigiEdit_RunTest(2, p0, true, p1) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------

	if (all_right) {
		if (tests_disabled) {
			cout << "You're a stud (but some test cases were disabled)!" << endl;
		} else {
			cout << "You're a stud (at least on given cases)!" << endl;
		}
	} else {
		cout << "Some of the test cases had errors." << endl;
	}
	return 0;
}
// PROBLEM STATEMENT
// A Ferrers diagram of the partition of positive number n = a1 + a2 + ... + ak, for a list a1, a2, ..., ak of k positive integers with a1 ? a2 ? ... ? ak is an arrangement of n boxes in k rows, such that the boxes are left-justified, the first row is of length a1, the second row is of length a2, and so on, with the kth row of length ak. Let's call a FIELD diagram of order fieldOrder a Ferrers diagram with a1 ? fieldOrder, a2 ? fieldOrder - 1, ..., ak ? fieldOrder - k + 1, so a FIELD diagram can have a number of rows which is less than or equal to fieldOrder. Your method will be given fieldOrder, it should return the total number of FIELD diagrams of order fieldOrder.
//
// DEFINITION
// Class:FIELDDiagrams
// Method:countDiagrams
// Parameters:int
// Returns:long long
// Method signature:long long countDiagrams(int fieldOrder)
//
//
// CONSTRAINTS
// -fieldOrder will be between 1 and 30, inclusive
//
//
// EXAMPLES
//
// 0)
// 2
//
// Returns: 4
//
// There are four possible FIELD diagrams for fieldOrder equal to 2, corresponding to partitions: (1), (2), (1, 1), (2,1). They are shown in the picture below. There white stands for unused space in a row and red for boxes, corresponding to FIELD diagrams.
//
//
//
// 1)
// 3
//
// Returns: 13
//
// 2)
// 5
//
// Returns: 131
//
// END KAWIGIEDIT TESTING
//Powered by KawigiEdit-pf 2.3.0!
