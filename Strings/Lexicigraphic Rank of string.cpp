int main()
{
    string str="BAC";
    string s=str;
    sort(s.begin(),s.end());
    int count=1;
    while (1) {
         next_permutation(s.begin(),s.end());
          count++;
         if (str.compare(s)==0) {
            cout<<count; 
            break;
         }

        
    }
    
    return 0;
}
