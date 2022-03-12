#include <iostream>
#include <vector>

using namespace std;

int term[10000000];
// 26
int recursion(long long k, long long a, int counter)
{
    if (a > k)
    {
        return -1;
    }
    if (a == k)
    {
        return counter;
    }
    counter++;
    if (term[a] != 0)
        return term[a];

    else {


        term[a + a] = recursion(k, a + a, counter);
        term[a + a + 1] = recursion(k, a + a + 1, counter);

        if (term[a + a] == -1)
        {
            return term[a + a + 1];
        }
        if (term[a + a + 1] == -1){
            return term[a + a];
        }

        if (a > k)
        {
            return -1;
        }

        return term[a + a + 1] < term[a + a] ? term[a + a + 1] : term[a + a];

        return term[a];
    }
    counter++;

    long long temp_a_1 = a + a;
    long long temp_a_2 = a + a + 1;

    int ret1 = recursion(k, temp_a_1, counter);
//    cout << "here" << endl;
//    cout << "ret1: " << ret1 << endl;
    int ret2 = recursion(k, temp_a_2, counter);
//    cout << "here2" << endl;
//    cout << "ret1: " << ret1 << endl;
//    cout << "ret2: " << ret2 << endl;
    if (ret1 == -1)
    {
        return ret2;
    }
    if (ret2 == -1){
        return ret1;
    }

    if (a > k)
    {
        return -1;
    }

    return ret2 < ret1 ? ret2 : ret1;
}


// 32
//int min_steps(int n, int m)
//{
//    int ans = 0;
//
//    // Continue till m is greater than n
//    while(m > n)
//    {
//        // If m is odd
//        if(m % 2)
//        {
//            // add one
//
//
//            m -= n;
//            m -= 1;
//            n += n + 1;
//            ans++;
//        }
//        else
//        {
//            m -= n;
//            n += n;
//        }
//        // divide m by 2
//
//        ans++;
//    }
//
//    // Return the required answer
//    return ans;
//}

//42
int shortest_steps_to_num(int num)
{
    int n;
    for (n = 0; num > 1; ++n)
        if (num & 1)
        {
            --num;
            num >>= 1;
        }
        else
            num >>= 1;
    return n;
}

int main() {
    long long k;
    cin >> k;

//    int answer = recursion(k, 1, 0);
//    int answer = min_steps(1, k);
    int answer = shortest_steps_to_num(k);
    cout << answer << endl;
    return 0;
}
