class Solution {
public:
    
    
   static bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
    {
        return a.second<b.second;
    }
    
    int twoCitySchedCost(vector<vector<int>>& costs) {
        
        int n=costs.size();
        
        vector<pair<int,int>> v;
        
        for(int i=0;i<n;i++)
        {
            v.push_back(make_pair(i,costs[i][0]-costs[i][1]));
            
            
        }
        
        sort(v.begin(),v.end(),sortbysec);
        
        int min_cost=0,count=1;
        
        for(auto it:v)
        {
            if(count<=n/2)
            {
                min_cost+=costs[it.first][0];
                count++;
                
            }
            
            else
            {
                min_cost+=costs[it.first][1];
                count++;
            }
        }
        
        return min_cost;
    }
};