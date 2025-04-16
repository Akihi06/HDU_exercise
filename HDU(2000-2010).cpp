//高精度



//HDU - 2000 ASCII码排序

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	char a,b,c;
//	char t;  //char int 都可以 
//	while(scanf("%c%c%c",&a,&b,&c)!=EOF){
//		if(a>b){
//			t=a,a=b,b=t;
//		}
//		if(a>c){
//			t=a,a=c,c=t;
//		}
//		if(b>c){
//			t=b,b=c,c=t;
//		}
//		printf("%c %c %c\n",a,b,c);
//		getchar();//注意要把换行符读取了 
//	}
//	return 0;
// } 




//HDU - 2001计算两点间的距离 

//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	double x1,y1,x2,y2;
//	while(scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2)!=EOF){
//		double ans=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
//		printf("%.2lf\n",ans);
//		getchar();
//	}
//	return 0;
//}



//HDU - 2002 计算球体积


//#include <bits/stdc++.h>
//using namespace std;
//#define PI 3.1415927
//int main()
//{
//    double a, ans;
//    while(scanf("%lf", &a)!=EOF){
//        ans = 4*a*a*a*PI/3;
//        printf("%.3lf\n",ans);
//    }
//    return 0;
//}



//HDU - 2003求绝对值

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	double a;
//	while(scanf("%lf",&a)!=EOF){
//		a=abs(a);
//		printf("%.2lf\n",a);
//		getchar();
//	}
//	return 0;
//}



//HDU - 2004 成绩转换


//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a;
//	while(scanf("%d",&a)!=EOF){
//		if(a<0||a>100)printf("Score is error!");
//		else{
//			switch(a/10){
//				case 9:
//				case 10:printf("A\n");break;
//				case 8:printf("B\n");break;
//				case 7:printf("C\n");break;
//				case 6:printf("D\n");break;
//				default:printf("E\n");break;
//			}
//		}
//	}
//	return 0;
// } 



//HDU - 2005

//#include<bits/stdc++.h>
//using namespace std;
//bool check(int x){
//	if((x%4==0&&x%100!=0)||x%400==0)return true;
//	else return false;
//}
//int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
//int main()
//{
//	int yy,mm,dd;
//	while(scanf("%d/%d/%d",&yy,&mm,&dd)!=EOF){
//		int ans=0;
//		for(int i=1;i<mm;i++){
//			if(i==2&&check(yy))ans+=29;
//			else ans+=m[i];
//		}
//		ans+=dd;
//		printf("%d\n",ans);
//	}
//	return 0;
//}


//HDU - 2006 求奇数的乘积

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	while(scanf("%d",&n)!=EOF){
//		int a;
//		int ans=1;
//		for(int i=1;i<=n;i++){
//			cin>>a;
//			if(a%2==1){
//				ans*=a;
//			}
//		}
//		cout<<ans<<endl;
//		getchar();
//	}
//	return 0;
//}



//////HDU - 2007平方和与立方和 
//
//#include <bits/stdc++.h>
//using namespace std;
//#define fr(i, r, n) for(int i = r; i <= n; i++)
//int main()
//{
//    int m, n;
//    long long ans1, ans2;//在数据很大的时候用long long防止爆数据
//    while(~scanf("%d%d", &m, &n))
//    {
//        if(m>n)//题目根本没说区间是从小到大的
//        {
//            int t;
//            t = n;
//            n = m;
//            m = t;
//        }
//        ans1 = ans2 = 0;
//        fr(i, m, n)//从m到n
//        {
//            if(i%2 == 0)
//                ans1 += i*i;
//            else
//                ans2 += i*i*i;
//        }
//        printf("%lld %lld\n", ans1, ans2);
//    }
// 
//    return 0;
//}



//HDU - 2008 数值统计

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	while(scanf("%d",&n)!=EOF){
//		if(n==0)break;
//		float x;
//		int a=0,b=0,c=0;
//		for(int i=1;i<=n;i++){
//			cin>>x;
//			if(x>0)a++;
//			else if(x==0)b++;
//			else c++;
//		}
//		printf("%d %d %d\n",c,b,a);
//	}
//	return 0;
//}



//HDU - 2009求数列的和


//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	double n,m;
//	while(scanf("%lf %lf",&n,&m)!=EOF){
//		double ans=n;
//		double x=n;
//		while(--m){
//			x=sqrt(x);
//			ans+=x;
//		}
//		printf("%.2lf\n",ans);
//	}
//	return 0;
//}




////HDU - 2010水仙花数


//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int m,n;
//	while(scanf("%d %d",&m,&n)!=EOF){
//		bool flag=false;
//		for(int i=m;i<=n;i++){
//			int a=i%10;
//			int c=i/100;
//			int b=i/10-c*10;
//			if(a*a*a+b*b*b+c*c*c==i){
//				flag=true;
//				printf("%d ",i);
//			}
//		}
//		if(!flag)cout<<"no";
//		cout<<endl;
//	}
//	return 0;
//}





//HDU - 2050折线分割平面

#include <stdio.h>
int main()
{
	long long a[10010];
	a[1]=2;
	a[2]=7;
	for(int i=3;i<10010;i++)
	{
		a[i]=a[i-1]+4*(i-1)+1;
	}
	int t;
	scanf("%d",&t);
	int n;
	while(t--)
	{
		scanf("%d",&n);
		printf("%lld\n",a[n]);
	}
	return 0;
}


































