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

template <class T> T sqr(T a){return a * a;}    // square
template <class T> T power(T n, T p) { T res = 1; for(int i = 0; i < p; i++) res *= n; return res;}     //  n  to the power p
template <class T> double getdist(T a, T b){return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));}    // distance between a and b
template <class T> T extract(string s, T ret) {stringstream ss(s); ss >> ret; return ret;}    // extract words or numbers from a line
template <class T> string tostring(T n) {stringstream ss; ss << n; return ss.str();}    // convert a number to string
template <class T> inline T Mod(T n,T m) {return (n%m+m)%m;}    // negative mod
template <class T> void print_all(T v) {for(int i = 0; i < v.size(); i++) cout << v[i] << ' ';};
template <class T> void print_all(T &v, int len) {for(int i = 0; i < len; i++) cout << v[i] << ' ';}     // prints all elements in a vector or array
template <class T> void print_pair(T v, int len) {for(int i = 0; i < len; i++) cout << v[i].first << ' ' << v[i].second << endl;} // prints pair vector
//LL bigmod(LL B,LL P,LL M){LL R=1; while(P>0)  {if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;} return R;}

#define MAX 100010
/*************************************************HABIJABI ENDS HERE******************************************************/

class EllysScrabble {
public:
    pair<char, int> arr[55], key;
	string getMin(string letters, int maxDistance) {
		int i, j, n = SZ(letters);
		for(i = 0; i < n; i++)
        {
            arr[i].first = letters[i];
            arr[i].second = i;
        }
        for (i=1; i<n; ++i) // use pre-increment to avoid unneccessary temorary object
        {
                key= arr[i];
                j = i-1;
                while((j >= 0) && (arr[j].first > key.first) && abs(arr[j].second - j - 1) <= maxDistance)
                {
                        arr[j+1] = arr[j];
                        j -= 1;
                }
                arr[j+1]=key;
        }
        string ret;
        for(i = 0; i < n; i++)
            ret += arr[i].first;
        return ret;
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
bool KawigiEdit_RunTest(int testNum, string p0, int p1, bool hasAnswer, string p2) {
	cout << "Test " << testNum << ": [" << "\"" << p0 << "\"" << "," << p1;
	cout << "]" << endl;
	EllysScrabble *obj;
	string answer;
	obj = new EllysScrabble();
	clock_t startTime = clock();
	answer = obj->getMin(p0, p1);
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
	bool disabled;
	bool tests_disabled;
	all_right = true;
	tests_disabled = false;

	string p0;
	int p1;
	string p2;

	// ----- test 0 -----
	disabled = false;
	p0 = "TOPCODER";
	p1 = 3;
	p2 = "CODTEPOR";
	all_right = (disabled || KawigiEdit_RunTest(0, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------

	// ----- test 1 -----
	disabled = false;
	p0 = "ESPRIT";
	p1 = 3;
	p2 = "EIPRST";
	all_right = (disabled || KawigiEdit_RunTest(1, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------

	// ----- test 2 -----
	disabled = false;
	p0 = "BAZINGA";
	p1 = 8;
	p2 = "AABGINZ";
	all_right = (disabled || KawigiEdit_RunTest(2, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------

	// ----- test 3 -----
	disabled = false;
	p0 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	p1 = 9;
	p2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	all_right = (disabled || KawigiEdit_RunTest(3, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------

	// ----- test 4 -----
	disabled = false;
	p0 = "GOODLUCKANDHAVEFUN";
	p1 = 7;
	p2 = "CADDGAHEOOFLUKNNUV";
	all_right = (disabled || KawigiEdit_RunTest(4, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------

	// ----- test 5 -----
	disabled = false;
	p0 = "AAAWDIUAOIWDESBEAIWODJAWDBPOAWDUISAWDOOPAWD";
	p1 = 6;
	p2 = "AAAADDEIBWAEUIODWADSBIAJWODIAWDOPOAWDUOSPWW";
	all_right = (disabled || KawigiEdit_RunTest(5, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------

	// ----- test 6 -----
	disabled = false;
	p0 = "ABRACADABRA";
	p1 = 2;
	p2 = "AABARACBDAR";
	all_right = (disabled || KawigiEdit_RunTest(6, p0, p1, true, p2) ) && all_right;
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
// Elly is playing Scrabble with her family. The exact rules of the game are not important for this problem. You only need to know that Elly has a holder that contains a row of N tiles, and that there is a single letter on each of those tiles. (Tiles are small square pieces of wood. A holder is a tiny wooden shelf with room for precisely N tiles placed in a row.)
//
// While Elly waits for the other players, she entertains herself in the following way. She slightly taps the table, causing the tiles on her holder jump a little and some of them switch places.
// Formally, suppose that Elly has N tiles. There are N positions on the holder, we will label them 0 through N-1 from left to right.
// When Elly taps the table, the tiles on her holder will form some permutation of their original order.
// You are given an int maxDistance with the following meaning: in the permutation that Elly produces by tapping the table, no tile will be more than maxDistance positions away from its original position (in either direction).
//
// For example, suppose that before a tap the letters in Elly's holder formed the string "TOPCODER" when read from left to right.
// If maxDistance is 3, one possible string after Elly taps the table is "CODTEPOR".
// This can happen in the following way:
//
// The letter 'T' at position 0 moves three positions to the right (to position 3).
// The letter 'O' at position 1 remains on its initial position (position 1).
// The letter 'P' at position 2 moves three positions to the right (to position 5).
// The letter 'C' at position 3 moves three positions to the left (to position 0).
// The letter 'O' at position 4 moves two positions to the right (to position 6).
// The letter 'D' at position 5 moves three positions to the left (to position 2).
// The letter 'E' at position 6 moves two positions to the left (to position 4).
// The letter 'R' at position 7 remains on its initial position (position 7).
//
// Note that the letter 'D' (at position 5) cannot move to position 1, because this would require it to move more than the maximal distance 3.
//
// It turns out that the string "CODTEPOR" is the lexicographically smallest one Elly can get from "TOPCODER" with a single tap and maxDistance = 3. Now you want to write a program that, given the string letters and the int maxDistance, returns the lexicographically smallest string the girl can get after a single tap.
//
// DEFINITION
// Class:EllysScrabble
// Method:getMin
// Parameters:string, int
// Returns:string
// Method signature:string getMin(string letters, int maxDistance)
//
//
// NOTES
// -Given two different strings A and B of equal length, the lexicographically smaller one is the one that contains a smaller character at the first position where they differ.
//
//
// CONSTRAINTS
// -letters will contain between 1 and 50 characters, inclusive.
// -letters will contain only uppercase letters from the English alphabet ('A'-'Z').
// -maxDistance will be between 1 and 9, inclusive.
//
//
// EXAMPLES
//
// 0)
// "TOPCODER"
// 3
//
// Returns: "CODTEPOR"
//
// The example from the problem statement.
//
// 1)
// "ESPRIT"
// 3
//
// Returns: "EIPRST"
//
// In this example the letters 'E', 'P', 'R', and 'T' stay on their initial places, and the letters 'S' and 'I' swap. Since the distance between them is exactly 3 (which also happens to be the maximal distance they can move), this is a valid final configuration.
//
// 2)
// "BAZINGA"
// 8
//
// Returns: "AABGINZ"
//
// Note that the maximal distance may be greater than the number of letters Elly has. In such cases, the lexicographically smallest result is, obviously, the sorted sequence of letters.
//
// 3)
// "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
// 9
//
// Returns: "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
//
// As the input letters are already sorted, we can assume they'll just fall back to their initial places.
//
// 4)
// "GOODLUCKANDHAVEFUN"
// 7
//
// Returns: "CADDGAHEOOFLUKNNUV"
//
//
//
// 5)
// "AAAWDIUAOIWDESBEAIWODJAWDBPOAWDUISAWDOOPAWD"
// 6
//
// Returns: "AAAADDEIBWAEUIODWADSBIAJWODIAWDOPOAWDUOSPWW"
//
//
//
// 6)
// "ABRACADABRA"
// 2
//
// Returns: "AABARACBDAR"
//
//
// The letter 'A' at position 0 remains on its initial place (position 0).
// The letter 'B' at position 1 moves one position to the right (to position 2).
// The letter 'R' at position 2 moves two positions to the right (to position 4).
// The letter 'A' at position 3 moves two positions to the left (to position 1).
// The letter 'C' at position 4 moves two positions to the right (to position 6).
// The letter 'A' at position 5 moves two positions to the left (to position 3).
// The letter 'D' at position 6 moves two positions to the right (to position 8).
// The letter 'A' at position 7 moves two positions to the left (to position 5).
// The letter 'B' at position 8 moves one position to the left (to position 7).
// The letter 'R' at position 9 moves one position to the right (to position 10).
// The letter 'A' at position 10 moves one position to the left (to position 9).
//
//
// END KAWIGIEDIT TESTING
//Powered by KawigiEdit-pf 2.3.0!
