class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
        vector<vector<int>> v1 ;  
        sort(v.begin() , v.end()) ; 
        for(int i = 0 ; i < v.size() ;i++)
        {
            if(i != 0 && v[i] == v[i-1]) continue ; 
            else 
            {
                int j = i+1 ; 
                int k = v.size()-1 ; 

                while(j<k)
                {
                    int sum = v[i]+v[j]+v[k] ; 

                    if(sum > 0) k-- ;
                    else if (sum < 0) j++ ; 
                    else 
                    {
                        vector<int> ans ; 
                        ans.push_back(v[i]) ; 
                        ans.push_back(v[j]) ; 
                        ans.push_back(v[k]) ; 

                        v1.push_back(ans) ; 
                        j++ ; k-- ; 
                        while(j < k && v[j]==v[j-1]) j++ ;  
                        while(j < k && v[k]==v[k+1]) k-- ;  
                    }
                }
            }
        }
        return v1 ; 
    }
};