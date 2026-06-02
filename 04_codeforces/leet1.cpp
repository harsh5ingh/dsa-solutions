class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int mini = INT_MAX;
        int n = landStartTime.size();
        int m = waterStartTime.size();

    // Land -> Water
        for(int i = 0; i<n; i++){
            int sum = landStartTime[i] + landDuration[i];
            int waterSum = 0;
            for(int j = 0; j<m; j++){
                int x = max(sum, waterStartTime[j]);
                int temp = x + waterDuration[j];
                mini = min(mini, temp);
                
            }
        }
        cout << "mini land -> water " << mini << endl;
        
    // Water -> Land
        for(int i = 0; i<m; i++){
            int sum = waterStartTime[i] + waterDuration[i];
            int landSum = 0;
            for(int j = 0; j<n; j++){
                int x = max(sum, landStartTime[j]);
                int temp = x + landDuration[j];
                mini = min(mini, temp);
                
            }
        }
        cout << "mini lwater -> land " << mini << endl;
        return mini;
    }


};