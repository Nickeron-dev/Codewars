#include <iostream>
#include <list>
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

vector<pair<int, int>> lst; // current value, count
vector<int> results;

int main()
{
    long long n;
    cin >> n;
    //lst.(10000);

    //vector<int> arr(n);
    lst.push_back(std::pair<long long, int>(n, 0));
//    std::for_each(lst.begin(), lst.end(), [&](auto &item) {
//        cout << item.first << " " << item.second << endl;
//    });
    while ( ! lst.empty()) {


        // This part should clear repeated elements, but it gives segmentation fault
//        for (int m = 0; m < lst.size(); m++)
//        {
//            for (int k = 0; k < lst.size(); k++)
//            {
//                if (lst[m].first == lst[k].first && lst[m].second == lst[k].second)
//                {
//                    lst[k].first = -1;
//                }
//            }
//        }



//        std::for_each(lst.begin(), lst.end(), [&](auto &item) {
//            cout << "EL: " << item.first << " " << item.second << endl;
//        });
        //std::for_each(lst.begin(), lst.end(), [&](auto &item) {
        for (int i = 0; i < lst.size(); i++) {
            //cout << "First: " << lst[i].first << " Sec: " << lst[i].second << endl;
            if (lst[i].first == -1) {
                lst.erase(lst.begin() + i);
            } else if (lst[i].first == 1) {
                //cout << "1" << endl;
                results.push_back(lst[i].second);
                //cout << "Result: " << lst[i].second << endl;
                lst.erase(lst.begin() + i);
            } else if (lst[i].first == 2) {
                //cout << "2" << endl;
                lst[i].first -= 1;
                lst[i].second++;
            } else if (lst[i].first % 3 == 0) {
                //cout << "3" << endl;
                lst[i].first /= 3;
                lst[i].second++;
            } else {
                if ((lst[i].first - 1) % 3 == 0) {
                    //cout << "4" << endl;
//                    std::for_each(lst.begin(), lst.end(), [&](auto &item) {
//                        cout << "GOT: " << item.first << " " << item.second << endl;
//                    });
                    lst.push_back(pair<int, int>((lst[i].first - 1), (lst[i].second + 1)));
                    lst.push_back(pair<int, int>((lst[i].first + 2), (lst[i].second + 2)));
                    //cout << "444First: " << lst[i].first << " Sec: " << lst[i].second << endl;
                    //cout << "444First RES: " << lst[i].first - 1 << " Sec: " << lst[i].second + 1 << endl;
                    //cout << "444First RES2: " << lst[i].first + 2 << " Sec: " << lst[i].second + 2 << endl;
                    lst.erase(lst.begin() + i);
                } else if ((lst[i].first + 1) % 3 == 0) {
                    //cout << "5" << endl;
                    lst.push_back(pair<int, int>((lst[i].first + 1), (lst[i].second + 1)));
                    lst.push_back(pair<int, int>((lst[i].first - 2), (lst[i].second + 2)));
                    lst.erase(lst.begin() + i);
                }
//                else if ((item.first - 2) % 3 == 0) {
//                    lst.push_back(pair<int, int>((item.first + 1), (item.second + 1)));
//                    lst.push_back(pair<int, int>((item.first - 2), (item.second + 2)));
//                    lst.remove(item);
//                    continue;
//                } else if ((item.first + 2) % 3 == 0) {
//                    item.first += 2;
//                    item.first += 2;
//                }
            }
        }
    }

    int answer = results[0];
    for (int i = 0; i < results.size(); i++) {
        //cout << "El: " << results[i] << " ";
        answer = (answer > results[i]) ? results[i] : answer;
    }
    cout << answer;





//        for (auto& [key, value] : lst) {
//            if (lst.at(key) == 2) {
//                lst.at(key) -= 1;
//                lst.at(key)++;
//            } else if (lst.at(key) % 3 == 0) {
//                lst.at(key) /= 3;
//                value++;
//            } else {
//                if ((lst.at(key) - 1) % 3 == 0) {
//                    lst.at(key) -= 1;
//                    value++;
//                } else if ((lst.at(key) + 1) % 3 == 0) {
//                    lst.at(key) += 1;
//                    value++;
//                } else if ((lst.at(key) - 2) % 3 == 0) {
//                    lst.at(key) -= 2;
//                    value += 2;
//                } else if ((lst.at(key) + 2) % 3 == 0) {
//                    lst.at(key) += 2;
//                    value += 2;
//                }
//            }
//        }




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
    //cout << counter;
    return 0;
}
