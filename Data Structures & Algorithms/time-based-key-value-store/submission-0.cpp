class TimeMap {
public:
    unordered_map<string, vector<pair<string,int>>> a ;
    TimeMap() { 
    }
    
    void set(string key, string value, int timestamp) {
        a[key].push_back({value,timestamp});
    }
    
    string get(string key, int timestamp) {
        int i = 0; 
        int j = a[key].size()-1;
        if(a[key].size()==0)
        {
            return "";
        }
        int small = -1;
        while(j>=i)
        {
            int mid = (i+j)/2;
            if(a[key][mid].second == timestamp)
            {
                return a[key][mid].first;
            }
            if(a[key][mid].second>timestamp)
            {
                j=mid-1;
            }
            else{
                small = mid; 
                i=mid+1;
            }
        }
        if(small==-1)
            return "";

        return a[key][small].first;
    }
};
