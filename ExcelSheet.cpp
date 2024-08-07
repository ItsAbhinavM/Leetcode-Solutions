class Solution {
public:
    string convertToTitle(int columnNumber) {
        vector<string> alpha;
        string all="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string result;
        for (int i=0;i<all.length();i++){
            string letter(1, all[i]);  
            alpha.push_back(letter);
        }
       if (columnNumber<=26){
        return alpha[columnNumber-1];
       } else{
        while(columnNumber){
            columnNumber-=1;
            char temp='A' + columnNumber%26;
            result=temp+result;
            columnNumber/=26;
        }
       }
       return result;
    }
};
