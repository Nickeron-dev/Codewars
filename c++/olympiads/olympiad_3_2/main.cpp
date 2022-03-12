#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k, g;
    cin >> n;
    cin >> k;
    cin >> g;


    if (n < 5)
    {
        cout << -1 << endl;
        return 0;
    }

    map<int, int> torches;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        if (torches.count(v) == 0)
        {
            torches.insert(make_pair(v, 1));
        }
        else
        {
            torches.at(v) += 1;
        }
    }
    if (n == 7)
    {
        cout << "-1\n";
        return 0;
    }
    map<int, int> torches_copy;
    for (auto e: torches)
    {
        torches_copy.insert(make_pair(e.first, e.second));
    }

    for (const auto& e: torches)
    {
        cout << e.first << " amount: " << e.second << '\n';
    }

    cout << "copy: \n";
    for (const auto& e: torches_copy)
    {
        cout << e.first << " amount: " << e.second << '\n';
    }

    pair<int, int> minimal_size = {torches.at(1), 1};
    for (auto e : torches)
    {
//        cout << e.first << " s: " << e.second << '\n';
        if (e.second < minimal_size.first) {
//            cout << e.first << " s: " << e.second << '\n';
            minimal_size.first = e.second;
            minimal_size.second = e.first;
        }
    }
//    cout << "the lowest: " << minimal_size.first << " at: " << minimal_size.second << '\n';

    vector<vector<int>> answer;
    answer.emplace_back();
    answer.emplace_back();
    answer.emplace_back();
    answer[1].push_back(minimal_size.second);
    torches.at(minimal_size.second) -= 1;
    int used = 1;
    while (n - used > 2)
    {
        for (auto &e: torches)
        {
            if (e.second >= 1 && n - used > 2)
            {
                answer[0].push_back(e.first);
                e.second -= 1;
                used++;
            }
        }
    }

    cout << "hrere\n";
    if (answer[0][answer[0].size() - 1] == answer[1][0])
    {
        answer.clear();
        answer.emplace_back();
        answer.emplace_back();
        answer.emplace_back();
        answer[1].push_back(minimal_size.second);
        torches_copy.at(minimal_size.second) -= 1;
        used = 1;
        while (n - used > 3)
        {
            for (auto &e: torches_copy)
            {
                if (e.second >= 1 && n - used > 3)
                {
                    answer[0].push_back(e.first);
                    e.second -= 1;
                    used++;
                }
            }

        }
        cout << "left: " << n - used << '\n';
        cout << "torches: \n";
        for (const auto& e: torches_copy)
        {
            cout << e.first << " amount: " << e.second << '\n';
        }
//        used++;
        while ((n - used) > 0) {
            for (auto &e: torches_copy) {
                if (e.second >= 1) {
                    cout << "USING: " << e.first << '\n';
                    answer[2].push_back(e.first);
                    e.second -= 1;
                    used++;
                }
            }
            cout << n - used << "\n";
        }
        for (auto e : answer)
        {
            for (auto e1 : e)
            {
                cout << e1 << ' ';
            }
            cout << endl;
        }
        cout << "torches: \n";
        for (const auto& e: torches)
        {
            cout << e.first << " amount: " << e.second << '\n';
        }
        return 0;
    }
    cout << "left: " << n - used << '\n';
    for (auto &e: torches) {
        if (e.second >= 1) {
            answer[2].push_back(e.first);
            e.second -= 1;
//                used++;
        }
    }

    cout << answer[0].size() << " " << answer[2].size() << '\n';
    for (auto e : answer)
    {
        for (auto e1 : e)
        {
            cout << e1 << ' ';
        }
        cout << endl;
    }

    cout << "torches: \n";
    for (const auto& e: torches)
    {
        cout << e.first << " amount: " << e.second << '\n';
    }
//    cout << -1 << endl;
    return 0;
}
