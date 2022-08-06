class Solution {
public:
    string addBinary(string a, string b,int carry=0) {
        
        if(!a.size() and !b.size())
            return carry==1?"1":"";
        
        int x=0,y=0;
        if(a.size())
           x=a[a.size()-1]-'0';
        if(b.size())
            y=b[b.size()-1]-'0';
        
        int ans=x+y+carry;
        if(ans==3)
            return addBinary(a.substr(0,a.size()-1),b.substr(0,b.size()-1),1)+"1";
        
         if(ans==2)
            return addBinary(a.substr(0,a.size()-1),b.substr(0,b.size()-1),1)+"0";
        
        return addBinary(a.substr(0,a.size()-1),b.substr(0,b.size()-1),0)+to_string(ans);
    }
};