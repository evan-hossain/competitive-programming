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
#include <assert.h>

#define in freopen("input.txt", "r", stdin);
#define out freopen("output.txt", "w", stdout);
#define clr(arr, key) memset(arr, key, sizeof arr)
#define pb push_back
#define mp(a, b) make_pair(a, b)
#define infinity (1 << 28)
#define LL long long
#define PI acos(-1)
#define gcd(a, b) __gcd(a, b)
#define CF ios_base::sync_with_stdio(0);cin.tie(0);
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

//struct point{int x, y; point () {} point(int a, int b) {x = a, y = b;}};    // for coordinates;
//
template <class T> T sqr(T a){return a * a;}    // square
//template <class T> T power(T n, T p) { T res = 1; for(int i = 0; i < p; i++) res *= n; return res;}     //  n  to the power p
//template <class T> double getdist(T a, T b){return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));}    // distance between a and b
//template <class T> T extract(string s, T ret) {stringstream ss(s); ss >> ret; return ret;}    // extract words or numbers from a line
//template <class T> string tostring(T n) {stringstream ss; ss << n; return ss.str();}    // convert a number to string
//template <class T> inline T Mod(T n,T m) {return (n%m+m)%m;}    // negative mod
//template <class T> void show(T a){cout << a << endl;}
//template <class T> void show(T a, T b){cout << a << ' ' << b << endl;}
//LL bigmod(LL B,LL P,LL M){LL R=1; while(P>0)  {if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;} return R;}

#define MAX 200010
/***********************************THE GRASS IS ALWAYS GREENER ON THE OTHER SIDE***********************************/

class AliceGame {
public:
	long long findMinimumValue(long long x, long long y) {
		LL tot = x + y;
		LL sq = sqrt(tot);
		if(sq*sq != tot)
            return -1;
        LL step = 0, cur = x, num;
        while(cur && sq)
        {
            if(2 * sq - 1 > cur)
            {
                sq--;
                continue;
            }
            num = 2 * sq - 1;
            LL baki = cur - num;
            if(baki <= sqr(sq - 1) && baki != 2)
            {
                cur -= num;
                step++;
            }
            sq--;
        }
        if(cur)
            return -1;
        return step;
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
bool KawigiEdit_RunTest(int testNum, long long p0, long long p1, bool hasAnswer, long long p2) {
	cout << "Test " << testNum << ": [" << p0 << "," << p1;
	cout << "]" << endl;
	AliceGame *obj;
	long long answer;
	obj = new AliceGame();
	clock_t startTime = clock();
	answer = obj->findMinimumValue(p0, p1);
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

	long long p0;
	long long p1;
	long long p2;

	// ----- test 0 -----
	disabled = false;
	p0 = 8ll;
	p1 = 17ll;
	p2 = 2ll;
	all_right = (disabled || KawigiEdit_RunTest(0, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------

	// ----- test 1 -----
	disabled = false;
	p0 = 17ll;
	p1 = 8ll;
	p2 = 3ll;
	all_right = (disabled || KawigiEdit_RunTest(1, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------

	// ----- test 2 -----
	disabled = false;
	p0 = 0ll;
	p1 = 0ll;
	p2 = 0ll;
	all_right = (disabled || KawigiEdit_RunTest(2, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------

	// ----- test 3 -----
	disabled = false;
	p0 = 9ll;
	p1 = 9ll;
	p2 = -1ll;
	all_right = (disabled || KawigiEdit_RunTest(3, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------

	// ----- test 4 -----
	disabled = false;
	p0 = 500000ll;
	p1 = 500000ll;
	p2 = 294ll;
	all_right = (disabled || KawigiEdit_RunTest(4, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------

	// ----- test 5 -----
	disabled = false;
	p0 = 2ll;
	p1 = 2ll;
	p2 = -1ll;
	all_right = (disabled || KawigiEdit_RunTest(5, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------

	// ----- test 6 -----
	disabled = false;
	p0 = 2ll;
	p1 = 23ll;
	p2 = -1ll;
	all_right = (disabled || KawigiEdit_RunTest(6, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------

	// ----- test 7 -----
	disabled = false;
	p0 = 25ll;
	p1 = 75ll;
	p2 = 3ll;
	all_right = (disabled || KawigiEdit_RunTest(7, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------

	// ----- test 8 -----
	disabled = false;
	p0 = 3ll;
	p1 = 1ll;
	p2 = 1ll;
	all_right = (disabled || KawigiEdit_RunTest(8, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------

	// ----- test 9 -----
	disabled = false;
	p0 = 500000000000ll;
	p1 = 500000000000ll;
	p2 = 292894;
	all_right = (disabled || KawigiEdit_RunTest(9, p0, p1, true, p2) ) && all_right;
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
// Alice and Kirito just played a game.
// The game consisted of a finite (possibly empty) sequence of turns.
// You do not know the exact number of turns.
// The turns were numbered starting from 1.
// In each turn, exactly one of our two players won.
// The winner of turn i scored 2*i-1 points.
//
//
//
// You are given two long longs x and y.
// Find out whether it is possible that at the end of the game Alice had exactly x points and Kirito had exactly y points.
// If it is possible, return the smallest number of turns Alice could have won.
// If the given final result is not possible, return -1 instead.
//
//
// DEFINITION
// Class:AliceGame
// Method:findMinimumValue
// Parameters:long long, long long
// Returns:long long
// Method signature:long long findMinimumValue(long long x, long long y)
//
//
// CONSTRAINTS
// -x and y are between 0 and 1,000,000,000,000, inclusive.
//
//
// EXAMPLES
//
// 0)
// 8
// 17
//
// Returns: 2
//
// This final result is possible.
// Alice must have won at least two turns.
// One possibility is that Alice won turns 2 and 3 (for 3+5 = 8 points) and Kirito won turns 1, 4, and 5 (for 1+7+9 = 17 points).
//
// 1)
// 17
// 8
//
// Returns: 3
//
//
//
// 2)
// 0
// 0
//
// Returns: 0
//
//
//
// 3)
// 9
// 9
//
// Returns: -1
//
//
//
// 4)
// 500000
// 500000
//
// Returns: 294
//
//
//
// END KAWIGIEDIT TESTING
//Powered by KawigiEdit-pf 2.3.0!
