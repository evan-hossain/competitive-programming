#include <bits/stdc++.h>

#define in freopen("input.txt", "r", stdin);
#define out freopen("output.txt", "w", stdout);
#define clr(arr, key) memset(arr, key, sizeof arr)
#define pb push_back
#define mp(a, b) make_pair(a, b)
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

//int col[8] = {0, 1, 1, 1, 0, -1, -1, -1};
//int row[8] = {1, 1, 0, -1, -1, -1, 0, 1};
//int col[4] = {1, 0, -1, 0};
//int row[4] = {0, 1, 0, -1};
//int months[13] = {0, ,31,28,31,30,31,30,31,31,30,31,30,31};

using namespace std;

struct point{int x, y; point () {} point(int a, int b) {x = a, y = b;}};
template <class T> T sqr(T a){return a * a;}
template <class T> T power(T n, T p) { T res = 1; for(int i = 0; i < p; i++) res *= n; return res;}
template <class T> double getdist(T a, T b){return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));}    // distance between a and b
template <class T> T extract(string s, T ret) {stringstream ss(s); ss >> ret; return ret;}
template <class T> string tostring(T n) {stringstream ss; ss << n; return ss.str();}
//LL bigmod(LL B,LL P,LL M){LL R=1; while(P>0)  {if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;} return R;}
struct fast{fast(){ios_base::sync_with_stdio(0);cin.tie(0);}}cincout;

#define MAX 100010
/***********************************THE GRASS IS ALWAYS GREENER ON THE OTHER SIDE***********************************/

int low[MAX], tim[MAX], col[MAX], no_of_component, n, timer, group_id[MAX];
vector <int> adj[MAX];
stack <int> st;
void scc(int u)
{
    low[u] = tim[u] = timer++;
    col[u] = 1;
    st.push(u);
    int i, elements = adj[u].size(), v, tem;
    for(i = 0; i < elements; i++)
    {
        v = adj[u][i];
        if(col[v] == 1)
            low[u] = min(low[u], tim[v]);
        else if(col[v] == 0)
        {
            scc(v);
            low[u] = min(low[u], low[v]);
        }
    }
    if(low[u] == tim[u])
    {
        do
        {
            tem = st.top();
            st.pop();
            group_id[tem]=no_of_component;
            col[tem] = 2;
        }
        while(tem != u);
        no_of_component++;
    }
}

LL val[MAX], res[MAX], visited;

void call_for_scc_check()
{
    no_of_component = timer = 0;
    for(int i = 0; i <= n; i++)
        col[i] = 0, res[i] = 0, visited[i] = 0;
    int i;
    while(!st.empty()) st.pop();
    for(i = 0; i < n; i++)
    {
        if(col[i] == 0)
            scc(i);
    }
}

void make_new_DAG()
{
    int i,j,u,v;

    for(i = 0; i < no_of_component; i++) dag[i].clear();

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < SZ(adj[i]); j++)
        {
            u=group_id[i];
            v=group_id[adj[i][j]];
            if(u!=v)
                dag[u].pb(v);
        }
    }
}

LL dfs(int node)
{
    if(visited[node])
        return res[node];
    for(auto x: dag[node])
        res[node] += dfs(x);
    return res[node];
}


int main()
{
    #ifdef Evan
//        in;
//        out;
    #endif
    int test, i, u, v;
    cin >> test;
    while(test--)
    {
        cin >> n;
        for(i = 0; i <= n; i++)
        {
            adj[i].clear();
            low[i] = tim[i] = group_id = 0;
        }
        for(i = 0; i < n; i++)
        {
            cin >> u;
            u--;
            adj[i].pb(u);
        }
        for(i = 0; i < n; i++)
            cin >> val[i];
        call_for_scc_check();
        for(i = 0; i <= n; i++)
            res[group_id[i]] += val[i];
        make_new_DAG();
        for(i = 0; i < no_of_component; i++)
            dfs(i, -1);
    }
    return 0;
}