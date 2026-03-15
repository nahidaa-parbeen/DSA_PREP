int first_occ(vector<int>&arr,int n,int t){
    int s=0,e=n-1,first=-1;
    while(s<=0){
        int mid=s+(e-s)/2;
        if(arr[mid]==t){ 
            first=mid;
            e=mid-1;
        }
        else if(t<arr[mid]) e=mid-1;
        else s=mid+1;
    }
    return first;
}
int last_occ(vector<int>&arr,int n,int t){
    int s=0,e=n-1,last=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==t){ 
            last=mid;
            s=mid+1;
        }
        else if(t<arr[mid]) e=mid-1;
        else s=mid+1;
    }
    return last;
}

pair<int,int>first_and_last_occ(vector<int>&arr,int n,int t){
    int first=first_occ(arr,n,t);
    if(first==-1) return {-1,-1};
    int last=last_occ(arr,n,t);
    return {first,last};
}

int count(vector<int>&arr,int n,int t){
    pair<int,int>ans= first_and_last_occ(arr,n,t);
    if(ans.first==-1) return  0;
    return(ans.second-ans.first+1);
}
