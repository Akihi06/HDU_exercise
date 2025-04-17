////A  A + B
//#include <stdio.h>
//
//int main() {
//    int n, i, a, b;
//
//    scanf("%d", &n);  // 有n组数据
//    for (i = 0; i < n; i++) {
//        scanf("%d%d", &a, &b);  // 读入两个整数
//        printf("%d\n", a + b);  // 输出两个整数的和
//    }
//
//    return 0;
//}



////B倒三角形
//
//#include<bits/stdc++.h>
//using namespace std;
//int a[25];
//int main()
//{
//	int m;
//	cin>>m;
//	for(int i=1;i<=m;i++)cin>>a[i];
//	for(int i=1;i<=m;i++){
//		for(int j=a[i];j>=1;j--){
//			int k=2*j-1;
//			int b=a[i]-j;
//			while(b--)cout<<" ";
//			while(k--)cout<<"*";
//			cout<<endl;
//		}
//	}
//	return 0;
//}



////C最大公约数
//
//
//#include<bits/stdc++.h>
//using namespace std;
//int gcd(int x,int y){
//	return x%y==0?y:gcd(y,x%y);
//}
//int main()
//{
//	int t;
//	cin>>t;
//	while(t--){
//		int a,b;
//		cin>>a>>b;
//		int ans=gcd(a,b);
//		cout<<ans<<endl;
//	}
//	return 0;
//} 




////4: 大整数加法
//
//#include<bits/stdc++.h>
//using namespace std;
//const int N=1e5+5;
//string as,bs;
//int a[N],b[N],c[N];
//int main()
//{
//	int t;
//	cin>>t;
//	for(int i=1;i<=t;i++)
//	while(t--){
//		memset(c,0,sizeof(c));
//		memset(b,0,sizeof(b));
//		memset(a,0,sizeof(a));          //记得a，b都要清零 
//		cin>>as>>bs;
//		int lena=as.length();
//		int lenb=bs.length();
//		for(int i=0;i<lena;i++)a[i]=as[lena-i-1]-'0';
//		for(int i=0;i<lenb;i++)b[i]=bs[lenb-i-1]-'0';
//		int lenc=max(lena,lenb);
//		for(int i=0;i<lenc;i++){
//			c[i]+=a[i]+b[i];
//			c[i+1]+=c[i]/10;
//			c[i]%=10;
//		}
//		if(c[lenc])lenc++;
//		for(int i=lenc-1;i>=0;i--)cout<<c[i];
//		cout<<endl;
//	}
//	return 0;
//}



//5: 分数求和

//#include<bits/stdc++.h>
//using namespace std;
//int a,b;
//int aa[10005],bb[10005];
//bool flag=false;
//bool flag1=false;
//int gcd(int x,int y){
//	return x%y==0?y:gcd(y,x%y);
//}
//void fs(int a1,int b1,int a2,int b2){
//	if(b1==0||b2==0){
//		cout<<"error"<<endl;
//		flag=true;
//		exit(0);
//	}
//	int tmp=0;
//	a=a1*b2+a2*b1;
//	b=b1*b2;
//	int t=gcd(a,b);
//	a/=t,b/=t;
//	if(abs(a)==abs(b)){
//		if(a<0)cout<<"-1";
//		if(a>0)cout<<'1';
//		flag1=true;
//	}
//	
//}
//int main()
//{
//	int n;
//	cin>>n;
//	int ans=0;
//	for(int i=1;i<=n;i++){
//		scanf("%d/%d",&aa[i],&bb[i]);
//	}
//	for(int i=2;i<=n;i++){
//		if(i==2)fs(aa[1],bb[1],aa[2],bb[2]);
//		else fs(a,b,aa[i],bb[i]);
//	}
//	if(!flag){
//		if(a==0)cout<<'0';
//		if(!flag1) printf("%d/%d",a,b);
//	}
//	return 0;
// } 


//#include <bits/stdc++.h>
//using namespace std;
//
//int a[15]; //分子
//int b[15]; //分母
////求n个分母的最大公约数
//int gcd(int a, int b) {
//	return (b == 0 ? a : gcd(b, a % b));
//}
//
//int main() {
//	int n;
//	cin >> n;
//	char c;
//	int sumb = 1; //求前n个分母的乘积
//	for (int i = 0; i < n; i++) {
//		cin >> a[i] >> c >> b[i];
//		sumb *= b[i];
//	}
//	int max = 1; //保存n个分母的最大公约数
//	//求前n个分母的最大公约数
//	for (int i = 0; i < n; i++) {
//		max = gcd(max, b[i]);
//	}
//	//求这n个分母的最小公倍数
//	int min = sumb / max;
//	int fz = 0, fm;
//	//计算n个数的分子和
//	for (int i = 0; i < n; i++) {
//		fz += (a[i] * (min / b[i]));
//	}
//	fm = min; //分母就是所有分母的最小公倍数
//	//化简
//	//先求答案的分子分母的最大公约数
//	int maxtemp = gcd(fz, fm);
//	//化简分子分母
//	fz /= maxtemp;
//	fm /= maxtemp;
//	if(fm==0){
//		cout<<"error"; 
//	} 
//	else if (fm == 1)
//		cout << fz;
//	else
//		cout << fz << "/" << fm;
//	return 0;
//}

#include <bits/stdc++.h>
using namespace std;

// 求两个数的最大公约数，考虑负数情况
long long gcd(long long a, long long b) {
    a = abs(a);
    b = abs(b);
    return (b == 0? a : gcd(b, a % b));
}

// 求两个数的最小公倍数
long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}

int main() 
{
    int n;
    cin >> n;
    long long a[15]; // 分子
    long long b[15]; // 分母
    char c;

    for (int i = 0; i < n; i++) {
        if (!(cin >> a[i] >> c >> b[i])) {
            // 输入格式错误
            cout << "error" << endl;
            return 0;
        }
        if (c != '/') {
            // 分隔符不是 /
            cout << "error" << endl;
            return 0;
        }
        if (b[i] == 0) {
            // 分母为0
            cout << "error" << endl;
            return 0;
        }
    }

    long long firstLcm;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            firstLcm = b[i];
        } else {
            firstLcm = lcm(firstLcm, b[i]);
        }
    }

    long long fz = 0, fm = firstLcm;
    // 计算n个数的分子和
    for (int i = 0; i < n; i++) {
        fz += (a[i] * (fm / b[i]));
    }

    // 化简
    // 先求答案的分子分母的最大公约数
    long long maxtemp = gcd(fz, fm);
    // 化简分子分母
    fz /= maxtemp;
    fm /= maxtemp;

    if (fm == 1)
        cout << fz;
    else
        cout << fz << "/" << fm;

    return 0;
}

//6: 01背包


//#include<bits/stdc++.h>
//using namespace std;
//int w[1005],v[1005];
//int f[1005][1005];
//int main()
//{
//	int n,ww;
//	cin>>n>>ww;
//	for(int i=1;i<=n;i++){
//		cin>>v[i]; //价值 
//	}
//	for(int i=1;i<=n;i++){
//		cin>>w[i]; //体积 
//	}
//	for(int i=1;i<=n;i++){
//		for(int j=0;j<=ww;j++){
//			if(j<w[i])f[i][j]=f[i-1][j];
//			else f[i][j]=max(f[i-1][j],f[i-1][j-w[i]]+v[i]);
//		}
//	}
//	cout<<f[n][ww]<<endl;
//	return 0;
//}


