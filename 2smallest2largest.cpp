int secondLargest(int n,vector<int>arr){
    int larg=arr[0];
    int slarg=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>larg){
            slarg=larg;
            larg=arr[i];
        }else if(arr[i]<larg and arr[i]>slarg){
            slarg=arr[i];
        }
    } 
    return slarg;
 
}
int secondSmallest(int n,vector<int>arr){
    int small=arr[0];
    int ssmall=INT_MAX;
    for(int i=1;i<n;i++){
        if(arr[i]<small){
            ssmall=small;
            small=arr[i];
        }
        else if(arr[i]>small and arr[i]<ssmall){
            ssmall=arr[i];
        }
    }
    return ssmall;
}
vector<int> getSecondOrderElements(int n, vector<int> a) {
   int slargest=secondLargest(n,a);
   int ssmallest=secondSmallest(n,a);
   return {slargest,ssmallest};
}
