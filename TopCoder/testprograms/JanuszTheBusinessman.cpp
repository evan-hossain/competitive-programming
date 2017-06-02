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
//template <class T> T sqr(T a){return a * a;}    // square
//template <class T> T power(T n, T p) { T res = 1; for(int i = 0; i < p; i++) res *= n; return res;}     //  n  to the power p
//template <class T> double getdist(T a, T b){return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));}    // distance between a and b
//template <class T> T extract(string s, T ret) {stringstream ss(s); ss >> ret; return ret;}    // extract words or numbers from a line
//template <class T> string tostring(T n) {stringstream ss; ss << n; return ss.str();}    // convert a number to string
//template <class T> inline T Mod(T n,T m) {return (n%m+m)%m;}    // negative mod
//template <class T> void show(T a){cout << a << endl;}
//template <class T> void show(T a, T b){cout << a << ' ' << b << endl;}
//LL bigmod(LL B,LL P,LL M){LL R=1; while(P>0)  {if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;} return R;}

#define MAX 60
/***********************************THE GRASS IS ALWAYS GREENER ON THE OTHER SIDE***********************************/

class JanuszTheBusinessman {
public:
    vector <pair<int, int>> arr;
    int dp[MAX];
    int call(int indx)
    {
        if(indx == SZ(arr)) return 0;
        int &ret = dp[indx], i;
        if(ret != -1) return ret;
        ret = 1;
        for(i = indx + 1; i < SZ(arr); i++)
            if(arr[i].first > arr[indx].second)
                ret += call(i);
        for(i = indx + 1; i < SZ(arr); i++)
            if(arr[i].first <= arr[indx].second)
                ret = min(ret, call(i));
        return ret;
    }
	int makeGuestsReturn(vector <int> arrivals, vector <int> departures) {
        int n = SZ(arrivals), i, j;
        for(i = 0; i < n; i++)
            arr.pb(mp(departures[i], arrivals[i]));
        clr(dp, -1);
        return call(0);
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
bool KawigiEdit_RunTest(int testNum, vector <int> p0, vector <int> p1, bool hasAnswer, int p2) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p0[i];
	}
	cout << "}" << "," << "{";
	for (int i = 0; int(p1.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p1[i];
	}
	cout << "}";
	cout << "]" << endl;
	JanuszTheBusinessman *obj;
	int answer;
	obj = new JanuszTheBusinessman();
	clock_t startTime = clock();
	answer = obj->makeGuestsReturn(p0, p1);
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
	vector <int> p1;
	int p2;

	// ----- test 0 -----
	disabled = true;
	p0 = {2,10,6};
	p1 = {6,11,9};
	p2 = 2;
	all_right = (disabled || KawigiEdit_RunTest(0, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------

	// ----- test 1 -----
	disabled = true;
	p0 = {2,10,23,34,45,123,1};
	p1 = {25,12,40,50,48,187,365};
	p2 = 1;
	all_right = (disabled || KawigiEdit_RunTest(1, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------

	// ----- test 2 -----
	disabled = false;
	p0 = {8,12,20,30,54,54,68,75};
	p1 = {13,31,30,53,55,70,80,76};
	p2 = 3;
	all_right = (disabled || KawigiEdit_RunTest(2, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------

	// ----- test 3 -----
	disabled = true;
	p0 = {124,328,135,234,347,124,39,99,116,148};
	p1 = {237,335,146,246,353,213,197,215,334,223};
	p2 = 2;
	all_right = (disabled || KawigiEdit_RunTest(3, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------

	// ----- test 4 -----
	disabled = true;
	p0 = {154,1,340,111,92,237,170,113,241,91,228,134,191,86,59,115,277,328,12,6};
	p1 = {159,4,341,118,101,244,177,123,244,96,231,136,193,95,64,118,282,330,17,13};
	p2 = 14;
	all_right = (disabled || KawigiEdit_RunTest(4, p0, p1, true, p2) ) && all_right;
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
// Janusz owns a hotel.
// He has already received some reservations for the upcoming year.
// The days in the year are numbered 1 through 365.
// For each valid i, there is a guest who will arrive on day arrivals[i] and depart on day departures[i].
//
// Janusz can give some guests a special promotion.
// Any guest that gets the special promotion will leave a good review.
// Additionally, all guests that meet a guest with promotion will also leave a good review.
// (Here we assume that two guests meet if and only if they are in the hotel on the same day, including the situation when one of them departs on the same day the other one arrives.)
//
// Janusz wants to make sure that all his guests leave good reviews.
// You are given the vector <int>s arrivals and departures.
// Return the smallest possible number of special promotions sufficient to make sure that all guests leave good reviews.
//
//
// DEFINITION
// Class:JanuszTheBusinessman
// Method:makeGuestsReturn
// Parameters:vector <int>, vector <int>
// Returns:int
// Method signature:int makeGuestsReturn(vector <int> arrivals, vector <int> departures)
//
//
// CONSTRAINTS
// -arrivals and departures will have the same number of elements.
// -arrivals will have between 2 and 50 elements, inclusive.
// -Each element of arrivals and departures will be between 1 and 365, inclusive.
// -For each valid i arrivals[i] will be less than departures[i].
//
//
// EXAMPLES
//
// 0)
// {2, 10, 6}
// {6, 11, 9}
//
// Returns: 2
//
// One promotion is not enough.
// One optimal solution is to give promotions to the guest who arrives on day 2 and to the guest who arrives on day 10.
// The third guest will meet the first guest on day 6.
//
// 1)
// {2, 10, 23, 34, 45, 123, 1}
// {25, 12, 40, 50, 48, 187, 365}
//
// Returns: 1
//
// One guest is going to stay for the whole season so Janusz can give the promotion only to him.
//
// 2)
// {8, 12, 20, 30, 54, 54, 68, 75}
// {13, 31, 30, 53, 55, 70, 80, 76}
//
// Returns: 3
//
//
//
// 3)
// {124, 328, 135, 234, 347, 124, 39, 99, 116, 148}
// {237, 335, 146, 246, 353, 213, 197, 215, 334, 223}
//
// Returns: 2
//
//
//
// 4)
// {154, 1, 340, 111, 92, 237, 170, 113, 241, 91, 228, 134, 191, 86, 59, 115, 277, 328, 12, 6}
// {159, 4, 341, 118, 101, 244, 177, 123, 244, 96, 231, 136, 193, 95, 64, 118, 282, 330, 17, 13}
//
// Returns: 14
//
//
//
// END KAWIGIEDIT TESTING
//Powered by KawigiEdit-pf 2.3.0!