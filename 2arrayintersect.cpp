class Solution
{
public: 
	std::vector<int> intersection(std::vector<int>& n1, std::vector<int>& n2)
	{
	    bool intersecting = true;
        int n1_size = n1.size();
        int n2_size = n2.size();
        std::vector <int> intersection; 
        
        for (int j = 0; j < n2_size; j++) {
            for (int r = 0; r < intersection.size(); r++) {
                if (n2[j] == intersection[r]) {
                    intersecting = false;
                    break;
                }
            }
            
            if (intersecting) {
                for (int i = 0; i < n1_size; i++) {
                    if (n2[j] == n1[i]) {
                        intersection.push_back(n2[j]);
                        break;
                    }
                }
            } else {
                intersecting = true;
                continue;
            }
        
        } 
        
        return intersection;
	}
};