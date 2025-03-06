vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int, int> mp;
        int n = grid.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mp[grid[i][j]]++;
            }
        }
        int a, b;
        for(int i=1;i<=n*n;i++){
            if(mp.find(i) == mp.end()){
                b = i;
            }else if(mp[i] == 2){
                a = i;
            }
        }
        vector<int> res;
        res.push_back(a);
        res.push_back(b);
        return res;
    }
