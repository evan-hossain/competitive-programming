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
#define all(v) v.begin(), v.end()

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

///int col[8] = {0, 1, 1, 1, 0, -1, -1, -1};
///int row[8] = {1, 1, 0, -1, -1, -1, 0, 1};
///int col[4] = {1, 0, -1, 0};
///int row[4] = {0, 1, 0, -1};
///int months[13] = {0, ,31,28,31,30,31,30,31,31,30,31,30,31};

using namespace std;

struct point{int x, y;};

template <class T> T sqr(T a){return a * a;};
template <class T> double getdist(T a, T b){return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));}
template <class T> T GCD(T a, T b) {if(b == 0) return a; return GCD(b, a % b);}
template <class T> T LCM(T a, T b) {return (a * b) / GCD(a, b);}
template <class T> T extract(string s, T ret) {stringstream ss(s); ss >> ret; return ret;}
template <class T> string tostr(T n) {stringstream ss; ss << n; return ss.str();}

class MissingDigits {
public:
	string isAllowed(vector <int> notAllowed, int roomNumber) {
	    _
		vector <string> V;
		for(int i = 0; i < notAllowed.size(); i++){
            string tem;
            stringstream I, elem;
            I << i;
            tem += I.str();
            elem << notAllowed[i];
            tem += elem.str();
            V.pub(tem);
		}
		string num = tostr(roomNumber);
        for(int j = 0; j < V.size(); j++){
                for(int i = 0; i < num.size(); i++){
                    for(int k = 0; k < num.size(); k++){
                        if(V[j] == num.substr(i, k) || V[j] == num)
                            return "NO";
                    }
                }
        }
		return "YES";
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <int> p0, int p1, bool hasAnswer, string p2) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p0[i];
	}
	cout << "}" << "," << p1;
	cout << "]" << endl;
	MissingDigits *obj;
	string answer;
	obj = new MissingDigits();
	clock_t startTime = clock();
	answer = obj->isAllowed(p0, p1);
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

	vector <int> p0;
	int p1;
	string p2;

	{
	// ----- test 0 -----
	int t0[] = {1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 101;
	p2 = "NO";
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}

	{
	// ----- test 1 -----
	int t0[] = {1,33,7};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 7133;
	p2 = "NO";
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}

	{
	// ----- test 2 -----
	int t0[] = {1,32,67};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 267;
	p2 = "NO";
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}

	{
	// ----- test 3 -----
	int t0[] = {1,33,7};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 68;
	p2 = "YES";
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}

	{
	// ----- test 4 -----
	int t0[] = {0};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 0;
	p2 = "YES";
	all_right = KawigiEdit_RunTest(4, p0, p1, true, p2) && all_right;
	// ------------------
	}

	{
	// ----- test 5 -----
	int t0[] = {1245,2481,1271,1463,557,1544,1462,1710,988,2167,1013,736,1816,702,388,207,333,27,349,1659,1818,1227,1893,1916,1430,1630,893,651,2142,987,631,2290,1267,656,1912,343,1339,1938,753,2150,576,76,801,1270,2266,2415,188,1595,1749,2019};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 2026595;
	p2 = "YES";
	all_right = KawigiEdit_RunTest(5, p0, p1, true, p2) && all_right;
	// ------------------
	}

	{
	// ----- test 6 -----
	int t0[] = {1245,2481,1271,1463,557,1544,1462,1710,988,2167,1013,736,1816,702,388,207,333,27,349,1659,1818,1227,1893,1916,1430,1630,893,651,2142,987,631,2290,1267,656,1912,343,1339,1938,753,2150,576,76,801,1270,2266,2415,188,1595,1749,2019};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 4312703;
	p2 = "NO";
	all_right = KawigiEdit_RunTest(6, p0, p1, true, p2) && all_right;
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
// You are opening a new hotel and are in the process of numbering the rooms.  Being a superstitious person, you don't want to allow certain numbers. You are given an vector <int> notAllowed containing an encoded list of forbidden sequences. The ith forbidden sequence (where i is a 0-based index) is the concatenation of decimal representations of i and notAllowed[i] (both with no extra leading zeros).  For example, if the 0th element of notAllowed is 33, then "033" is a forbidden sequence.  A room number is not allowed if its decimal string representation, with no extra leading zeroes, contains any of the forbidden sequences as a substring.  Given an int roomNumber, return "YES" if the room number is allowed, and "NO" otherwise (all quotes for clarity).
//
// DEFINITION
// Class:MissingDigits
// Method:isAllowed
// Parameters:vector <int>, int
// Returns:string
// Method signature:string isAllowed(vector <int> notAllowed, int roomNumber)
//
//
// CONSTRAINTS
// -notAllowed will contain between 0 and 50 elements, inclusive.
// -Each element of notAllowed will be between 0 and 10000000, inclusive.
// -roomNumber will be between 0 and 10000000, inclusive.
//
//
// EXAMPLES
//
// 0)
// {1}
// 101
//
// Returns: "NO"
//
// Since element 0 of notAllowed is 1, 01 is forbidden. Hence 101 is not a valid room number.
//
// 1)
// {1,33,7}
// 7133
//
// Returns: "NO"
//
// Element 1 of notAllowed is 33, so 133 is forbidden.
//
// 2)
// {1,32,67}
// 267
//
// Returns: "NO"
//
// Element 2 of notAllowed is 67, so 267 is forbidden.
//
// 3)
// {1,33,7}
// 68
//
// Returns: "YES"
//
//
//
// 4)
// {0}
// 0
//
// Returns: "YES"
//
// "00" is forbidden, but single 0 is allowed.
//
// 5)
// {1245,2481,1271,1463,557,1544,1462,1710,988,2167,
//  1013,736,1816,702,388,207,333,27,349,1659,1818,
//  1227,1893,1916,1430,1630,893,651,2142,987,631,
//  2290,1267,656,1912,343,1339,1938,753,2150,576,
//  76,801,1270,2266,2415,188,1595,1749,2019}
// 2026595
//
// Returns: "YES"
//
//
//
// 6)
// {1245,2481,1271,1463,557,1544,1462,1710,988,2167,
//  1013,736,1816,702,388,207,333,27,349,1659,1818,
//  1227,1893,1916,1430,1630,893,651,2142,987,631,
//  2290,1267,656,1912,343,1339,1938,753,2150,576,
//  76,801,1270,2266,2415,188,1595,1749,2019}
// 4312703
//
// Returns: "NO"
//
//
//
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
