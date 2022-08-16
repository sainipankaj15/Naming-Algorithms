// Question link ::   https://leetcode.com/problems/count-primes/


//METHOD 1
//using DP
class Solution {
public:
    int countPrimes(int n) {
        
        // base case
        if(n==0)
        return 0;
       
        // firstly i created a vector where index = number 
        // and if isprime[index] = 1 then it means number it is prime
        vector<int> isprime(n+1,1);
        
        isprime[0] = 0;
        isprime[1] = 0;
        
        // 0 and 1 are non prime so we manually do it 
        
        // now from 2 to n 
        for(int i=2;i<=n;i++){
            // if number is prime then we will push 0 at multiple of that prime number 
            // like prime number is 2 then 4 ,6 , 8 ,10 till n all are non-prime
            if(isprime[i]==1){
                //if we are in this IF condition means number is prime 
                //now what we will do : we will set non-prime which are multiple of this prime numbers
                for(int j = 2;i*j<=n;j++)
                    isprime[j*i] = 0;
            }
        }
        
        
        // now just the count the 1 in vector : this is our final answer
        // REMEMBER the Question we have to return the prime numbers that are stricly less than n
        int ans=0;
        ans = count(isprime.begin(),isprime.end()-1,1);
        //count is STL function : we can do it manually by just runnning a loop
        
        
        return ans;
        
        
    }
};



// But there is a problem it has huge Time Complexity bcoz we are doing work repeativily 
// n =  10 k liye 
// 2 k mulitple par ishe non prime bola then again 5 k multiple par nonprime tho yeh kaam repeativly ho gaya 
// then we will use    sieve of eratosthenes


// Method 2: sieve of eratosthenes
class Solution {
public:
    int countPrimes(int n) {
        
        // base case
        if(n==0)
        return 0;
       
        // firstly i created a vector where index = number 
        // and if isprime[index] = 1 then it means number it is prime
        vector<int> isprime(n+1,1);
        
        isprime[0] = 0;
        isprime[1] = 0;
        
        // 0 and 1 are non prime so we manually do it 
        
        // now from 2 to n 
       long long int j=0;
        for(int i=2;i<=n;i++){
            // if number is prime then we will push 0 at multiple of that prime number 
            // like prime number is 2 then 4 ,6 , 8 ,10 till n all are non-prime
            if(isprime[i]==1){
                //if we are in this IF condition means number is prime 
                //now what we will do : we will set non-prime which are multiple of this prime numbers
                for(j = (long)i*i ;j<=n;j = j+i)
                    isprime[j] = 0;
            }
        }
        
        
        // now just the count the 1 in vector : this is our final answer
        // REMEMBER the Question we have to return the prime numbers that are stricly less than n
        int ans=0;
        ans = count(isprime.begin(),isprime.end()-1,1);
        //count is STL function : we can do it manually by just runnning a loop
        
        
        return ans;
        
        
    }
};
