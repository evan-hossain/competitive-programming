#include <bits/stdc++.h>

#define out freopen("output.txt", "w", stdout);
#define in freopen("input.txt", "r", stdin);
#define clr(arr, key) memset(arr, key, sizeof arr)
#define pb push_back
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


class StrongPrimePower {
public:
    bool isPrime(LL n){
        for(int i = 2; i <= sqrt(n); i++)
            if(n % i == 0)
                return false;
        return true;
    }
	vector <int> baseAndExponent(string n) {
	_
	vector <int> ret;
    LL num = extract(n, 1LL);
    for(int i = 2; i < 60; i++){
        LL tem = (LL) round(pow(num, (double) 1.0 / i));
//        cout << tem << endl;
        LL p = 1;
        for(int q = 0; q < i; q++) p *= tem;
        if(!isPrime(tem))
            continue;
//        cout << tem << p << endl;
        if(p == num){
            ret.pb(tem), ret.pb(i);
            break;
        }
    }
    return ret;
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, string p0, bool hasAnswer, vector <int> p1) {
	cout << "Test " << testNum << ": [" << "\"" << p0 << "\"";
	cout << "]" << endl;
	StrongPrimePower *obj;
	vector <int> answer;
	obj = new StrongPrimePower();
	clock_t startTime = clock();
	answer = obj->baseAndExponent(p0);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << "{";
		for (int i = 0; int(p1.size()) > i; ++i) {
			if (i > 0) {
				cout << ",";
			}
			cout << p1[i];
		}
		cout << "}" << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << "{";
	for (int i = 0; int(answer.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << answer[i];
	}
	cout << "}" << endl;
	if (hasAnswer) {
		if (answer.size() != p1.size()) {
			res = false;
		} else {
			for (int i = 0; int(answer.size()) > i; ++i) {
				if (answer[i] != p1[i]) {
					res = false;
				}
			}
		}
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
	vector <int> p1;

	{
	// ----- test 0 -----
	p0 = "27";
	int t1[] = {3,3};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}

	{
//	 ----- test 1 -----
	p0 = "10";
	p1.clear() /*{}*/;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}

	{
	// ----- test 2 -----
	p0 = "7";
	p1.clear() /*{}*/;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}

	{
	// ----- test 3 -----
	p0 = "1296";
	p1.clear() /*{}*/;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}

	{
	// ----- test 4 -----
	p0 = "576460752303423488";
	int t1[] = {2,59};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	all_right = KawigiEdit_RunTest(4, p0, true, p1) && all_right;
	// ------------------
	}

	{
	// ----- test 5 -----
	p0 = "999999874000003969";
	int t1[] = {999999937,2};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	all_right = KawigiEdit_RunTest(5, p0, true, p1) && all_right;
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
//
// NOTE: This problem statement contains superscripts that may not display properly if viewed outside of the applet.
//
//
//
// A number which can be represented as pq, where p is a prime number and q is an integer greater than 0, is called a prime power. If q is larger than 1, we call the number a strong prime power. You are given an integer n.  If n is a strong prime power, return an vector <int> containing exactly two elements.  The first element is p and the second element is q.  If n is not a strong prime power, return an empty vector <int>.
//
//
// DEFINITION
// Class:StrongPrimePower
// Method:baseAndExponent
// Parameters:string
// Returns:vector <int>
// Method signature:vector <int> baseAndExponent(string n)
//
//
// CONSTRAINTS
// -n will contain digits ('0' - '9') only.
// -n will represent an integer between 2 and 10^18, inclusive.
// -n will have no leading zeros.
//
//
// EXAMPLES
//
// 0)
// "27"
//
// Returns: {3, 3 }
//
// 27 = 33. This is a strong prime power.
//
// 1)
// "10"
//
// Returns: { }
//
// 10 = 2 * 5. This is not a strong prime power.
//
// 2)
// "7"
//
// Returns: { }
//
// A prime number is not a strong prime power.
//
// 3)
// "1296"
//
// Returns: { }
//
//
//
// 4)
// "576460752303423488"
//
// Returns: {2, 59 }
//
//
//
// 5)
// "999999874000003969"
//
// Returns: {999999937, 2 }
//
//
//
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
