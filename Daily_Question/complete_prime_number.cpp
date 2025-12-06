class Solution {
public:
    bool isprime(long long n){
            if(n<=1){
                return false;
            }
            else if(n==2){
                return true;
            }
            else if(n%2==0){
                return false;
            }
            for(int i=3;i<n;i++){
                if(n%i==0){
                    return false;
                }
            }
            return true;
        }
    bool completePrime(int num) {
        if(!isprime(num)){
            return false;
        }
        long long c=10;
        while(c<=num*10){
            long long d=num%c;
            if(!isprime(d)){
                return false;
            }
            c=c*10;
        }
        long long a=1;
        while(a<=num/10){
            a=a*10;
        }
        long long tmp=num;
        while(a>0){
            long long b=tmp/a;
            if(!isprime(b)){
                return false;
            }
            a=a/10;
        }
        return true;
    }
};
