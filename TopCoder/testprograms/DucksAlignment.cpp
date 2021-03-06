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

//template <class T> T sqr(T a){return a * a;}    // square
//template <class T> T power(T n, T p) { T res = 1; for(int i = 0; i < p; i++) res *= n; return res;}     //  n  to the power p
//template <class T> double getdist(T a, T b){return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));}    // distance between a and b
//template <class T> T extract(string s, T ret) {stringstream ss(s); ss >> ret; return ret;}    // extract words or numbers from a line
//template <class T> string tostring(T n) {stringstream ss; ss << n; return ss.str();}    // convert a number to string
//template <class T> inline T Mod(T n,T m) {return (n%m+m)%m;}    // negative mod
//template <class T> void print_all(T v) {for(int i = 0; i < v.size(); i++) cout << v[i] << ' ';};
//template <class T> void print_all(T &v, int len) {for(int i = 0; i < len; i++) cout << v[i] << ' ';}     // prints all elements in a vector or array
//template <class T> void print_pair(T v, int len) {for(int i = 0; i < len; i++) cout << v[i].first << ' ' << v[i].second << endl;} // prints pair vector
//LL bigmod(LL B,LL P,LL M){LL R=1; while(P>0)  {if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;} return R;}

#define MAX 100010
/*************************************************HABIJABI ENDS HERE******************************************************/

class DucksAlignment {
public:
	int minimumTime(vector <string> grid) {
		
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
	DucksAlignment *obj;
	int answer;
	obj = new DucksAlignment();
	clock_t startTime = clock();
	answer = obj->minimumTime(p0);
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
	
	vector <string> p0;
	int p1;
	
	// ----- test 0 -----
	disabled = false;
	p0 = {".o","o."};
	p1 = 1;
	all_right = (disabled || KawigiEdit_RunTest(0, p0, true, p1) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 1 -----
	disabled = false;
	p0 = {".o...","..o..","....o"};
	p1 = 3;
	all_right = (disabled || KawigiEdit_RunTest(1, p0, true, p1) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 2 -----
	disabled = false;
	p0 = {"o..........","..o........",".......o...","...........","...........","...........","........o..","..........."};
	p1 = 16;
	all_right = (disabled || KawigiEdit_RunTest(2, p0, true, p1) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 3 -----
	disabled = false;
	p0 = {".........","....o....","........."};
	p1 = 0;
	all_right = (disabled || KawigiEdit_RunTest(3, p0, true, p1) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 4 -----
	disabled = false;
	p0 = {"...o..........................","............................o.",".o............................","............o.................",".................o............","......................o.......","......o.......................","....o.........................","...............o..............",".......................o......","...........................o..",".......o......................"};
	p1 = 99;
	all_right = (disabled || KawigiEdit_RunTest(4, p0, true, p1) ) && all_right;
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
// Mr. Dengklek has a rectangular farm conveniently divided into a grid of unit squares. At this moment, each unit square contains at most one duck. Moreover, each row and column of the farm also contains at most one duck. You are given a vector <string> grid. The j-th character of the i-th element of grid will be 'o' if there is exactly one duck in square (i, j), i.e., row i column j, or '.' if there is no duck in that square. 
// 
// Today, Mr. Dengklek wants to align the ducks so that the ducks form a contiguous line. More precisely, assume that there are N ducks on the farm. After the alignment, the ducks must either occupy N contiguous squares in some row or N contiguous squares in some column. To accomplish that, he will move the ducks one at a time. To move a duck in square (a, b) to another empty square (c, d), he needs |a-c| + |b-d| seconds, where |x| denotes the absolute value of x. Mr. Dengklek can always move any duck to any empty square he desires - the other ducks are not obstacles.
// 
// Return the minimum time in seconds Mr. Dengklek needs to align the ducks. Note that restrictions imposed on the initial placement of ducks guarantee that a proper alignment is always possible.
// 
// DEFINITION
// Class:DucksAlignment
// Method:minimumTime
// Parameters:vector <string>
// Returns:int
// Method signature:int minimumTime(vector <string> grid)
// 
// 
// CONSTRAINTS
// -grid will contain between 1 and 50 elements, inclusive.
// -Each element of grid will contain between 1 and 50 characters, inclusive.
// -All elements of grid will contain the same number of characters.
// -Each character of grid will be either 'o' or '.'.
// -Each row in grid will contain at most one character 'o'.
// -Each column in grid will contain at most one character 'o'.
// -grid will contain at least one character 'o'.
// 
// 
// EXAMPLES
// 
// 0)
// {".o",
//  "o."}
// 
// Returns: 1
// 
// Move either duck to an adjacent empty square.
// 
// 1)
// {".o...",
//  "..o..",
//  "....o"}
// 
// Returns: 3
// 
// One of the solutions is: move the the duck in the first row one square to the right, and then move the duck in the last row two squares to the left.
// 
// 2)
// {"o..........",
//  "..o........",
//  ".......o...",
//  "...........",
//  "...........",
//  "...........",
//  "........o..",
//  "..........."}
// 
// Returns: 16
// 
// Align all ducks in the second row.
// 
// 3)
// {".........",
//  "....o....",
//  "........."}
// 
// Returns: 0
// 
// 
// 
// 4)
// {"...o..........................",
//  "............................o.",
//  ".o............................",
//  "............o.................",
//  ".................o............",
//  "......................o.......",
//  "......o.......................",
//  "....o.........................",
//  "...............o..............",
//  ".......................o......",
//  "...........................o..",
//  ".......o......................"}
// 
// Returns: 99
// 
// 
// 
// END KAWIGIEDIT TESTING
//Powered by KawigiEdit-pf 2.3.0!
