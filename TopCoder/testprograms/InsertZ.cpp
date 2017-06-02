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


class InsertZ {
public:
	string canTransform(string init, string goal) {
	_
		string tem;
		for(int i = 0; i < goal.size(); i++){
            if(goal[i] == 'z')
                continue;
            tem += goal[i];
		}
		if(tem == init)
            return "Yes";
        return "No";
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, string p0, string p1, bool hasAnswer, string p2) {
	cout << "Test " << testNum << ": [" << "\"" << p0 << "\"" << "," << "\"" << p1 << "\"";
	cout << "]" << endl;
	InsertZ *obj;
	string answer;
	obj = new InsertZ();
	clock_t startTime = clock();
	answer = obj->canTransform(p0, p1);
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

	string p0;
	string p1;
	string p2;

	{
	// ----- test 0 -----
	p0 = "fox";
	p1 = "fozx";
	p2 = "Yes";
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}

	{
	// ----- test 1 -----
	p0 = "fox";
	p1 = "zfzoxzz";
	p2 = "Yes";
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}

	{
	// ----- test 2 -----
	p0 = "foon";
	p1 = "foon";
	p2 = "Yes";
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}

	{
	// ----- test 3 -----
	p0 = "topcoder";
	p1 = "zopzoder";
	p2 = "No";
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}

	{
	// ----- test 4 -----
	p0 = "aaaaaaaaaa";
	p1 = "a";
	p2 = "No";
	all_right = KawigiEdit_RunTest(4, p0, p1, true, p2) && all_right;
	// ------------------
	}

	{
	// ----- test 5 -----
	p0 = "mvixrdnrpxowkasufnvxaq";
	p1 = "mvizzxzzzrdzznzrpxozzwzzkazzzszzuzzfnvxzzzazzq";
	p2 = "Yes";
	all_right = KawigiEdit_RunTest(5, p0, p1, true, p2) && all_right;
	// ------------------
	}

	{
	// ----- test 6 -----
	p0 = "opdlfmvuicjsierjowdvnx";
	p1 = "zzopzdlfmvzuicjzzsizzeijzowvznxzz";
	p2 = "No";
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
//
// You are given two strings: init and goal.
// Both init and goal contain lowercase letters only.
// Additionally, init does not contain the character 'z'.
//
//
// Your goal is to transform init into goal.
// The only operation you are allowed to do is to insert the character 'z' anywhere into init.
// You can repeat the operation as many times as you want, and each time you can choose any position where to insert the 'z'.
//
//
// For example, if init="fox", you can transform it to "fzox" in one operation.
// Alternately, you can transform "fox" into "zzzfoxzzz" in six operations.
// It is not possible to transform "fox" into any of the strings "fx", "foz", "fxo", "foxy".
//
//
// Return "Yes" (quotes for clarity) if it is possible to transform init into goal.
// Otherwise, return "No".
//
//
//
// DEFINITION
// Class:InsertZ
// Method:canTransform
// Parameters:string, string
// Returns:string
// Method signature:string canTransform(string init, string goal)
//
//
// NOTES
// -Note that the return value is case sensitive.
//
//
// CONSTRAINTS
// -init and goal will each contain between 1 and 50 characters, inclusive.
// -Each character of init and goal will be a lowercase letter ('a'-'z').
// -init will not contain the letter 'z'.
//
//
// EXAMPLES
//
// 0)
// "fox"
// "fozx"
//
// Returns: "Yes"
//
// By inserting 'z' to the position bettween 'o' and 'x' in "fox", we obtain "fozx".
//
// 1)
// "fox"
// "zfzoxzz"
//
// Returns: "Yes"
//
// You may perform the operation multiple times.
//
// 2)
// "foon"
// "foon"
//
// Returns: "Yes"
//
// In this case init and goal are equal. You do not have to perform the operation.
//
// 3)
// "topcoder"
// "zopzoder"
//
// Returns: "No"
//
//
//
// 4)
// "aaaaaaaaaa"
// "a"
//
// Returns: "No"
//
//
//
// 5)
// "mvixrdnrpxowkasufnvxaq"
// "mvizzxzzzrdzznzrpxozzwzzkazzzszzuzzfnvxzzzazzq"
//
// Returns: "Yes"
//
//
//
// 6)
// "opdlfmvuicjsierjowdvnx"
// "zzopzdlfmvzuicjzzsizzeijzowvznxzz"
//
// Returns: "No"
//
//
//
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!