#include<bits/stdc++.h>

using namespace std;


void merge(vector<int> & v,int l , int h , int mid)
{   
    vector<int> result;
    int left = l;
    int right = mid+1;
    while(left <= mid and right<=h ){
        if (v[left]<v[right]){
            result.push_back(v[left]);
            left++;
        }else {
            result.push_back(v[right]);
            right++;
        }
    }

    while(left<=mid){
        result.push_back(v[left]);
        left++;
    }
    
    while(right<=h){
        result.push_back(v[right]);
        right++;
    }

    for (int i = l ; i <= h ; i++){
        v[i] = result[i-l];
    }
}

void merge_sort(vector<int> &v, int l , int h){

    if (l == h) return ;
    int mid = (l+h)/2;
    merge_sort(v,l,mid);
    merge_sort(v,mid+1,h);
    merge(v,l,h,mid);  
}

void print_vector(vector<int> &v){
    for (int i = 0 ;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
}

int main(){

    vector<int> v; 
    int n ; 
    cin>>n;
    for (int i = 0 ; i<n;i++){
        int x;  
        cin>>x;
        v.push_back(x);
    }
    cout<<"Your actual array"<<endl;
    print_vector(v);
    
    

    cout<<"your merge sorted array "<<endl;
    merge_sort(v, 0 , n-1);

    print_vector(v);

}