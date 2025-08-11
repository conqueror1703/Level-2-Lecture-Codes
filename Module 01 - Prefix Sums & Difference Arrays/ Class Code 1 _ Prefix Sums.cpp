void solve(){
    int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){//for(auto it:v){
    cin>>v[i];
}

vector <int>pre(n);
pre[0]=v[0];
for(int i=0;i<n;i++){
pre[i]=pre[i-1]+v[i];
}

int main(){
    int t;
    cin>>t;
while(t--){
int l,r;
cin>>l>>r>>endl;
cout<<pre[r]-((l==0)?0 : pre(l-1) ) <<" ";
