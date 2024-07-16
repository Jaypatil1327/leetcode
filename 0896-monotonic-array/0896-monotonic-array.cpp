class Solution {
public:
    bool isMonotonic(vector<int>& arr) {
        
        bool asc = true ; 
        bool desc = false ; 

        for(int i = 1 ; i <= arr.size()-1 ; i++)
        {
            if(arr[i] == arr[i-1]) continue ; 

            if(arr[i] > arr[i-1] && asc == true) desc = true ; 
            else if(arr[i] < arr[i-1] &&  desc == false) asc = false ;
            else return false ; 
        }
        return true  ; 
    }
};