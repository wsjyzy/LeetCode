class Solution {
    public int fib(int n) {
        if(n == 0){
            return 0;
        }
        if(n == 1 || n == 2){
            return 1;
        }

        int a = 1;
        int b = 1;
        int temp = 0;
        for(int i = 3;i <= n; i++){
            temp = (a + b)%1000000007;
            a = b;
            b = temp;
        }

        return temp;
    }
}