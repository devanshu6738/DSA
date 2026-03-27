
string merge(string S1, string S2) {
    int n;
    string s="";
    if(S1.size()>S2.size()){
        n=S2.size();
    }else{
        n=S1.size();
    }
    for(int i=0;i<n;i++){
        s+=S1[i];
        s+=S2[i];
    }
    if(S1.size()>S2.size()){
        for(int i=n;i<S1.size();i++){
            s+=S1[i];
        }
    }else{
         for(int i=n;i<S2.size();i++){
            s+=S2[i];
        }
    }
    return s;
    }
    