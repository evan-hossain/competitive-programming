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
#define infinity 2147483647
#define LL long long
#define PI acos(-1)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a)*((b)/gcd(a,b)))
#define all(v) v.begin(), v.end()
#define no_of_ones __builtin_popcount // count 1's in a numbers binary representation
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define SZ(v) (int)(v.size())
#define eps 10e-7

#define F(i, n) for(i = 0; i < n; i++)

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
//LL bigmod(LL B,LL P,LL M){  LL R=1; while(P>0)  {if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;} return R;}

#define MAX 100010


class LittleElephantAndIntervalsDiv2 {
public:
    map <string, int> mp;
    int dp[15][200000][2];
    int m, n;
    point arr[15];
    int call(int indx, string cur, int color)
    {
        if(indx == n)
            return 0;
        int p = 0;
        if(mp.find(cur) == mp.end())
            mp[cur] = m++, p = 1;
        int &ret = dp[indx][mp[cur]][color];
        if(ret != -1)
            return ret += p;
        int a = call(indx + 1, cur, color) + p;
        int b = call(indx + 1, cur, 1 - color) + p;
        a = max(a, b);
        for(int i = arr[indx].x; i <= arr[indx].y; i++)
        {
            if(!color)
                cur[i] = 'B';
            else
                cur[i] = 'W';
        }
        b = call(indx + 1, cur, 1 - color) + p;
        a = max(a, b);
        b = call(indx + 1, cur, color) + p;
        return ret = max(a, b);
    }
	int getNumber(int M, vector <int> L, vector <int> R) {
        int i;
        n = M;
        mp.clear();
        memset(dp, -1, sizeof dp);
        for(i = 0; i < L.size(); i++)
            arr[i].x = L[i], arr[i].y = R[i];
        string s = "";
        for(i = 0; i < n; i++) s += "W";
        return call(0, s, 0) + 1;
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, int p0, vector <int> p1, vector <int> p2, bool hasAnswer, int p3) {
	cout << "Test " << testNum << ": [" << p0 << "," << "{";
	for (int i = 0; int(p1.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p1[i];
	}
	cout << "}" << "," << "{";
	for (int i = 0; int(p2.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p2[i];
	}
	cout << "}";
	cout << "]" << endl;
	LittleElephantAndIntervalsDiv2 *obj;
	int answer;
	obj = new LittleElephantAndIntervalsDiv2();
	clock_t startTime = clock();
	answer = obj->getNumber(p0, p1, p2);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p3 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == p3;
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

	int p0;
	vector <int> p1;
	vector <int> p2;
	int p3;

	{
	// ----- test 0 -----
	p0 = 4;
	int t1[] = {1,2,3};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {1,2,3};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = 8;
	all_right = KawigiEdit_RunTest(0, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}

	{
	// ----- test 1 -----
	p0 = 3;
	int t1[] = {1,1,2};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {3,1,3};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = 4;
	all_right = KawigiEdit_RunTest(1, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}

	{
	// ----- test 2 -----
	p0 = 100;
	int t1[] = {47};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {74};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = 2;
	all_right = KawigiEdit_RunTest(2, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}

	{
	// ----- test 3 -----
	p0 = 100;
	int t1[] = {10,20,50};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {20,50,100};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = 8;
	all_right = KawigiEdit_RunTest(3, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}

	{
	// ----- test 4 -----
	p0 = 42;
	int t1[] = {5,23,4,1,15,2,22,26,13,16};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {30,41,17,1,21,6,28,30,15,19};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = 512;
	all_right = KawigiEdit_RunTest(4, p0, p1, p2, true, p3) && all_right;
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
// Little Elephant from the Zoo of Lviv has some balls arranged in a row. Each ball can be painted in one of two possible colors: black or white. Initially all the balls are painted white.
//
//
//
//
// You are given an int M, which represents the number of balls in the row.
// The balls are numbered from left to right, starting from 1.
// You are also given two vector <int>s L and R.
// To repaint balls, Little Elephant wants to use a robot.
// The robot will paint the balls in several consecutive stages.
// For each i, the i-th stage (1-based index) will look as follows:
// First, the robot will choose one of the two colors: white or black.
// Then, the robot will paint the balls with indices from L[i-1] to R[i-1], inclusive, using the chosen color.
// (Painting a ball covers all previous layers of paint.)
//
//
//
//
// Return the number of different colorings Little Elephant can get after the last stage. (Two colorings are considered different if there exists some ball that is white in one coloring and black in the other one).
//
//
// DEFINITION
// Class:LittleElephantAndIntervalsDiv2
// Method:getNumber
// Parameters:int, vector <int>, vector <int>
// Returns:int
// Method signature:int getNumber(int M, vector <int> L, vector <int> R)
//
//
// CONSTRAINTS
// -M will be between 1 and 100, inclusive.
// -L will contain between 1 and 10 elements, inclusive.
// -R will contain the same number of elements as L.
// -Each element of R will be between 1 and M, inclusive.
// -i-th element of L will be between 1 and R[i], inclusive.
//
//
// EXAMPLES
//
// 0)
// 4
// {1, 2, 3}
// {1, 2, 3}
//
// Returns: 8
//
// In the three stages the robot will choose the color for balls number 1, 2, and 3. The choices are independent of each other. The last, fourth ball will always remain white. Thus there are 2*2*2 = 8 different colorings.
//
// 1)
// 3
// {1, 1, 2}
// {3, 1, 3}
//
// Returns: 4
//
// In the first stage the robot colors all three balls. The color chosen for the first stage does not matter, because in the second stage the robot will repaint ball 1, and in the third stage it will repaint balls 2 and 3.
//
// 2)
// 100
// {47}
// {74}
//
// Returns: 2
//
//
//
// 3)
// 100
// {10, 20, 50}
// {20, 50, 100}
//
// Returns: 8
//
//
//
// 4)
// 42
// {5, 23, 4, 1, 15, 2, 22, 26, 13, 16}
// {30, 41, 17, 1, 21, 6, 28, 30, 15, 19}
//
// Returns: 512
//
//
//
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
