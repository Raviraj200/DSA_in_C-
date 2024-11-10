// #include<iostream>
// using namespace std;

// int power(int n, int p){
//     if(p==0){
//         return 1;

//     }

//     int pre = power(n,p-1);
//     return n*pre;
// }
// int main(){
//     int n,p;
//     cin>>n>>p;

//     cout<<power(n,p);

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int fac(int n){
//     if(n==0){
//         return 1;
//     }

//     int pre= fac(n-1);
//     return n*pre;
// }
// int main(){
//  int n;
//  cin>>n;

//  cout<<fac(n);

//     return 0;
// }

// Print the nth Fibonacci number******************************************************
// #include <iostream>
// using namespace std;
// int fib(int n)
// {
//   if(n==0 || n==1){
//     return n;
//   }
//   return fib(n-1)+fib(n-2);
// }
// int main()
// {
//     int n;
//     cin >> n;

//     cout << fib(n);
//     return 0;
// }

// sorted****************************************************************************************
// #include<iostream>
// using namespace std;
// bool sorted(int arr[], int n){
//     if(n==1){
//         return 1;
//     }
//   bool restArray = sorted(arr+1, n-1);
//   return (arr[0]<arr[1] && restArray);
// }
// int main(){
//     int arr[]={1,2,2053,4,50};
//     cout<<sorted(arr,5)<<endl;

//     return 0;
// }

// incde order********************************************

// #include<iostream>
// using namespace std;
// void dec(int n){
//     if(n==0){
//         return;
//     }

//     cout<<n<<endl;
//     dec(n-1);
// }
// int main(){
//  int n;
//  cin>>n;

//  dec(n);

//     return 0;
// }

// dec order***************************************************************
// #include<iostream>
// using namespace std;
// void inc(int n){
//     if(n==1){
//         cout<<n<<endl;
//         return;
//     }

//     inc(n-1);
//     cout<<n<<endl;

// }

// int main(){
//     int n;
//     cin>>n;

//     inc(n);

//     return 0;
// }

// first and last occurence*************************************************
// #include <iostream>
// using namespace std;
// int find(int arr[], int last, int first)
// {
//     if (last == first)
//     {
//         return 0;
//     }
//     return  arr[first+1]=arr[last-1];

// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 1, 23, 2, 4};

//     cout<<find(arr, 10, 1);

//     return 0;
// }

// find the element in array********************************************************
// #include<iostream>
// using namespace std;

// int find(int arr[],int n,int i, int key){
//      if(i==n){
//         return -1;
//      }
//      if(arr[i]==key){
//         return i;
//      }

//      return find(arr,n,i+1,key);

// }

// int main(){
//     int arr[]={1,2,3,5,46,8,9,7};
//    cout<< find(arr,8,0,5);

//     return 0;
// }

// reverse string****************************************

// replace*************************************************
// #include <iostream>
// using namespace std;

// void replace(string s)
// {
//    if (s.length() == 0)
//    {
//       return;
//    }
//    if (s[0] == 'p' && s[1] == 'i')
//    {
//       cout << "3.14";
//       replace(s.substr(2));
//    }
//    else
//    {
//       cout << s[0];
//       replace(s.substr(1));
//    }
//    replace(s);
//    cout << s << endl;
// }

// int main()
// {
//    //   string s="jhjhvdpijbjgbjvpi";

//    replace("jhjhvdpijbjgbjvpi");

//    return 0;
// }

// toc****************************************************************

// #include<iostream>
// using namespace std;
// oid toc(int n, char src, char dest, char helper){
//    if(n==0){
//       return;
//    }

//    toc(n-1,src,helper,dest);
//    cout<<"move from "<<src<<" to    "<<dest<<endl;
//    toc(n-1,helper,dest,src);
// }
// int main(){
//   toc(3,'A','C','B');
//    return 0;
// }

// moveallX to end***************************************************

// #include <iostream>
// using namespace std;

// string movex(string s)
// {
//    if (s.length() == 0)
//    {
//       return "";
//    }
//    char ch = s[0];
//    string ans = movex(s.substr(1));

//    if (ch == 'x')
//    {
//       return ans + ch;
//    }
//    else
//    {
//       return ch + ans;
//    }
// }
// int main()
// {
//    cout<<movex("hvhvvyxxytxfyxukvxuxx");

//    return 0;
// }


// substring***************************************************

// #include<iostream>
// using namespace std;

// void subseq(string s, string ans){
//    if(s.length()==0){
//        cout<<ans<<endl;
//        return;
//    }

//    char ch=s[0];
// string ros=s.substr(1);


// subseq(ros,ans);
// subseq(ros,ans+ch);
// }


// int main(){
//  subseq("ABC","");
//    return 0;
// }


// permutation***********************************************************************
// #include<iostream>
// using namespace std;

// void permutation(string s, string ans){
//    if(s.length()==0){
//       cout<<ans<<endl;
//       return;
//    }

//    for(int i=0; i<s.length();i++){
//     char ch=s[i];
//     string ros= s.substr(0,i)+s.substr(i+1);
//     permutation(ros,ans+ch);
//    }
// }

// int main(){
//    string s="ABC";
//    string ans="";
//    permutation(s,ans);

//    return 0;
// }



// count path//////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include<iostream>
// using namespace std;

// int countpath(int s,int e){
//    if(s==e){
//       return 1;
//    }
//    if(s>e){
//       return 0;
//    }
//    int count = 0;
//    for(int i=1;i<6;i++){
//        count+=countpath(s+i,e);

//    }
//    return count;
// }
// int main(){

// cout<<countpath(0,4)<<endl;
//    return 0;
// }

// countPathMaze***********************************************************************
// #include<iostream>
// using namespace std;

// int count(int n,int i, int j){
//    if(i==n-1 && j==n-1){
//       return 1;
//    }
//    if(i>=n ||j>=n){
//       return 0;
//    }
   
//    return count(n,i+1,j) + count(n,i,j+1);
// }
// int main(){
//    cout<<count(5,0,0);
//    return 0;
// }



// friendPring/////////////////////////////////////////////////////////////////////////////
// #include<iostream>
// using namespace std;

// int friendPring(int n){
//    if(n==0 || n==1 || n==2){
//       return n;
//    }

//    return friendPring(n-1)+friendPring(n-2)*(n-1);
// }

// int main(){
// cout<<friendPring(4);
//    return 0;
// }



// knapsack//////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int solve(int wt[], int value[], int W, int n){
   if(n==0){
      return 0;
   }
   if(wt[n-1]>W){
      return solve(wt,value,W,n-1);
   }

   return max(solve(wt,value,W-wt[n-1],n-1)+value[n-1],solve(wt,value,W,n-1));
}
int main(){
   int wt[]={10,20,30};
   int value[]={100,50,150};
   int W=50;

cout<<   solve(wt,value,W,3);

   return 0;
}