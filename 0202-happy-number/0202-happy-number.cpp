class Solution {
    int nextNum(int x) {
        int s = 0;
        while (x > 0) { int d = x % 10; s += d * d; x /= 10; }
        return s;
    }
public:
    bool isHappy(int n) {
        int slow = n;
        int fast = nextNum(n);
        while (fast != 1 && slow != fast) {
            slow = nextNum(slow);
            fast = nextNum(nextNum(fast));
        }
        return fast == 1;
    }
};
