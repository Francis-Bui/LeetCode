// https://leetcode.com/problems/n-th-tribonacci-number

public:
    int tribonacci(int n) {
        if(n<2)return n;
        if(n==2)return 1;
        int a = 0,b=1,c=1;

        int d;

        for(int i = 3;i <= n;i++)
        {
            d = c;
            c = a+b+c;
            a=b;
            b=d;
        }
        return c;  
    }
};```