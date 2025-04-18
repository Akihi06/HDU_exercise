
////高精度加法
//
//#include<bits/stdc++.h>
//using namespace std;
//const int N=100005;
//int a[N],b[N],c[N];
//string a1,b1;
//int main()
//{
//	cin>>a1>>b1;
//	int lena=a1.length(),lenb=b1.length();
//	for(int i=0;i<lena;i++)a[i]=a1[lena-i-1]-'0'; //记得换一个数组 
//	for(int i=0;i<lenb;i++)b[i]=b1[lenb-i-1]-'0';
//	int lenc=max(lena,lenb);
//	
//	for(int i=0;i<lenc;i++){
//		c[i]+=a[i]+b[i];
//		c[i+1]+=c[i]/10;     
//		c[i]%=10;            //先对c[i+1]处理了，再对c[i]处理 
//	}
//	if(c[lenc])lenc++;
//	for(int i=lenc-1;i>=0;i--)cout<<c[i];
//	return 0;
//}
 


//高精度乘法

//#include<bits/stdc++.h>
//using namespace std;
//const int N=1e4+5;
//char as[N],bs[N];
//int a[N],b[N],c[N];
//int main()
//{
//	scanf("%s %s",as,bs);
//	int lena=strlen(as),lenb=strlen(bs);
//	
//	for(int i=0;i<lena;i++)a[i]=as[lena-i-1]-'0';
//	for(int i=0;i<lenb;i++)b[i]=bs[lenb-i-1]-'0';
//	for(int i=0;i<lena;i++){
//		for(int j=0;j<lenb;j++){
//			c[i+j]+=a[i]*b[j];
//			c[i+j+1]+=c[i+j]/10;
//			c[i+j]%=10; 
//		}
//	}
//	int lenc=lena+lenb;
//	while(c[lenc-1]==0&&lenc>1)lenc--;
//	for(int i=lenc-1;i>=0;i--)cout<<c[i];
//	return 0;
//} 




//高精度减法

//#include<bits/stdc++.h>
//using namespace std;
//const int N=10100;
//string as,bs;
//int a[N],b[N],c[N];
//bool flag=false;
//int main()
//{
//	cin>>as>>bs;
//	int lena=as.length(),lenb=bs.length();
//	if(lena<lenb||(lena==lenb&&as<bs)){
//		swap(as,bs);
//		swap(lena,lenb);
//		flag=true;
//	}
//	for(int i=0;i<lena;i++)a[i]=as[lena-i-1]-'0';
//	for(int i=0;i<lenb;i++)b[i]=bs[lenb-i-1]-'0';
//	for(int i=0;i<lena;i++){
//		if(a[i]<b[i]){
//			a[i]+=10;
//			a[i+1]--;
//		}
//		c[i]+=a[i]-b[i];	
//	}
//	int lenc=lena;
//	while(c[lenc-1]==0&&lenc>1)lenc--;
//	if(flag)cout<<'-';
//	for(int i=lenc-1;i>=0;i--)cout<<c[i];
//	return 0;
// } 



////阶乘之和
//
//#include<bits/stdc++.h>
//using namespace std;
//int s[105],a[105];
//void multi(int e){
//	int loss=0;
//	for(int i=1;i<=100;i++){
////		a[i]=a[i]*e;
////		a[i+1]+=a[i]/10;
////		a[i]%=10;
//		a[i] = a[i] * e + loss;
//		loss = a[i] / 10;
//		a[i] = a[i] % 10;
//	}
//}
//void add(){
//	for(int i=1;i<=100;i++){
//		s[i]+=a[i];
//		s[i+1]+=s[i]/10;
//		s[i]%=10;
//	}
//}
//int main()
//{
//	a[1]=1;
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		multi(i);
//		add();
//		memset(a,0,sizeof(a));
//	}
//	int index=0;
//	for(int i=100;i>=1;i--){
//		if(s[i]!=0){
//			index=i;
//			break;
//		}
//	}
//	for(int i=index;i>=1;i--){
//		cout<<s[i];
//	}
//	return 0;
//}


 
 
//高精度除以低精度

//#include <iostream>
//#include <string>
//using namespace std;
//int main(){
//	string a_s; //被除数 a 的字符型 
//	int a[521]={0},ans[521]={0}; //大整数 a 和 ans, 初始化为0  
//	int b,i,j,len,reminder=0; //余数 reminder 一定要初始化 
//	cin>>a_s>>b;
//	if(b==0){ //如果除数为零, 显然是不正确的 
//		cout<<"除数不能为0"<<endl;
//		return 0; 
//	}
//	len=a_s.length(); // a 的长度 
//	for(i=0;i<len;i++){ //转化为 int 型数组 
//		a[i]=a_s[len-1-i]-'0';
//	}
//	for(i=len-1;i>=0;i--){ //核心计算 
//		reminder=reminder*10+a[i]; //模拟竖式除法中的落位 
//		ans[i]=reminder/b;
//		reminder%=b;
//	}
//	
//	while(ans[len]==0&&len>0) len--; //去除前缀无用的零 
//	for(i=len;i>=0;i--) cout<<ans[i]; //结果输出 
//	if(reminder) cout<<"余"<<reminder<<endl; //如果有余数就输出余数 
//}
 
 
 
 
//#include<bits/stdc++.h>
//using namespace std;
//string as;
//int a[505],ans[505];
//int b,reminder;
//int main()
//{
//	cin>>as;
//	int lena=as.length();   //1245
//	cin>>b;
//	if(b==0){
//		cout<<"error";
//		return 0;
//	}
//	for(int i=0;i<lena;i++)a[i]=as[lena-i-1]-'0';//5421
//	for(int i=lena-1;i>=0;i--){
//		reminder=reminder*10+a[i];
//		ans[i]=reminder/b;
//		reminder%=b;
//	}
//	while(ans[lena-1]==0&&lena>1)lena--;
//	for(int i=lena-1;i>=0;i--)cout<<ans[i];
//	if(reminder) cout<<"余"<<reminder<<endl;
//	return 0;
// } 

 
 
 
 
 
 
 
 
 
 
 
 
 

 
 
////高精度除以高精度
//#include <iostream>
//#include <string>
//using namespace std;
//bool judge(int* a,int* b,int len){ //判断len长度的 b 是否可以被 a 除  
//	if(a[len]>0) return true; //如果 a 比 b 长, 一定可以除 
//	for(int i=len-1;i>=0;i--){//从 a 的最高位开始比 
//		if(a[i]>b[i]) return true;//除去相等位的最高位大于b,说明a比b大,可以除 
//		else if(a[i]<b[i]) return false;//除去相等位的最高位小于b,说明a比b小，不可以除 
//	}
//	return true;//a和b完全一样,可以除 
//}
//int main(){
//	string a_s,b_s;
//	int a[521]={0},b[521]={0},ans[521]={0};
//	int i,j,len_a,len_b,len;
//	cin>>a_s>>b_s;
//	
//	if(b_s=="0"){//除数不能为0 
//		cout<<"除数不能为0"<<endl;
//		return 0; 
//	}
//	
//	len_a=a_s.length();//计算 a和 b的长度 
//	len_b=b_s.length();
//	len=len_a-len_b; //结果最开始的下标 
//	
//	for(i=0;i<len_a;i++) a[i]=a_s[len_a-1-i]-'0';//字符型转int型 
//	for(i=0;i<len_b;i++) b[i]=b_s[len_b-1-i]-'0';
//	
//	for(i=len_a-len_b;i>=0;i--){
//		while(judge(a+i,b,len_b)){//当a可以被b减的时候一直进行，直到不能被减,即得到最终的商 
//			ans[i]++; //记录a被b减的次数，即为除法的结果 
//			for(j=0;j<=len_b-1;j++){//高精度减法的实现方法 
//				if(a[i+j]<b[j]){
//					a[i+j+1]--;
//					a[i+j]+=10;
//				}
//				a[i+j]-=b[j];
//			}
//		}
//	}
//	
//	while(a[len_a]==0&&len_a>0) len_a--;//去掉前缀无用的零 
//	while(ans[len]==0&&len>0) len--;
//	
//	for(i=len;i>=0;i--) cout<<ans[i];//输出结果 
//	if(len<0) cout<<"0";//当被除数短于除数时,len<0不进行上一条语句,单独输出一个零 
//	if(len_a>1||a[0]>0){//a最后没有减完的部分成为余数，余数为0就不输出 
//		cout<<"余";
//		for(i=len_a;i>=0;i--) cout<<a[i];
//	} 
//}



#include<bits/stdc++.h>
using namespace std;
bool judge(int a[],int b[],int len){
	if(a[len]>0)return true;
	for(int i=len-1;i>=0;i--){
		if(a[i]>b[i])return true;
		else if(a[i]<b[i])return false;
	}
	return true;
}
int a[1005],b[1005],ans[1005];
int main(){
	string as,bs;
	cin>>as>>bs;
	int lena=as.length();
	int lenb=bs.length();
	int len=lena-lenb;
	for(int i=0;i<lena;i++)a[i]=as[lena-i-1]-'0';
	for(int i=0;i<lenb;i++)b[i]=bs[lenb-i-1]-'0';
	for(int i=len;i>=0;i--){
		while(judge(a+i,b,lenb)){
			ans[i]++;
			for(int j=0;j<=lenb-1;j++){
				if(a[i+j]<b[j]){
					a[i+j+1]--;
					a[i+j]+=10;
				}
				a[i+j]-=b[j];
			}
		}
	}
	while(a[lena]==0&&lena>0)lena--;
	while(ans[len]==0&&len>0)len--;
	for(int i=len;i>=0;i--)cout<<ans[i];
	if(len<0)cout<<"0";
	if(lena>1||a[0]>0){
		cout<<"余";
		for(int i=lena;i>=0;i--)cout<<a[i];
	}
	return 0;
}

























 
