int hammingWeight(uint32_t n) 
{
    int count = 0; 
    while(n) // while true or while bitwise set
    {
        n = n&(n-1); //logical and with previous bianry number.
        ++count; 
        
    }
    
    return count; 
    
}