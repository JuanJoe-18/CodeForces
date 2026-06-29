#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(0)
typedef pair<int,int> pii;
const int INF = 1e9;
const int MAXN = 1005; //va a servir este codigo como templates para preoblemas futuros


int n, m; string grid[MAXN];
int dM[MAXN][MAXN], dA[MAXN][MAXN];
char par[MAXN][MAXN];
int dx[]={-1,1,0,0}, dy[]={0,0,-1,1};
char dc[]={'U','D','L','R'};

bool ok(int r,int c){ return r>=0&&r<n&&c>=0&&c<m&&grid[r][c]!='#'; }

void multiBFS(vector<pii>& src, int d[MAXN][MAXN]){
    queue<pii> q;
    for(auto&[r,c]:src){ d[r][c]=0; q.push({r,c}); }
    while(!q.empty()){
        auto[r,c]=q.front(); q.pop();
        for(int i=0;i<4;i++){
            int nr=r+dx[i],nc=c+dy[i];
            if(ok(nr,nc)&&d[r][c]+1<d[nr][nc]){
                d[nr][nc]=d[r][c]+1; q.push({nr,nc});
            }
        }
    }
}

pii escape(pii s){
    queue<pii> q; q.push(s); dA[s.first][s.second]=0;
    while(!q.empty()){
        auto[r,c]=q.front(); q.pop();
        if(r==0||r==n-1||c==0||c==m-1) return {r,c};
        for(int i=0;i<4;i++){
            int nr=r+dx[i],nc=c+dy[i];
            if(ok(nr,nc)&&dA[r][c]+1<dA[nr][nc]&&dA[r][c]+1<dM[nr][nc]){
                dA[nr][nc]=dA[r][c]+1; par[nr][nc]=dc[i]; q.push({nr,nc});
            }
        }
    }
    return {-1,-1};
}


string buildPath(pii end, pii start){
    string p; auto[r,c]=end;
    while(make_pair(r,c)!=start){
        char d=par[r][c]; p+=d;
        if(d=='U')r++; else if(d=='D')r--; else if(d=='L')c++; else c--;
    }
    reverse(p.begin(),p.end());
    return p;
}

int main(){
    fastio;
    cin>>n>>m;
    vector<pii> mon; pii start;
    for(int i=0;i<n;i++){
        cin>>grid[i];
        for(int j=0;j<m;j++){
            dM[i][j]=dA[i][j]=INF;
            if(grid[i][j]=='M') mon.push_back({i,j});
            else if(grid[i][j]=='A') start={i,j};
        }
    }
    multiBFS(mon,dM);
    pii e=escape(start);
    if(e.first==-1) cout<<"NO\n";
    else{ string p=buildPath(e,start); cout<<"YES\n"<<p.size()<<"\n"<<p<<"\n"; }
}
