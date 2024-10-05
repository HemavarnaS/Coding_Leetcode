class Solution {
public:
    int romanToInt (string r){
        unordered_map<char,int> s;
        s['I'] = 1;
        s['V'] = 5;
        s['X'] = 10;
        s['L'] = 50;
        s['C'] = 100;
        s['D'] = 500;
        s['M'] = 1000;
        int result =0;
        for(int i=0;i<r.length();i++){
            if(s[r[i]]>=s[r[i+1]]){
            result+=s[r[i]];
        }
        else{
            result-=s[r[i]];
        }
    }
        return result;
  }
        
};
