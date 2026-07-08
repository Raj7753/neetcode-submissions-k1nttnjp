class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       int n = s1.size() , m = s2.size();

       if(n > m) return false;

       vector<int> Target (26,0);
       vector<int> Current (26,0);

       for(char c : s1)
       Target[c - 'a']++;
for (int i = 0; i < n; i++)
            Current[s2[i] - 'a']++;

        if (Target == Current)
            return true;

        for(int i = n; i < m; i++){        
            Current[s2[i - n] - 'a']--;
            Current[s2[i] - 'a']++;
        
        if(Target == Current)
            return true;
    }

    return false;
    }

};