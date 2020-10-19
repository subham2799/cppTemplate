#define fo(i,n) for(int i=0;i<n;i++)
#define ll long long
#define in(n) scanf("%d",&n)
#define lin(n) scanf("%ld",&n)
#define deb(n) cout << "x = " << x << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))   
#define tr(it,a) for(auto it = a.begin();it!=a.end();it++)
typedef pair<int, int> pii;
typedef pair<ll, ll>   pll;
typedef vector<int>    vi;
typedef vector<ll>     vll;
typedef vector<pii>    vpii;
typedef vector<pll>    vpll;
typedef vector<vi>     vvi;
typedef vector<vll>    vvll;
const int mod = 1000000007;

void dfs(vi adj[], int start, bool visit[]);

void ingraph(vi g[],int n);

int main(){
    int t, i, j, k, l, p, q , r;

    return 0;
}

void ingraph(vi g[],int n){
    int x,y;
    while(n--){
        cin>>x>>y;
        g[x].pb(y);//for 0 based indexed input
        g[y].pb(x);
    }
}

void dfs(vi adj[], int start, bool visit[]){
    visit[start] = true;
    cout << start << " ";
    for(int i:adj[start]){
        if(i==start)
            continue;
        if(visit[i]==false)
            dfs(adj, i, visit);
    } 
}
