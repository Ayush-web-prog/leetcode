class Solution {
public:
    int romanToInt(string s) {
    int n=s.size();
    int count=0;
    int prev=0;
    for(int i=n-1;i>=0;i--){
        int k=0;
        if(s[i]=='I'){
            k=1;
        }
        if(s[i]=='V'){
            k=5;
        }
        if(s[i]=='X'){
            k=10;
        }
        if(s[i]=='L'){
            k=50;
        }
        if(s[i]=='C'){
            k=100;
        }
        if(s[i]=='D'){
            k=500;
        }
        if(s[i]=='M'){
            k=1000;
        }
        if(k<prev){
            count-=k;
        }
        else{
            count+=k;
        }
        prev=k;
    }
    return count;
    }
};