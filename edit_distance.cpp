class Solution {
public:
   
int minDistance(std::string word1, std::string word2)
{
    
    int x = word1.length();
    int y = word2.length();
    
    int distance[x+1][y+1];
    
    for(int i = 0; i <= x; ++i)
    {
        for(int j = 0; j <= y; ++j)
        {
            if( i == 0)
            {
                distance[i][j] = j;
            }
            else if(j == 0)
            {
                distance[i][j] = i;
            }
            
            else if(word1[i-1] == word2[j-1])
            {
                distance[i][j] = distance [i-1][j-1];
            }
            
            else
            {
                distance[i][j] = 1+ std::min(distance[i][j-1], (distance[i-1][j], distance[i-1][j-1]));
            }
            
            
        }
    }
    
    return distance[x][y];
    
}



};