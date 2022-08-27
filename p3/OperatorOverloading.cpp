#include <iostream>
#include <string>
#include <sys/types.h>
using namespace std;

struct YoutubeChannel {
  string Name;
  int SubscribersCount;
  YoutubeChannel(string name, int subscribersCount) {
    Name = name;
    SubscribersCount = subscribersCount;
  }
};
void operator<<(ostream &COUT, YoutubeChannel &ytChannel){
    COUT << "Name: " << ytChannel.Name << endl;
    COUT << "Subscribers: " << ytChannel.SubscribersCount <<endl;
};

int main() {
    YoutubeChannel yt1 = YoutubeChannel("ErickDJ", 10) ;
    cout << yt1;
  cin.get();
  return 0;
}