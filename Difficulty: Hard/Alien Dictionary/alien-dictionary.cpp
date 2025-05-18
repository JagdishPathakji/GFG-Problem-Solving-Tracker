//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string findOrder(vector<string> &words) {
        
        unordered_map<char,vector<char>> adjlist;
        unordered_map<char,int> mp;
        set<char> s;
        
        for(int i=0; i<words.size(); i++) {
            for(int j=0; j<words[i].size(); j++) {
                mp[words[i][j]] = 0;
                s.insert(words[i][j]);
            }
        }
        
        // the set will contain all the unique chars. thus, k = s.size();
        for(int i=0; i<words.size()-1; i++) {
            string str1 = words[i];
            string str2 = words[i+1];
            int len = min(str1.size(),str2.size());
            bool found = false;
            for(int j=0; j<len; j++) {
                if(str1[j] != str2[j]) {
                    found = true;
                    mp[str2[j]]++;
                    adjlist[str1[j]].push_back(str2[j]);
                    break;
                }
            }
            
            if(!found and str1.size() > str2.size())
            return "";
        }
        
        // Indegree and Adjacency list is now prepared and we need to just apply kahn's algorithm for getting the correct sequence
        queue<char> q;
        string ans = "";
        
        for(auto it = mp.begin(); it != mp.end(); it++) {
            if(it->second == 0)
            q.push(it->first);
        }
        
        while(!q.empty()) {
            
            char node = q.front();
            q.pop();
            
            ans += (node);
            
            for(char neighbour : adjlist[node]) {
                mp[neighbour]--;
                if(mp[neighbour] == 0)
                q.push(neighbour);
            }
        }
        
        if(ans.size() != s.size())
        return "";
        
        return ans;
    }
};


//{ Driver Code Starts.

bool validate(const vector<string> &original, const string &order) {
    unordered_map<char, int> mp;
    for (const string &word : original) {
        for (const char &ch : word) {
            mp[ch] = 1;
        }
    }
    for (const char &ch : order) {
        if (mp.find(ch) == mp.end())
            return false;
        mp.erase(ch);
    }
    if (!mp.empty())
        return false;

    for (int i = 0; i < order.size(); i++) {
        mp[order[i]] = i;
    }

    for (int i = 0; i < original.size() - 1; i++) {
        const string &a = original[i];
        const string &b = original[i + 1];
        int k = 0, n = a.size(), m = b.size();
        while (k < n and k < m and a[k] == b[k]) {
            k++;
        }
        if (k < n and k < m and mp[a[k]] > mp[b[k]]) {
            return false;
        }
        if (k != n and k == m) {
            return false;
        }
    }
    return true;
}

int main() {
    string str;
    getline(cin, str);
    int t = stoi(str);
    while (t--) {
        getline(cin, str);
        stringstream ss(str);
        string curr;
        vector<string> words;
        while (ss >> curr)
            words.push_back(curr);

        vector<string> original = words;

        Solution ob;
        string order = ob.findOrder(words);

        if (order.empty()) {
            cout << "\"\"" << endl;
        } else {
            cout << (validate(original, order) ? "true" : "false") << endl;
        }
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends