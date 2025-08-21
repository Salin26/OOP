#include<bits/stdc++.h>

using namespace std;

class song
{
public:
    string songtitle;
    string artistname;
    string duration;


    void info()
    {
        cout<<"SONG TITLE :"<<songtitle<<endl<<"ARTIST NAME :"<<artistname<<endl<<"SONG DURATION :"<<duration<<endl;

    }

};

int main()
{
    song mysong;
    mysong.songtitle="Bohemian Rhapsody";
    mysong.artistname = "Queen";
    mysong.duration = "5:55";

    mysong.info();

    return 0;


}
