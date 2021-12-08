#include <iostream>
#include <map>
#include <vector>
using namespace std;

struct storage
{
    vector<storage> m_arr;
    int m_current_number;
    int m_count;
    storage(int number, int count) {
        for (int i = 0; i < number; ++i)
        {
            m_arr.push_back(storage());
        }
        m_current_number = number;
        m_count = count;
//        storage storage1();
//        arr[0] = storage1;
//        storage storage2();
//        arr[1] = storage2;
//        storage storage3();
//        arr[2] = storage3;
//        storage storage4();
//        arr[3] = storage4;
    }

    storage()
    {

    }
};

map<int, int> lst; // current value, count
vector<int> results(10);



int main() {
    int n;
    cin >> n;

    //vector<int> arr(n);
    lst.push_back(n);
    std::for_each(lst.begin(), lst.end(), [&](const auto& item){
        if (item == 2) {
            n -= 1;
            counter++;
        } else if (n % 3 == 0) {
            n /= 3;
            counter++;
        } else {
            if ((n - 1) % 3 == 0) {
                n -= 1;
                counter++;
            } else if ((n + 1) % 3 == 0) {
                n += 1;
                counter++;
            } else if ((n - 2) % 3 == 0) {
                n -= 1;
                counter++;
            } else if ((n + 2) % 3 == 0) {
                n += 1;
                counter++;
            }
    }))

//    storage store(n, 0);
//    int counter = 0;
//    while (n != 1) {
//        cout << n << endl;
//        // store.arr[0]
//        if (store.m_arr[0].m_current_number == 2)
//        {
//            store.m_arr[0].m_current_number -= 1;
//            store.m_arr[0].m_count++;
//        }
//        else if (store.m_arr[0].m_current_number % 3 == 0)
//        {
//            store.m_arr[0].m_current_number /= 3;
//            store.m_arr[0].m_count++;
//        }
//        else
//        {
//            store.m_arr[0].m_arr[]
//            if ((store.m_arr[0].m_current_number - 1) % 3 == 0)
//            {
//                store.m_arr[0].m_current_number -= 1;
//                store.m_arr[0].m_count++;
//            }
//        }
//        cout << n << endl;
//        if (n == 2) {
//            n -= 1;
//            counter++;
//        } else if (n % 3 == 0) {
//            n /= 3;
//            counter++;
//        } else {
//            if ((n - 1) % 3 == 0) {
//                n -= 1;
//                counter++;
//            } else if ((n + 1) % 3 == 0) {
//                n += 1;
//                counter++;
//            } else if ((n - 2) % 3 == 0) {
//                n -= 1;
//                counter++;
//            } else if ((n + 2) % 3 == 0) {
//                n += 1;
//                counter++;
//            }
//        }
    }
    cout << counter;
}
