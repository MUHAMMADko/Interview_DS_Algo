/*
      MY YOUTUBE VIDEO ON THIS Qn : <soon>
      Company Tags                : GOOGLE
      Leetcode Link               : https://leetcode.com/problems/can-place-flowers/
*/

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int l = flowerbed.size();
        
        
        
        for(int i = 0; i<l; i++) {
            
            if(flowerbed[i] == 0) {
                
                bool leftEmpty   = (i==0) || (flowerbed[i-1] == 0);
                
                bool rightEmpty  = (i == l-1) || (flowerbed[i+1] == 0);
                
                if(leftEmpty && rightEmpty) {
                    flowerbed[i] = 1;
                    n--;
                    if(n <= 0)
                        return true;
                }
                
            }
            
        }
        
        return n <= 0;
        
    }
};
