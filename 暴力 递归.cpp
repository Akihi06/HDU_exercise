

//n个中选k个 

//#include<bits/stdc++.h>
//using namespace std;
//int n,k;
//int a[30],ans=0;
//bool check(int x){
//	if(x==1) return false;	
//	for(int i=2;i*i<=x;i++){	
//		if(x%i==0) return false;	
//	}	
//	return true;
//}
//void dfs(int qs,int cnt,int sum)
//{
//	if(k-cnt>n-qs)return ;
//	if(cnt==k){
//		if(check(sum))ans++;
//		return ;
//	}
//	for(int i=qs+1;i<=n;i++){
//		dfs(i,cnt+1,sum+a[i]);
//	}
//}
//int main()
//{
//	
//	cin>>n>>k;
//	for(int i=1;i<=n;i++)cin>>a[i];
//	dfs(0,0,0);
//	cout<<ans<<endl;
//	return 0;
// } 




//组合的输出


//#include<bits/stdc++.h>
//using namespace std;
//int n,r;
//bool flag[105];
//int a[105];
//void solve(int qs,int k){
//	if(k==r+1){
//		for(int i=1;i<=k;i++){
//			printf("%3d",a[i]);
//		}
//		cout<<endl;
//		return ;
//	}
//	for(int i=qs+1;i<=n;i++){
//		a[k]=i;
//		solve(i,k+1);
//	}
//}
//int main()
//{
//	cin>>n>>r;
//	solve(0,1);
//	return 0;
// } 









