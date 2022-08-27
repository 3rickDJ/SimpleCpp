#include <iostream>
#include <list>
#include <string>
using namespace std;

struct YoutubeChannel {
  string Name;
  int SubscribersCount;
  YoutubeChannel(string name, int subscribersCount) {
    Name = name;
    SubscribersCount = subscribersCount;
  }
  // operator overloading, must satisfy that the arguments and the function doesnt change. Needed to use the '.remove(ytChannel)', cause that method deletes all the objects in the list that satisfy the equal operator with the given argument
  bool operator==(const YoutubeChannel &Channel) const{
    return this->Name == Channel.Name;
  }
};
struct MyCollection {
  list<YoutubeChannel> myChannels;
  //operator += adds a YoutubeChannel to the List Mychannels
  void operator+=(YoutubeChannel &ytChannel) {
    this->myChannels.push_back(ytChannel);
  }
  //operator -= removes a YoutubeChannel from List MyChannels;
  // this fails if it is not implemented the equal operator between two datatypes YoutubeChannel
  // It must be implemented as a constant funtion with constant arguments, as a method of the type YoutubeChannel, must return a bool value
  void operator-=(YoutubeChannel &ytChannel) {
    this->myChannels.remove(ytChannel);
  }
};

ostream &operator<<(ostream &COUT, YoutubeChannel &ytChannel) {
  COUT << "Name: " << ytChannel.Name << endl;
  COUT << "Subscribers: " << ytChannel.SubscribersCount << endl;
  return COUT;
};

ostream &operator<<(ostream &COUT, MyCollection &myCollection) {
  for (YoutubeChannel ytChannel : myCollection.myChannels)
    COUT << ytChannel << endl;
  return COUT;
}

int main() {
  YoutubeChannel yt1 = YoutubeChannel("ErickDJ", 10);
  YoutubeChannel yt2 = YoutubeChannel("OPenBoxes", 202);
  MyCollection myCollection;
  myCollection += yt1;
  myCollection += yt2;
  cout << myCollection;
  cin.get();
  return 0;
}
