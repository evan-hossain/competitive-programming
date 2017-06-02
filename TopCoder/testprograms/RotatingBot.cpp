#include <bits/stdc++.h>

#define out freopen("output.txt", "w", stdout);
#define in freopen("input.txt", "r", stdin);
#define clr(arr, key) memset(arr, key, sizeof arr)
#define pb push_back
#define infinity 2147483647
#define LL long long
#define Pi acos(-1)
#define SZ 100010
#define VI vector <int>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

///int col[8] = {0, 1, 1, 1, 0, -1, -1, -1};
///int row[8] = {1, 1, 0, -1, -1, -1, 0, 1};
///int col[4] = {1, 0, -1, 0};
///int row[4] = {0, 1, 0, -1};
///int months[13] = {0, ,31,28,31,30,31,30,31,31,30,31,30,31};

struct point{int x, y;};

template <class T> T sqr(T a){return a * a;};
template <class T> double getdist(T a, T b){return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));}
template <class T> T GCD(T a, T b) {if(b == 0) return a; return GCD(b, a % b);}
template <class T> T LCM(T a, T b) {return (a * b) / GCD(a, b);}

using namespace std;


class RotatingBot {
public:
	int minArea(vector <int> moves) {
	_
		
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <int> p0, bool hasAnswer, int p1) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p0[i];
	}
	cout << "}";
	cout << "]" << endl;
	RotatingBot *obj;
	int answer;
	obj = new RotatingBot();
	clock_t startTime = clock();
	answer = obj->minArea(p0);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p1 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == p1;
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
	
	{
	// ----- test 0 -----
	int t0[] = {15};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 16;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {3,10};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 44;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {1,1,1,1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = -1;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {9,5,11,10,11,4,10};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 132;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	int t0[] = {12,1,27,14,27,12,26,11,25,10,24,9,23,8,22,7,21,6,20,5,19,4,18,3,17,2,16,1,15};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 420;
	all_right = KawigiEdit_RunTest(4, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	int t0[] = {8,6,6,1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = -1;
	all_right = KawigiEdit_RunTest(5, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 6 -----
	int t0[] = {8,6,6};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 63;
	all_right = KawigiEdit_RunTest(6, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 7 -----
	int t0[] = {5,4,5,3,3};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 30;
	all_right = KawigiEdit_RunTest(7, p0, true, p1) && all_right;
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
// NOTE: This problem statement contains images that may not display properly if viewed outside of the applet.
// 
// We had a rectangular grid that consisted of W x H square cells.
// We placed a robot on one of the cells.
// The robot then followed the rules given below.
// 
// 
// Initially, the robot is facing east.
// The robot moves in steps. In each step it moves to the adjacent cell in the direction it currently faces.
// The robot may not leave the grid.
// The robot may not visit the same cell twice. (This also means that it may not reenter the starting cell.)
// If a step forward does not cause the robot to break the above rules, the robot takes the step.
// Otherwise, the robot rotates 90 degrees to the left (counter-clockwise) and checks whether a step forward still breaks the above rules.
//   If not, the robot takes the step and continues executing this program (still rotated in the new direction).
// If the rotation left did not help, the robot terminates the execution of this program.
// We can also terminate the execution of the program manually, at any moment.
// 
// For example, the following seven images show a series of moves made by the robot in a 12 x 11 board:
// 
// 
// We forgot the dimensions of the grid and the original (x,y) coordinates of the cell on which the robot was originally placed, but we do remember its movement. You are given a vector <int> moves. This sequence of positive integers shall be interpreted as follows:
// The robot performed moves[0] steps eastwards, turned left, performed moves[1] steps northwards, turned left, and so on.
// After performing the last sequence of steps, the robot stopped. (Either it detected that it should terminate, or we stopped it manually.) We are not sure if the sequence of moves is valid. If the sequence of moves is impossible, return -1. Else, return the minimum area of a grid in which the sequence of moves is possible.
// (I.e., the return value is the smallest possible value of the product of W and H.).
// 
// DEFINITION
// Class:RotatingBot
// Method:minArea
// Parameters:vector <int>
// Returns:int
// Method signature:int minArea(vector <int> moves)
// 
// 
// CONSTRAINTS
// -moves will contain between 1 and 50 elements, inclusive.
// -Each element of moves will be between 1 and 50, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {15}
// 
// Returns: 16
// 
// The smallest valid board is a 16x1 board, with the robot starting on the west end of the board.
// 
// 1)
// {3,10}
// 
// Returns: 44
// 
// The smallest solution is to place the robot into the southwest corner of a 4 x 11 board.
// 
// 2)
// {1,1,1,1}
// 
// Returns: -1
// 
// This sequence of moves is not possible because the robot would return to its initial location which is forbidden.
// 
// 3)
// {9,5,11,10,11,4,10}
// 
// Returns: 132
// 
// These moves match the image from the problem statement.
// 
// 4)
// {12,1,27,14,27,12,26,11,25,10,24,9,23,8,22,7,21,6,20,5,19,4,18,3,17,2,16,1,15}
// 
// Returns: 420
// 
// 5)
// {8,6,6,1}
// 
// Returns: -1
// 
// 
// 
// 6)
// {8,6,6}
// 
// Returns: 63
// 
// 
// 
// 7)
// {5,4,5,3,3}
// 
// Returns: 30
// 
// 
// 
// END KAWIGIEDIT TESTING


//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!