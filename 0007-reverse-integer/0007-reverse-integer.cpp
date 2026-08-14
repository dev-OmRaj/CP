class Solution {
public:
    int reverse(int x) {
    bool neg = false;
    if(x == INT_MIN) return 0;
    if(x < 0){
        neg = true;
        x = -1 * x;
    } 
    int new_num = 0;
    int old_num = x;
    while(old_num != 0){
        if(new_num > (INT_MAX - (old_num%10))/ 10) return 0;
        new_num = new_num*10 + (old_num%10);
        old_num = old_num / 10;
    }
    if(neg){
        new_num = new_num * -1;
    }
    return new_num;
    }
};