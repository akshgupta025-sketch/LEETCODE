class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        int n = s.size();
        int freq[26]={};
        for(char c:s){
            freq[c-'a']++;
        }
        for(char c:target){
            freq[c-'a']--;
        }
        //store freq fir target k char ki freq minus taki remaining paat lage
        for(int i=target.size()-1;i>=0;i--){
            int cur = target[i]-'a';
            freq[cur]++;
        bool ok = true; //har target k char me iterate karo piche se kyu taki apne ko smallest lexo mil jaye
        for(int c=0;c<26;c++){
             if(freq[c]<0){
                ok = false;
                break;
             }
             //ab dekha ki agar kisi me ok = true h matlab ha yeh difference mil gya vrna negative ho jata koi
        }
        if(!ok) continue;
        int next = -1;
        for(int c=cur+1;c<26;c++){
            if(freq[c]>0){
                next = c;
                break; //ab main logic lexo smallest prefix vahi difference element m next available greater element taki lexo ho jaye baki bachi string sort
            }
        }
        if(next==-1)continue; //let say koi bada elem nhi mila to possible nhi
        freq[next]--; //freq kam ho gyi used
        string ans = target.substr(0,i); //ye prefix liya
        ans+=char('a'+next); //us index vale char ko dala
        for(int c=0;c<26;c++){
            ans.append(freq[c],char('a'+c));  //baki string sort krdi
        }
        return ans;
    }
    return "";
    }
};