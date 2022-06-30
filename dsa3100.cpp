#include <bits/stdc++.h>
using namespace std;
int arr[100][100][100];
int v[100][100][100];
          //b,d,f,u
int abc[4]={1,0,-1,0};
int deff[4]={0,1,0,-1};
int ghi[4]={0,0,0,0};
          //b,r,f,l
int jkl[4]={1,0,-1,0};
int mno[4]={0,0,0,0};
int pqr[4]={0,1,0,-1};

bool here(int a,int b,int c,int p,int q,int r ){
        if(a>=0 && a<p && b>=0 && b<q && c>=0 && c<r && v[a][b][c]==0){
                return true;
        }
        return false;
}bool here2(int a,int b,int c,int p,int q,int r ){
        if(a>=0 && a<p && b>=0 && b<q && c>=0 && c<r ){
                return true;
        }
        return false;
}
void func16(int &a,int &b,int &c,int p,int q,int r,string dir,int idx,int t, int cc);
void newfunc1(int &a,int &b,int &c,int p,int q,int r,string dir,int idx,int t, int cc){
        
        int a1 = a + abc[idx];
        int b1 = b + deff[idx];
        int c1 = c + ghi[idx];
        bool flag=false;
        while(here2(a1,b1,c1,p,q,r)==false){
                int idx1 = (idx+1)%4;
                a1 = a + abc[idx1];
                b1 = b + deff[idx1];
                c1 = c + ghi[idx1];
        }//cout<<"new func"<<endl;
        //cout<<a1<<" "<<b1<<" "<<c1<<" "<<0<<endl;
        a=a1;
        b=b1;
        c=c1;
        func16(a,b,c,p,q,r,dir,0,t,cc);
}
void func16(int &a,int &b,int &c,int p,int q,int r,string dir,int idx,int t, int cc){
        //cout<<a<<" "<<b<<" "<<c<<" "<<p<<" "<<q<<" "<<r<<endl;
       
        if(v[a][b][c]==0){
        cout<<arr[a][b][c]<<" ";
        v[a][b][c]=1;
        cc++;        
        }
        int a1;
        int b1;
        int c1;
        bool flag=false;
        
                a1 = a + abc[idx];
                b1 = b + deff[idx];
                c1 = c + ghi[idx];
                int count = 0;
                while(here(a1,b1,c1,p,q,r)==false){
                        //cout<<a1<<" "<<b1<<" "<<c1<<endl;
                        int idx1 = (idx+1)%4;
                        a1 = a + abc[idx1];
                        b1 = b + deff[idx1];
                        c1 = c + ghi[idx1];
                        count ++;
                        // if(count==5){
                        //      if(cc<t)
                        //      {
                        //         newfunc1(a,b,c,p,q,r,dir,idx,t,cc);
                        //      }
                        //      break;  
                        // }
                        idx = idx1;
                }
                if(count<5){
                	flag=true;
                        
                } 
        //cout<<idx<<endl;
       	 a=a1;
       	 b=b1;
       	 c=c1;  
        
}
void func1(int a,int b,int c,int p,int q,int r,string dir,int idx,int t, int cc){
        //cout<<a<<" "<<b<<" "<<c<<" "<<p<<" "<<q<<" "<<r<<endl;
        if(here(a,b,c,p,q,r)==false)
        return;
        if(v[a][b][c]==0){
        cout<<arr[a][b][c]<<" ";
        v[a][b][c]=1;
        cc++;        
        }
        int a1;
        int b1;
        int c1;
        bool flag=false;
        
                a1 = a + abc[idx];
                b1 = b + deff[idx];
                c1 = c + ghi[idx];
                int count = 0;
                while(here(a1,b1,c1,p,q,r)==false){
                        //cout<<a1<<" "<<b1<<" "<<c1<<endl;
                        int idx1 = (idx+1)%4;
                        a1 = a + abc[idx1];
                        b1 = b + deff[idx1];
                        c1 = c + ghi[idx1];
                        count ++;
                        if(count==5){
                             if(cc<t)
                             {
                                newfunc1(a,b,c,p,q,r,dir,idx,t,cc);
                                cout<<arr[a][b][c]<<" ";
                             }
                             break;  
                        }
                        idx = idx1;
                }
                if(count<5){
                	flag=true;
                        
                } 
        //cout<<idx<<endl;
        if(flag==true){
       	func1(a1,b1,c1,p,q,r,dir,idx,t,cc);
        }
       	 else{
        if(dir=="left") {
                func1(a,b,c-1,p,q,r,dir,0,t,cc);
        }
        else {
                func1(a,b,c+1,p,q,r,dir,0,t,cc);
        }}
        
        
}

void func2(int a,int b,int c,int p,int q,int r,string dir, int idx,int t,int cc){
        //cout<<a<<" "<<b<<" "<<c<<" "<<endl;
        if(here(a,b,c,p,q,r)==false)
        return;
        if(v[a][b][c]==0){
        cout<<arr[a][b][c]<<" ";
        v[a][b][c]=1;
        cc++;       
        }
        int a1;
        int b1;
        int c1;
        bool flag=false;
        
                a1 = a + jkl[idx];
                b1 = b + mno[idx];
                c1 = c + pqr[idx];
                int count = 0;
                while(here(a1,b1,c1,p,q,r)==false){
                        idx = (idx+1)%4;
                        a1 = a + jkl[idx];
                        b1 = b + mno[idx];
                        c1 = c + pqr[idx];
                        count ++;
                        if(count==5)
                                break;
                }
                if(count<5){
                	flag=true;
                        
                }  
        //cout<<idx<<endl;
        if(flag==true)
       	 func2(a1,b1,c1,p,q,r,dir,idx, t,  cc);
       	 else{
        if(dir=="up") {
                func2(a,b-1,c,p,q,r,dir,0,t,cc);
        }
        else {
                func2(a,b+1,c,p,q,r,dir,0,t,cc);
        }
       	 }
        
}







int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
		//Hackaing unordered_map or set
	    //insert_numbers(126271);// for GCC 6 or earlier
		//insert_numbers(107897);// for GCC 7 or later
	int p,q,r;
	cin>>p>>q>>r;
	for(int i=0;i<p;i++){
	for(int j=0;j<q;j++){
	for(int k=0;k<r;k++){
		int val;
		cin>>val;
	    arr[i][j][k]=val;
	    v[i][j][k]=0;	    }
	 }
	}
	int a,b,c;
	cin>>a>>b>>c;   
	if(c==0){
	   func1(a,b,c,p,q,r,"right",0,p*q,0);
	}
	else if(c==q-1){
	   func1( a,b,c,p,q,r,"left",0,p*q,0);
	}
	else if(b==0){
	   func2( a,b,c,p,q,r,"down",0,p*r,0);
	}
	else{
	   func2( a,b,c,p,q,r,"up",0,p*r,0);    
	}

	
    return(0);	
}