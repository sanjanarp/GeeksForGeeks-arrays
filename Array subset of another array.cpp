
//method 1: Time Complexity O(nm)

string isSubset(int a1[], int a2[], int n, int m) {
    int res=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        if(a1[i]==a2[j]){
            res++;
        }
    }
    if(res==m){
        return "Yes";
    } else return "No";    
}

//method 2: Time Complexity O(n), using set

string isSubset(int a1[], int a2[], int n, int m) {
    int res=0;
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(a1[i]);
    }
    int total = s.size();
    for(int i=0;i<m;i++){
        s.insert(a2[i]);
    }
    if(s.size()==total){
        return "Yes";
    } else return "No";
 
}
