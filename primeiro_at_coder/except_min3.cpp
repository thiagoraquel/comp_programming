#include<bits/stdc++.h>
using namespace std;
//#define int long long 
#define endl '\n' 
int a[500005];
int c[8];
int d[8];
struct lll{
	int v;
	int id;
}b[500005];
bool cp(lll l,lll r){
	return l.v<r.v;
}
signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    // Read N_balls and Q_Queries
	int n,q;
	cin>>n>>q;

    // Read the value of each ball (there are N_balls balls)
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i].v=a[i];
		b[i].id=i;
	}

    // Sort the balls by their value (and by index in case of ties)
	sort(b+1,b+n+1,cp);
	for(int i=1;i<=6;i++){
		c[i]=b[i].id;
	}
	for(int i=1;i<=q;i++){
		int k;
		cin>>k;
		int q1=0,q2=0,q3=0,q4=0,q5=0;
		for(int j=1;j<=k;j++){
			int x;
			cin>>x;
			if(x==c[1]){
				q1=1;
			}
			if(x==c[2]){
				q2=1;
			}
			if(x==c[3]){
				q3=1;
			}
			if(x==c[4]){
				q4=1;
			}
			if(x==c[5]){
				q5=1;
			}
		}
		if(q1==0){
			cout<<a[c[1]]<<endl;
		}else
		if(q2==0){
			cout<<a[c[2]]<<endl;
		}else
		if(q3==0){
			cout<<a[c[3]]<<endl;
		}else
		if(q4==0){
			cout<<a[c[4]]<<endl;
		}else
		if(q5==0){
			cout<<a[c[5]]<<endl;
		}else{
			cout<<a[c[6]]<<endl;
		}
	}
	return 0;
}