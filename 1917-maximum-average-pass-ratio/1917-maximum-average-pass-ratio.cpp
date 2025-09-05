class Solution {
public:
    double gain(double x,double y){
        double a=x/y;
        double b= (x + 1) / (y + 1);
        return b-a;
    }
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        int n = classes.size();

        priority_queue<pair<double,int>> pq;

        for(int i=0;i<n;i++){
            double t=gain(classes[i][0],classes[i][1]);
            pq.push({t,i});
        }

        while(extraStudents>0){
            double g=pq.top().first;
            int idx=pq.top().second;
            pq.pop();

            classes[idx][0]=classes[idx][0]+1;
            classes[idx][1]=classes[idx][1]+1;

            double t=gain(classes[idx][0],classes[idx][1]);
            pq.push({t,idx});

            extraStudents--;
        }

        double temp = 0;
        for(int i = 0; i < n; i++){
            temp += (double)classes[i][0] / classes[i][1]; 
        }
        return temp / n;  
    }
};
