#ifndef __SONG_H__
#define __SONG_H__

#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include "priority_queue.h"

using namespace std;

class Song {
  public:
    std::string artist,title;
    int count;

    Song() { }
    Song(const Song &s) : artist(s.artist), title(s.title), count(s.count) { }
    Song(std::string artist,std::string title,int count) :  artist(artist), title(title), count(count) { }

    friend std::ostream& operator<<(std::ostream &out,const Song &s) {
      return out << "Artist: " << s.artist << " Title: " << s.title << " count: " << s.count;
    }

};

//  you have to write something below this line   
class Compare1 {
  public:
    bool operator()(const Song &a, const Song &b) const {
      return make_pair(a.artist, a.title) > make_pair(b.artist, b.title);
    }
};

class Compare2 {
  public:
    bool operator()(const Song &a, const Song &b) {
      return make_pair(-a.count, make_pair(a.artist, a.title)) > make_pair(-b.count, make_pair(b.artist, b.title));
    }
};

//  you *MIGHT* have to change the declaration of pq1 and pq2
CP::priority_queue<Song, Compare1> pq1;
CP::priority_queue<Song, Compare2> pq2;

#endif
