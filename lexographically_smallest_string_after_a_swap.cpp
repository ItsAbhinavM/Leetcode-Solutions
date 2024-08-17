class Solution {
public:
    string getSmallestString(string s) {
        for (int i=0;i<s.length()-1;i++){
            int c1=int(s[i]-'0');
            int c2=int(s[i+1]-'0');
            if (c1<c2){
                continue;
            } else if(((c1%2==0&&c2%2==0)|| (c1%2==1&&c2%2==1))&&(c1>c2)) {
                s[i]=char(c2+'0');
                s[i+1]=char(c1+'0');
                break;
            }
        }
        return s;
    }
};
