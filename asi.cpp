#include<iostream>
using namespace std;
struct team
{
    string player;
    string team;
    float average;
};
int main()
{
    int sum=0;
    struct team s[3];
    for(int i=0;i<3;i++){
    cout<<"enter the player name"<<endl;
    cin>>s[i].player;
    cout<<"enter the team name"<<endl;
    cin>>s[i].team;
    cout<<"enter the average"<<endl;
    cin>>s[i].average;
    }
    for(int j=0;j<3;j++)
    {
        sum = sum + s[j].average;
        
    }
    cout<<"the average "<<sum/3<<endl;

}