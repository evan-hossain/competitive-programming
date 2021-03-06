#include <algorithm>
#include <iostream>
#include <sstream>
#include <climits>
#include <cstring>
#include <cassert>
#include <utility>
#include <cstdio>
#include <limits>
#include <string>
#include <vector>
#include <cmath>
#include <stack>
#include <ctime>
#include <queue>
#include <set>
#include <map>

#define in freopen("input.in", "r", stdin);
#define out freopen("control.out", "w", stdout);
#define clr(arr, key) memset(arr, key, sizeof arr)
#define pb push_back
#define mp(a, b) make_pair(a, b)
#define mt       make_tuple
#define infinity (1 << 28)
#define LL long long
#define PI acos(-1)
#define gcd(a, b) __gcd(a, b)
#define CF ios_base::sync_with_stdio(0);cin.tie(0);
#define lcm(a, b) ((a)*((b)/gcd(a,b)))
#define all(v) v.begin(), v.end()
#define no_of_ones __builtin_popcount // __builtin_popcountll for LL
#define SZ(v) (int)(v.size())
#define eps 1e-7

int col8[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int row8[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int col4[4] = {1, 0, -1, 0};
int row4[4] = {0, 1, 0, -1};
//int months[13] = {0, ,31,28,31,30,31,30,31,31,30,31,30,31};

using namespace std;

//struct point{int x, y; point () {} point(int a, int b) {x = a, y = b;}};
template <class T> T sqr(T a){return a * a;}
template <class T> T power(T n, T p) { T res = 1; for(int i = 0; i < p; i++) res *= n; return res;}
template <class T> double getdist(T a, T b){return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));}    // distance between a and b
template <class T> T extract(string s, T ret) {stringstream ss(s); ss >> ret; return ret;}
template <class T> string tostring(T n) {stringstream ss; ss << n; return ss.str();}
//LL bigmod(LL B,LL P,LL M){LL R=1; while(P>0)  {if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;} return R;}
struct fast{fast(){ios_base::sync_with_stdio(0);cin.tie(0);}}cincout;

#define MAX 200010
/***********************************THE GRASS IS ALWAYS GREENER ON THE OTHER SIDE***********************************/

string s;
int x, y, dp[MAX][2][2];

int call(int indx, int chhoto, int start)
{
	// cout << indx << ' ' << chhoto << ' ' << start << endl;
	if(indx == SZ(s))
	{
		// cout << "start: " << start << endl;
		return start;
	}
	int &ret = dp[indx][chhoto][start];
	if(~ret) return ret;
	ret = 0;
	if(chhoto)
		return ret = call(indx+1, chhoto, start || (y>0));
	if(y <= (s[indx]-'0'))
	{
		ret = call(indx+1, y < (s[indx]-'0'), start || (y > 0));
		// cout << "y: " << y << endl;
	}
	else if(x <= (s[indx]-'0'))
	{
		ret = max(ret, call(indx+1, x < (s[indx]-'0'), start || (x > 0)));
		// cout << "x: " << x << endl;
	}
	else if(start == 0)
		ret = max(ret, call(indx+1, (s[indx]-'0') > 0, 0));
	// cout << x << ' ' << y << ' ' << (s[indx]-'0') << endl;
	return ret;
}

string print(int indx, int chhoto, int start)
{
	if(indx == SZ(s))
		return "";
	if(chhoto && call(indx+1, chhoto, start || (y>0)))
		return tostring(y) + print(indx+1, chhoto, start || (y>0));
	if(y <= (s[indx]-'0') && call(indx+1, y < (s[indx]-'0'), start || (y > 0)))
	{
		return tostring(y) + print(indx+1, y < (s[indx]-'0'), start || (y > 0));
		// cout << "y: " << y << endl;
	}
	if(x <= (s[indx]-'0') && call(indx+1, x < (s[indx]-'0'), start || (x > 0)))
	{
		return tostring(x) + print(indx+1, x < (s[indx]-'0'), start || (x > 0));
		// cout << "x: " << x << endl;
	}
	if(start == 0 && call(indx+1, (s[indx]-'0') > 0, 0))
		return tostring(0) + print(indx+1, (s[indx]-'0') > 0, 0);
	assert(0);
}

string cut_leading_zeros(string s)
{
	int i;
	for(i = 0; i < SZ(s); i++)
		if(s[i] != '0')
			break;
	return s.substr(i);
}

int main()
{
	in;
	cin >> s >> x >> y;
	if(x > y)
		swap(x, y);
	clr(dp, -1);
	int res = call(0, 0, 0);
	if(res == 0)
	{
		cout << -1;
		return 0;
	}	
	string ans = print(0, 0, 0);
	cout << cut_leading_zeros(ans);
    return 0;
}
// clang++ -std=c++11 -stdlib=libc++ 















