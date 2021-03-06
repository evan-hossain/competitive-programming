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
template <class T> string tostring(T n) {stringstream ss; ss << n; return ss.str;}    // convert a number to string
template <class T> inline T Mod(T n,T m) {return (n%m+m)%m;}    // negative mod
template <class T> void print_all(T v) {for(int i = 0; i < v.size(); i++) cout << v[i] << ' ';};
template <class T> void print_all(T &v, int len) {for(int i = 0; i < len; i++) cout << v[i] << ' ';}     // prints all elements in a vector or array
template <class T> void print_pair(T v, int len) {for(int i = 0; i < len; i++) cout << v[i].first << ' ' << v[i].second << endl;} // prints pair vector
//LL bigmod(LL B,LL P,LL M){  LL R=1; while(P>0)  {if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;} return R;}

#define SZ 1000010
/*************************************************HABIJABI ENDS HERE******************************************************/


class LittleElephantAndBooks {
public:
	int getNumber(vector <int> pages, int number) {

	_
	sort(all(pages));
	int lazy= 0;
	for(int i = 0; i < number; i++)
        lazy += pages[i];
    int ele = 0, mn = infinity;
    for(int i = 0; i < number; i++)
    {
        for(int j = number; j < pages.size(); j++)
        {
            ele = lazy - pages[i] + pages[number];
            if(ele > lazy)
                mn = min(ele, mn);
        }
    }
    return mn;
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
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
	LittleElephantAndBooks *obj;
	int answer;
	obj = new LittleElephantAndBooks();
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

	vector <int> p0;
	int p1;
	int p2;

	{
	// ----- test 0 -----
	int t0[] = {1,2};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 1;
	p2 = 2;
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}

	{
	// ----- test 1 -----
	int t0[] = {74,7,4,47,44};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 3;
	p2 = 58;
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}

	{
	// ----- test 2 -----
	int t0[] = {3,1,9,7,2,8,6,4,5};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 7;
	p2 = 29;
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}

	{
	// ----- test 3 -----
	int t0[] = {74,86,32,13,100,67,77};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 2;
	p2 = 80;
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
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
// Little Elephant from the Zoo of Lviv has a bunch of books.
// You are given a vector <int> pages.
// Each element of pages is the number of pages in one of those books.
// There are no two books with the same number of pages.
//
//
//
//
// You are also given a int number.
// As a homework from the teacher, Little Elephant must read exactly number of his books during the summer.
// (Little Elephant has strictly more than number books.)
//
//
//
//
// All other elephants in the school also got the exact same homework.
// Little Elephant knows that the other elephants are lazy:
// they will simply pick the shortest number books, so that they have to read the smallest possible total number of pages.
// Little Elephant wants to be a good student and read a bit more than the other elephants.
// He wants to pick the subset of books with the second smallest number of pages.
// In other words, he wants to pick a subset of books with the following properties:
//
// There are exactly number books in the chosen subset.
// The total number of pages of those books is greater than the smallest possible total number of pages.
// The total number of pages of those books is as small as possible (given the above conditions).
//
//
//
//
//
// Return the total number of pages Little Elephant will have to read.
//
//
// DEFINITION
// Class:LittleElephantAndBooks
// Method:getNumber
// Parameters:vector <int>, int
// Returns:int
// Method signature:int getNumber(vector <int> pages, int number)
//
//
// CONSTRAINTS
// -pages will contain between 2 and 50 elements, inclusive.
// -Each element of pages will be between 1 and 100, inclusive.
// -There will be no two equal elements in pages.
// -number will be between 1 and N-1, inclusive, where N is the number of elements in pages.
//
//
// EXAMPLES
//
// 0)
// {1, 2}
// 1
//
// Returns: 2
//
// There are two books: one with 1 page, the other with 2 pages.
// As number=1, each of the elephants has to read one book.
// The lazy elephants will read the 1-page book, so our Little Elephant should read the 2-page one.
// Thus, the number of pages read by Little Elephant is 2.
//
// 1)
// {74, 7, 4, 47, 44}
// 3
//
// Returns: 58
//
// The lazy elephants will read books 1, 2, and 4 (0-based indices).
// Their total number of pages is 7+4+44 = 55.
// Little Elephant should pick books 1, 2, and 3, for a total of 7+4+47 = 58 pages.
// (Note that Little Elephant is allowed to pick any subset, except for the minimal one.
// In particular, he may read some of the books read by the other elephants.)
//
// 2)
// {3, 1, 9, 7, 2, 8, 6, 4, 5}
// 7
//
// Returns: 29
//
//
//
// 3)
// {74, 86, 32, 13, 100, 67, 77}
// 2
//
// Returns: 80
//
//
//
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
