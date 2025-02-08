#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
const int N = 2e5 + 5;
int fa[N];//fa[x]:x节点的父节点
int n,m;
int findRt(int x){
	//返回x的根节点
	if(x==fa[x]) return x;
	return fa[x]=findRt(fa[x]);
}
void merge(int x,int y){
	//合并x,y所在的两个树
	int fx=findRt(x);
	int fy=findRt(y);
	fa[fx]=fy;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		fa[i]=i;
	}
	int z,x,y;
	for(int i=1;i<=m;i++){
		cin>>z>>x>>y;
		if(z==1){
			merge(x,y);
		}else{
			int fx=findRt(x);
			int fy=findRt(y);
			if(fx==fy) cout<<"Y\n";
			else cout<<"N\n";
		}
	}
	return 0;
}