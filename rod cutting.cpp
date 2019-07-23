//rod cutting
typedef long long uu;
uu findCost(vector<int> B,uu i,uu j,uu **ans,uu **cuttingPoint)
{
    if(j-i==1) return 0;
    if(! (ans[i][j]==-1) ) return ans[i][j];
    uu res=LLONG_MAX,temp;
    for(uu k=i+1;k<j;k++)
    {
        temp = ( uu (findCost(B,i,k,ans,cuttingPoint) ) + findCost(B,k,j,ans,cuttingPoint) );
        if(temp<res)
        {
            res = temp;
            cuttingPoint[i][j]=k;
        }
    }
    res+=B[j]-B[i];
    ans[i][j] = res;
    return ans[i][j];
}
        
void getCuts(vector<int> B,uu **cuttingPoint,uu l,uu r,vector<int> &seq)
{
    if(l==r or r-l==1)
        return ;
    uu k = cuttingPoint[l][r];
    seq.push_back(B[k]);
    getCuts(B,cuttingPoint,l,k,seq);
    getCuts(B,cuttingPoint,k,r,seq);
}
vector<int> Solution::rodCut(int A, vector<int> &B) {
    uu **cuttingPoint,**ans;
    B.push_back(A);
    B.insert(B.begin(),0);
    uu n=B.size();
    cuttingPoint = new uu*[n];
    ans = new uu*[n];
    for(uu i=0;i<n;i++){ ans[i] = new uu[n]; cuttingPoint[i] = new uu[n]; }
    for(uu i=0;i<n;i++) for(uu j=0;j<n;j++) { ans[i][j] = -1; cuttingPoint[i][j]=-1; }
    findCost(B,0,n-1,ans,cuttingPoint);
    vector<int> seq;
    getCuts(B,cuttingPoint,0,n-1,seq);
    return seq;
}
