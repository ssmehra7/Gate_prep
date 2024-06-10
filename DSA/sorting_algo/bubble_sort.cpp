#include<bits/stdc++.h>
using namespace std;

void print_vector(vector<int> &v){
    int n = v.size();

    for (int i =0 ;i<n ;i++){
        cout<<v[i]<<" ";
    }
}

void bubble_sort(vector<int> &v){
    int n = v.size();

    for (int i = n - 1;i>=0;i--){
        for (int j = 0 ;j<=i-1;j++){
            if (v[j]>v[j+1]){
                swap (v[j],v[j+1]);
            }
        }
    }
}

int main()
{
 vector<int> v; 
 int n ; 
 cin >>n;
 for (int i = 0 ; i<n;i++) {
    int x; 
    cin>>x;
    v.push_back(x);
 }

cout<<"This is your actual array --- "<<endl;
print_vector(v);
 bubble_sort(v);
 cout<<endl;
 cout<<"This is your sorted array ---- "<<endl;
 print_vector(v);


 return 0;
}