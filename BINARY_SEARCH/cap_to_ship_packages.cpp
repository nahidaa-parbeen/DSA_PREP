class Solution {
public:
    int load(vector<int>& weights, int weight)
    {
        int n = weights.size();
        int days=1;
        int current_load =0;
        for(int i = 0;i<n;i++)
        {
            if((current_load + weights[i]) <= weight)
            {
                current_load += weights[i];
            }
            else
            {
                days++;
                current_load = weights[i];
            }
            
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int sum = accumulate(weights.begin(),weights.end(),0);
        int maxi = *max_element(weights.begin(),weights.end());

        int low = maxi ;
        int high = sum;
        int result =0;

        while(low<=high)
        {
            int mid = (low+high)/2;
            if(load(weights,mid)<=days)
            {
                result = mid;
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return result ;
        
    }
};
