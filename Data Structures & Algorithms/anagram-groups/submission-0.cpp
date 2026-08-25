class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> mp;

        for (string str : strs) {
            
            // Create the key
            string key = str;
            sort(key.begin(), key.end());

            // Add original string to its group
            mp[key].push_back(str);
        }

        // Convert map values into answer
        vector<vector<string>> ans;

        for (auto& it : mp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};
