class Solution {
    private:
         int Helper(vector<int>&arr,int n,int Target){
                int sm{0};
             int ct{0};
             unordered_map<int,int>umap;
        
        // finding the frequecy the element
        for(int &i:arr){
            ++umap[i];
        }
             for(int i=1;i<=min(n,Target);i++){
                if(umap.find(i)!=umap.end()) continue;
                 sm+=i;
                 // Sum should not exceed
                 if(sm>Target) break;
                 ct++;
             }
             return ct;
         }
    public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
             return Helper(banned,n,maxSum);
    }
};
