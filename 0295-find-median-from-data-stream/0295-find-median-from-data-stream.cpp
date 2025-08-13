class MedianFinder {
public: 
    priority_queue<int> maxx; // max-heap for lower half
    priority_queue<int, vector<int>, greater<int>> minn; // min-heap for upper half
    
    MedianFinder() {}

    void addNum(int num) {
        maxx.push(num);

        minn.push(maxx.top());
        maxx.pop();

        if (maxx.size() < minn.size()) {
            maxx.push(minn.top());
            minn.pop();
        }
    }
    
    double findMedian() {
        if (maxx.size() > minn.size()) {
            return maxx.top();
        } else {
            return (maxx.top() + minn.top()) / 2.0;
        }
    }
};
