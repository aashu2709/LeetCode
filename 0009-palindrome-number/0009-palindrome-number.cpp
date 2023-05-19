class Solution {
public:
    bool isPalindrome(int x) {
         if(x<0)
         return false;
         if(x != 0 && x%10==0)
         return false;
         int orignal_number=x;
        
        long int reversed_number=0;
        
        int remainder;
        
        while(x!=0){
            remainder=x%10;
            reversed_number = reversed_number*10+remainder;
            
            x/=10;
        }
        if(reversed_number==orignal_number){
            return true;
        }
        else{
            
            return false;
            
        }
        
    }
};