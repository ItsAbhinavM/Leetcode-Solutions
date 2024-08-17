class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int total=n*n;
        int number=0;
        for (int i=0;i<commands.size();i++){
            if (commands[i]=="DOWN"){
                number+=n;
            } else if (commands[i]=="RIGHT"){
                number+=1;
            } else if (commands[i]=="LEFT"){
                number-=1;
            } else {
                number-=n;
            }
        }
        return number;
    }
};
