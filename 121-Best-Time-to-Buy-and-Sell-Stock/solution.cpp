// // 代码一 O(n) O(n)
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         const int n=prices.size();
//         if(n<1) return 0;
        
//         vector<int> min_prices(n);
        
//         min_prices[0]=prices[0];
//         for(int i=1;i<n;++i){
//             min_prices[i]=min(min_prices[i-1],prices[i]);
//         }
        
//         int result=-1;
//         for(int i=0;i<n;++i){
//             int max_p=prices[i]-min_prices[i];
//             if(max_p>result){
//                 result=max_p;
//             }
//         }
        
//         return result;
//     }
// };



// 代码二 O(n) O(1)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        const int n=prices.size();
        if(n<2) return 0;
        
        int result=0;
        int cur_min=prices[0];
        
        for(int i=1;i<n;++i){
            result=max(result,prices[i]-cur_min);
            cur_min=min(cur_min,prices[i]);
        }
        
        return result;
    }
};