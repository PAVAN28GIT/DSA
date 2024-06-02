// problem : https://leetcode.com/problems/time-based-key-value-store/description/

// --------------------------this is  BINARY SEARCH problem  -------------------


// ---------------using HASH MAP ----------------

class TimeMap {
public:


    // {key ,{timestamp , value}}
    unordered_map<string, map<int, string> > mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key][timestamp] = value;
    }
    
    string get(string key, int timestamp) {
        string ans ="";
        if(mp.find(key) != mp.end() && !mp[key].empty() && mp[key].begin()->first<=timestamp) {
          // here i tried doing 
          // auto temp = mp[key] ... and then use that further ...but got TLE ....
            for( auto it =mp[key].rbegin() ; it!=mp[key].rend();it++){
                if(it->first<=timestamp){
                    ans = it->second;
                    break;
                }
            }
        }
        return ans; 
    }
};

