/*
Given a positive integer which fits in a 32 bit signed integer, find if it can be expressed as A^P 
where P > 1 and A > 0. A and P both should be integers.
Input : 4
Output : True  
as 2^2 = 4. 
*/


int Solution::isPower(int A) {
    if(A == 1){
        return 1;
    }
    
    for(int i=2;i<=sqrt(A);i++)
    {
        long long int num=1;
        while(true)
        {
            num=num*i;
            if(num==A)
            return 1;
            
            else if(num>A)
            break;
        }
    }
    return 0;
}
