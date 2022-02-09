
int main()
{
    string str;
    cin>>str;
    int count[26]={0};
    for (auto x:str) {
        count[x-'a']++;
    }
    for (int i=0;i<26;i++) {
        if (count[i]!=0) {
           cout<<(char)(i+'a')<<count[i]; 
        }
        
    }
    return 0;
}
