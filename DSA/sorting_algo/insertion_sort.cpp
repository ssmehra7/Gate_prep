#include<bits/stdc++.h>
using namespace std;

void print_vector(vector<int> &v){
    int n = v.size();

    for (int i =0 ;i<n ;i++){
        cout<<v[i]<<" ";
    }
}

void insertion_sort(vector<int> & v){
    int n = v.size();

    for (int i = 0; i<n ;i++){
        int j = i ;
        while (j > 0 and v[j-1]>v[j]){
            swap(v[j-1],v[j]);
            j--;
        }
        
    }
}


int main()
{

    vector<int> v;
    int n ;cin >>n ;
    for (int i = 0 ;i<n;i++){
        int x; 
        cin>>x; 
        v.push_back(x);
    }


    cout<<"Your actual array -- "<<endl;
    print_vector(v);
    cout<<endl;
    cout<<"Your sorted array -- "<<endl;
    insertion_sort(v);
    print_vector(v);

    return 0;
}