class Solution {
public:
    int maxNumberOfBalloons(string text) {
        // a:0, b:1, n:2, o:3, l:4] char:index
        vector<int>c(5,0);
        for(int i = 0; i < text.size() ; i++){
            if(text[i] == 'a') c[0]++;
            else if(text[i] == 'b') c[1]++;
            else if(text[i] == 'n') c[2]++;
            else if(text[i] == 'o') c[3]++;
            else if(text[i] == 'l') c[4]++;
        }
        int temp_other = min ( min ( c[0], c[1] ), c[2] );
        int temp_o_l = min(c[3]/2, c[4]/2 );

        return min(temp_other, temp_o_l);
        

    }
};