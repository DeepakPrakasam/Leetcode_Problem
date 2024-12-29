class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int maxWeight = *max_element(weights.begin(), weights.end());
        int tot = accumulate(weights.begin(), weights.end(), 0);
        int left = maxWeight, right = tot;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int currentWeight = 0, neededdays = 1;
        
            for (int weight : weights) {
                if (currentWeight + weight > mid) {
                    neededdays++;
                    currentWeight = 0;
                }
                currentWeight += weight;
            }

            if (neededdays <= days) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }
};