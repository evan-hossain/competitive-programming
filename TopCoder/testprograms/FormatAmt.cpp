#include <bits/stdc++.h>

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

#define SZ 1000010
/*************************************************HABIJABI ENDS HERE******************************************************/



class FormatAmt {
public:
	string amount(int dollars, int cents) {
	_
    string s;
    string dol = tostring(dollars);
    string cen = tostring(cents);
    if(dollars < 1)
    {
        s = "$0.";
        if(cents < 10)
            s += "0";
        s += tostring(cents);
        return s;
    }
    if(cents < 10)
            s += "0";
        s += cen;
    reverse(all(s));
    s += ".";
    for(int i = dol.size() - 1, j = 0; i >= 0; i--, j++)
    {
        s += dol[i];
        if(j % 3 == 2)
            s += ",";
    }
    if(dol.size() % 3 == 0)
        s.resize(s.size() - 1);
    s += "$";
    reverse(all(s));
    return s;
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, int p0, int p1, bool hasAnswer, string p2) {
	cout << "Test " << testNum << ": [" << p0 << "," << p1;
	cout << "]" << endl;
	FormatAmt *obj;
	string answer;
	obj = new FormatAmt();
	clock_t startTime = clock();
	answer = obj->amount(p0, p1);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << "\"" << p2 << "\"" << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << "\"" << answer << "\"" << endl;
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

	int p0;
	int p1;
	string p2;

	{
	// ----- test 0 -----
	p0 = 123456;
	p1 = 0;
	p2 = "$123,456.00";
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}

	{
	// ----- test 1 -----
	p0 = 49734321;
	p1 = 9;
	p2 = "$49,734,321.09";
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}

	{
	// ----- test 2 -----
	p0 = 0;
	p1 = 99;
	p2 = "$0.99";
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}

	{
	// ----- test 3 -----
	p0 = 249;
	p1 = 30;
	p2 = "$249.30";
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}

	{
	// ----- test 4 -----
	p0 = 1000;
	p1 = 1;
	p2 = "$1,000.01";
	all_right = KawigiEdit_RunTest(4, p0, p1, true, p2) && all_right;
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
// In documents, it is frequently necessary to write monetary amounts in a
// standard format.  We have decided to format amounts as follows:
//     the amount must start with '$'
//     the amount should have a leading '0' if and only if it is less then 1 dollar.
//     the amount must end with a decimal point and exactly 2 following digits.
//     the digits to the left of the decimal point must be separated into groups of three by commas (a group of one or two digits may appear on the left).
//
//
// Create a class FormatAmt that contains a method amount that takes two int's, dollars and cents, as inputs and returns the properly formatted string.
//
//
//
// DEFINITION
// Class:FormatAmt
// Method:amount
// Parameters:int, int
// Returns:string
// Method signature:string amount(int dollars, int cents)
//
//
// NOTES
// -One dollar is equal to 100 cents.
//
//
// CONSTRAINTS
// -dollars will be between 0 and 2,000,000,000 inclusive
// -cents will be between 0 and 99 inclusive
//
//
// EXAMPLES
//
// 0)
// 123456
// 0
//
// Returns: "$123,456.00"
//
// Note that there is no space between the $ and the first digit.
//
// 1)
// 49734321
// 9
//
// Returns: "$49,734,321.09"
//
// 2)
// 0
// 99
//
// Returns: "$0.99"
//
// Note the leading 0.
//
// 3)
// 249
// 30
//
// Returns: "$249.30"
//
// 4)
// 1000
// 1
//
// Returns: "$1,000.01"
//
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
