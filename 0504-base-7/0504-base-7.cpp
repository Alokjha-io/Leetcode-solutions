class Solution {
public:
    string convertToBase7(int num) {
        if(num==0) return "0";
        bool check = false;
        if(num<0)
        {
            check = true;
            num = -num;
        } 
        string s ;
        while(num>0)
        {   int d = num%7;
            s.push_back('0'+d);
            num/=7;
        }
        reverse(s.begin(),s.end());
        if(check) s.insert(s.begin(),'-');
        return s;
    }
};