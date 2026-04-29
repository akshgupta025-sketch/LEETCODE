class Solution {
public:
    string defangIPaddr(string address) {
        string a;
        int l = address.size();
       for(int i=0;i<l;i++){
        if(address[i]=='.'){
            a.push_back('[');
             a.push_back('.');
              a.push_back(']');
        }else{
            a.push_back(address[i]);
        }
       }
       return a;
    }
};