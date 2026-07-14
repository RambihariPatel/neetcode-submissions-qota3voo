class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxCurr = -1;
        for(int i = arr.size() - 1; i >= 0; i--){
            int curEle = arr[i];
            arr[i] = maxCurr;

            if(maxCurr < curEle){
                maxCurr = curEle;
            }
        }
        return arr;
    }
};