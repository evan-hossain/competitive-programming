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
#define infinity 21474836
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
/*************************************************HABIJABI ENDS HERE******************************************************/


class LittleElephantAndString {
public:
	int getNumber(string A, string B) {
		string tema = A, temb = B, build;
		sort(all(tema));
		sort(all(temb));
		if(tema != temb)
            return -1;
        int n = SZ(B);
        if(n == 1)
            return 0;
        int i, j, cnt = 0;
        i = j = n - 1;
        while(i >= 0)
        {
            if(A[i] == B[j])
                i--, j--;
            else
                cnt++, i--;
        }
        return cnt;
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, string p0, string p1, bool hasAnswer, int p2) {
	cout << "Test " << testNum << ": [" << "\"" << p0 << "\"" << "," << "\"" << p1 << "\"";
	cout << "]" << endl;
	LittleElephantAndString *obj;
	int answer;
	obj = new LittleElephantAndString();
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
	all_right = true;

	string p0;
	string p1;
	int p2;

	{
	// ----- test 0 -----
	p0 = "ABC";
	p1 = "CBA";
	p2 = 2;
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}

	{
	// ----- test 1 -----
	p0 = "A";
	p1 = "B";
	p2 = -1;
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}

	{
	// ----- test 2 -----
	p0 = "AAABBB";
	p1 = "BBBAAA";
	p2 = 3;
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}

	{
	// ----- test 3 -----
	p0 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	p1 = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
	p2 = 25;
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}

	{
	// ----- test 4 -----
	p0 = "A";
	p1 = "A";
	p2 = 0;
	all_right = KawigiEdit_RunTest(4, p0, p1, true, p2) && all_right;
	// ------------------
	}

	{
	// ----- test 5 -----
	p0 = "DCABA";
	p1 = "DACBA";
	p2 = 2;
	all_right = KawigiEdit_RunTest(5, p0, p1, true, p2) && all_right;
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
// Little Elephant from the Zoo of Lviv likes strings.
//
//
//
//
// You are given a string A and a string B of the same length. In one turn Little Elephant can choose any character of A and move it to the beginning of the string (i.e., before the first character of A). Return the minimal number of turns needed to transform A into B. If it's impossible, return -1 instead.
//
//
// DEFINITION
// Class:LittleElephantAndString
// Method:getNumber
// Parameters:string, string
// Returns:int
// Method signature:int getNumber(string A, string B)
//
//
// CONSTRAINTS
// -A will contain between 1 and 50 characters, inclusive.
// -B will contain between 1 and 50 characters, inclusive.
// -A and B will be of the same length.
// -A and B will consist of uppercase letters ('A'-'Z') only.
//
//
// EXAMPLES
//
// 0)
// "ABC"
// "CBA"
//
// Returns: 2
//
// The optimal solution is to make two turns. On the first turn, choose character 'B' and obtain string "BAC". On the second turn, choose character 'C' and obtain "CBA".
//
// 1)
// "A"
// "B"
//
// Returns: -1
//
// In this case, it's impossible to transform A into B.
//
// 2)
// "AAABBB"
// "BBBAAA"
//
// Returns: 3
//
//
//
// 3)
// "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
// "ZYXWVUTSRQPONMLKJIHGFEDCBA"
//
// Returns: 25
//
//
//
// 4)
// "A"
// "A"
//
// Returns: 0
//
//
//
// 5)
// "DCABA"
// "DACBA"
//
// Returns: 2
//
//
//
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
