#include<bits/stdc++.h>
using namespace std;

void print_vector(vector<int> &v)
{
    for (int i = 0 ; i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int smallest_in_vector_idx(vector<int> &v, int i){
    int min_idx = i;
    

    for (int j = i ;j<v.size();j++){
         if (v[min_idx]>v[j]) min_idx =j ;
    }

    return min_idx;
}

void selection_sort(vector<int> &v){
    int n = v.size();
    

    for (int i=0;i<n-1;i++){
        int temp = smallest_in_vector_idx(v,i);
        swap (v[i],v[temp]);

    }
}

int main (){
    vector<int> v;
    int n; cin>>n;

    for (int i = 0;i<n ;i++){
        int x; 
        cin>>x;
        v.push_back(x);
    }

    cout<<"Your Actual Array ---- "<<endl;
    print_vector(v);
    cout<<"\n";

    //sorting algo 

    cout<<"Your Sorted Array ---- "<<endl;
    
    selection_sort(v);

    print_vector(v);
    


    
}