class Solution {
public:
    vector<int> getRow(int k) {
        vector<int> result;
        result.push_back(1);
        
        for(int i = 1; i <= k; i++){
            long prevElement = result[i - 1];
            long currentElement = prevElement * (k - i + 1) / i;
            
            result.push_back((int) (currentElement));
        }
        
        return result;
    }
};