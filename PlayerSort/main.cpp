#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct Player {
    string name;
    int score;
};

bool operator<(const Player& a, const Player& b)
{
      if(a.score!=b.score)
      {
          return a.score>b.score;
      }
      else
          return  a.name<b.name;
}

vector<Player> comparator1(vector<Player> players){
    sort(players.begin(),players.end());
    return players;
}

void swap(Player& a, Player& b)
{
    Player temp;
    temp = a;
    a = b;
    b = temp;
}

int partition(vector<Player>& players, int left, int right)
{
    int pivot = right;
    while (left < right)
    {
        while (left<right && players[left] < players[pivot]) ++left;
        while (left<right && !(players[right] < players[pivot])) --right;
        if (left < right)
            swap(players[left], players[right]);
        else
            break;
    }
    if ( left < pivot ) swap(players[left], players[pivot]);
    return left;
}

vector<Player> comparator(vector<Player>& players, int left, int right)
{
    // implement quick sort
    if (left >= right) return players;

    int pivot = partition(players, left, right);
    for(size_t i = 0; i < players.size(); i++) {
        cout << players[i].name << " " << players[i].score << endl;
    }
    cout <<"--------------"<<endl;
    comparator(players, left, pivot-1);
    comparator(players, pivot+1, right);
    return players;
}

int main()
{
    Player p1;
    vector<Player> players;
    p1.name = "amy", p1.score = 100;
    players.push_back(p1);
    p1.name = "david", p1.score = 100;
    players.push_back(p1);
    p1.name = "heraldo", p1.score = 50;
    players.push_back(p1);
    p1.name = "aakansha", p1.score = 75;
    players.push_back(p1);
    p1.name = "aleksa", p1.score = 150;
    players.push_back(p1);

    for(size_t i = 0; i < players.size(); i++) {
        cout << players[i].name << " " << players[i].score << endl;
    }

    //vector<Player > answer = comparator(players);
    players = comparator(players, 0, players.size()-1);
    for(size_t i = 0; i < players.size(); i++) {
        cout << players[i].name << " " << players[i].score << endl;
    }
    return 0;
}
