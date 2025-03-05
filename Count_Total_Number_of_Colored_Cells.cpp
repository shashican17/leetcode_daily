long long coloredCells(int n) {
        int count = 1;
        long long diff = 4LL;
        long long res =  1LL;

        while(count < n){
            res += diff;
            count++;
            diff += 4;
        }
        return res;
    }
