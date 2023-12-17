#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <set>
#include <map>
#include <string>

using std::string;

void change_1(std::stack<std::vector<std::queue<int>>> &a, int from, int to)
{
    // your code here
    std::stack <std::vector <std::queue <int>>> tmp_stk;
    while (!a.empty()) {
        std::vector <std::queue <int>> tmp_vec = a.top();
        a.pop();

        for (auto &q : tmp_vec) {
            std::queue <int> tmp_q;
            while (!q.empty()) {
                int u = q.front();
                q.pop();

                if (u == from) u = to;
                tmp_q.push(u);
            }
            q = tmp_q;
        }
        tmp_stk.push(tmp_vec);
    }
    while (!tmp_stk.empty()) {
        a.push(tmp_stk.top());
        tmp_stk.pop();
    }
}

void change_2(std::map<string, std::pair<std::priority_queue<int>, int>> &a, int from, int to)
{
    // your code here
    for (auto &[s, p] : a) {
        auto &[pq, i] = p;

        if (i == from) i = to;
        std::priority_queue <int> tmp_pq;
        while (!pq.empty()) {
            int u = pq.top();
            pq.pop();

            if (u == from) u = to;
            tmp_pq.push(u);
        }
        pq = tmp_pq;
    }
}

void change_3(std::set<std::pair<std::list<int>, std::map<int, std::pair<int, string>>>> &a, int from, int to)
{
    // your code here
    std::set <std::pair <std::list <int>, std::map <int, std::pair <int, string>>>> tmp_a;
    for (auto p : a) {
        auto &[l, mp] = p;
        for (auto &v : l) {
            if (v == from) v = to;
        }
        std::map <int, std::pair <int, string>> tmp_mp;
        for (auto [i, p2] : mp) {
            int u = i;
            if (i == from) u = to;
            if (p2.first == from) p2.first = to;
            tmp_mp.emplace(u, p2);
        }
        mp = tmp_mp;
        tmp_a.insert(p);
    }
    a = tmp_a;
}

#endif
