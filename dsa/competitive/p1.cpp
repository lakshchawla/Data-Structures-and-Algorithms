// #include<bits/stdc++.h>
// using namespace std;

// int checkWin(int a, int b){
//     if (a > b) return 1;
//     else return 2;
// }

// int main(void){
//     int n; cin>>n;

//     int G1[n], S1[n], B1[n], G2[n], S2[n], B2[n];
//     for (int i = 0; i < n; i++) cin>>G1[i]>>S1[i]>>B1[i]>>G2[i]>>S2[i]>>B2[i];
//     for (int i = 0; i < n; i++) cout<<checkWin(G1[i]+S1[i]+B1[i], G2[i]+S2[i]+B2[i])<<endl;  
// }

// #include<bits/stdc++.h>
// using namespace std;

// int check(int a, int b, int c, int d){
//     int p = 0;
//     if(a != b) p++;
//     if(c != d) p++;

//     return p;
// }

// int main(void){
//     int n; cin>>n;

//     int A1[n],A2[n],A3[n],A4[n];
//     for (int i = 0; i < n; i++) cin>>A1[i]>>A2[i]>>A3[i]>>A4[i];
//     for (int i = 0; i < n; i++) cout<<check(A1[i],A2[i],A3[i],A4[i])<<endl;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int findMin(int a, int b){
//     if(a < b) return a;
//     return b;
// }

// int main(void){
//     int a,b,c; cin>>a>>b>>c;
//     int minVar = findMin(a,findMin(b,c));

//     if(a == minVar) cout<<"A";
//     if(b == minVar) cout<<"B";
//     else cout<<"C";
// }

#include <iostream>
using namespace std;


void findMin(int a , int b , int c){
    if (a>b && c>b){
        cout<<"B";
    }
    else if (a<b && a<c){
        cout<<"A";
    }
    else if (b>c && a>c){
        cout<<"C";
    }
    else if(a==b || a==c ){
        cout<<"A";
    }
    else if (b==c) {
        cout<<"B";
    }
   return; 
}
int main() {
	int a,b,c;
	cin>>a>>b>>c;
	findMin(a,b,c);
}