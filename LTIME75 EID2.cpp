
//https://www.codechef.com/LTIME75B/problems/EID2

#include<bits/stdc++.h>
#define f(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) f(i,0,n)
#define fd(i,a,b) for(i=a;i>=b;i--)
using namespace std;
int order(int x,int y){
	if(x>y){
		return 1;
	}
	if(x<y){
		return 0;
	}
	if(x==y){
		return 2;
	}
}

int main()
{
    int t,i,j;
    int a[3],c[3];
    cin>>t;
    while(t--)
    {
        int fl=0;
        for(i=0;i<3;i++)
            cin>>a[i];
        for(i=0;i<3;i++)
            cin>>c[i];
        rep(i,3){
			f(j,i+1,3){
				if(order(a[i],a[j])!=order(c[i],c[j])){
					fl=1;
					break;
				}
			}
		}
		if(fl){
			cout<<"NOT FAIR"<<endl;
		}
		else{
			cout<<"FAIR"<<endl;
		}
	}
	return 0;
    }

