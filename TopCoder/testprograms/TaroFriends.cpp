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

#define MAX 100010
/*************************************************HABIJABI ENDS HERE******************************************************/

class TaroFriends {
public:
	int getNumber(vector <int> coordinates, int X) {
        int res = infinity, i;
        sort(all(coordinates));
        int mn, mx, j = SZ(coordinates) - 1;
        mn = 4*infinity, mx = -4*infinity;
        for(i = 0; i < j; i++, j--)
        {
            mn = min(mn, coordinates[j] - X);
            mx = max(mx, coordinates[i] + X);
        }
        res = abs(mx - mn);
        cout << res << endl;
        if(SZ(coordinates) % 2)
        {
            i = SZ(coordinates) / 2;
            if(abs(max(mx, (coordinates[i] + X)) - mn) < abs(min(mn, (coordinates[i] - X)) - mx))
                res = max(res, abs(max(mx, (coordinates[i] + X)) - mn));
            else
                res = max(res, abs(min(mn, (coordinates[i] - X)) - mx));
        }
        cout << res << endl;
        return res;
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
bool KawigiEdit_RunTest(int testNum, vector <int> p0, int p1, bool hasAnswer, int p2) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p0[i];
	}
	cout << "}" << "," << p1;
	cout << "]" << endl;
	TaroFriends *obj;
	int answer;
	obj = new TaroFriends();
	clock_t startTime = clock();
	answer = obj->getNumber(p0, p1);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p2 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == p2;
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

	vector <int> p0;
	int p1;
	int p2;

	// ----- test 0 -----
	disabled = false;
	p0 = {-3,0,1};
	p1 = 3;
	p2 = 3;
	all_right = (disabled || KawigiEdit_RunTest(0, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------

	// ----- test 1 -----
	disabled = false;
	p0 = {4,7,-7};
	p1 = 5;
	p2 = 4;
	all_right = (disabled || KawigiEdit_RunTest(1, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------

	// ----- test 2 -----
	disabled = false;
	p0 = {-100000000,100000000};
	p1 = 100000000;
	p2 = 0;
	all_right = (disabled || KawigiEdit_RunTest(2, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------

	// ----- test 3 -----
	disabled = false;
	p0 = {3,7,4,6,-10,7,10,9,-5};
	p1 = 7;
	p2 = 7;
	all_right = (disabled || KawigiEdit_RunTest(3, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------

	// ----- test 4 -----
	disabled = false;
	p0 = {-4,0,4,0};
	p1 = 4;
	p2 = 4;
	all_right = (disabled || KawigiEdit_RunTest(4, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------

	// ----- test 5 -----
	disabled = false;
	p0 = {7};
	p1 = 0;
	p2 = 0;
	all_right = (disabled || KawigiEdit_RunTest(5, p0, p1, true, p2) ) && all_right;
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
//
// Cat Taro likes to play with his cat friends.
// Each of his friends currently sits on some coordinate on a straight line that goes from the left to the right.
// When Taro gives a signal, each of his friends must move exactly X units to the left or to the right.
//
//
//
//
// You are given an vector <int> coordinates and the int X.
// For each i, the element coordinates[i] represents the coordinate of the i-th cat before the movement.
// Return the smallest possible difference between the positions of the leftmost cat and the rightmost cat after the movement.
//
//
// DEFINITION
// Class:TaroFriends
// Method:getNumber
// Parameters:vector <int>, int
// Returns:int
// Method signature:int getNumber(vector <int> coordinates, int X)
//
//
// CONSTRAINTS
// -coordinates will contain between 1 and 50 elements, inclusive.
// -Each element of coordinates will be between -100,000,000 and 100,000,000, inclusive.
// -X will be between 0 and 100,000,000, inclusive.
//
//
// EXAMPLES
//
// 0)
// {-3, 0, 1}
// 3
//
// Returns: 3
//
// The difference 3 is obtained if the cats move from {-3,0,1} to {0,-3,-2}.
//
//
//
//
// 1)
// {4, 7, -7}
// 5
//
// Returns: 4
//
// The difference 4 is obtained if the cats move from {4,7,-7} to {-1,2,-2}.
//
//
//
//
// 2)
// {-100000000, 100000000}
// 100000000
//
// Returns: 0
//
//
//
// 3)
// {3, 7, 4, 6, -10, 7, 10, 9, -5}
// 7
//
// Returns: 7
//
//
//
// 4)
// {-4, 0, 4, 0}
// 4
//
// Returns: 4
//
//
//
// 5)
// {7}
// 0
//
// Returns: 0
//
//
//
// END KAWIGIEDIT TESTING
//Powered by KawigiEdit-pf 2.3.0!
