class Solution
{
public:
    int sqrt(long long f, long long l, long long x)
    {
        if (f > l)
        {
            return l;
        }

        long long mid = f + (l - f) / 2;

        if (mid * mid == x)
        {
            return mid;
        }
        else if (mid * mid > x)
        {
            return sqrt(f, mid - 1, x);
        }
        else
        {
            return sqrt(mid + 1, l, x);
        }
    }

    int mySqrt(int x)
    {
        return sqrt(0, x, x);
    }
};