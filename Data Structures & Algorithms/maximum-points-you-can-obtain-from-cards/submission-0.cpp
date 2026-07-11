class Solution {
public:
    int maxScore(vector<int>& card, int k) {
        int total_sum = 0;
        int n = card.size();

        for(int i = 0; i< n; i++){
            total_sum += card[i];
        }
        int window_size = n - k;
        if(window_size == 0){

            return total_sum;
        }
        
        int window_sum = 0;
        for(int i = 0; i< window_size; i++ ) {
            window_sum += card[i];
        }
        int min_sum = window_sum;

        for(int j = window_size; j < n; j++){
            window_sum += card[j];

            window_sum -= card[j - window_size];

            min_sum = min(min_sum, window_sum);
        }
        return total_sum - min_sum;
    }
};