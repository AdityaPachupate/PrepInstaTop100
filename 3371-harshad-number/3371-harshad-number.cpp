class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=0;
        int digit=0;
        int org =x;

        while(x!=0){
            digit=x%10;
            sum+=digit;
            x/=10;
        }

        return org % sum == 0?sum:-1;
    }
};