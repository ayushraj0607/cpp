#include<iostream>
using namespace std;
class Game
{
    int arr[5];
    public:
    void set_score(int round,int score)
    {
        arr[round]=score;
    }
    int get_score(int round)
    {
        return arr[round];
    }
};
class gameResult:public Game   
{
    int result[5];
    public:
   void set_result(int round,int score)
    {
        result[round]=score;
    }
    int get_result(int round)
    {
        return result[round];
    }
    int final_result()
    {
        int s=0;
        for(int i=0;i<5;i++)
        s=s+result[i];
        return s;
    }
};
int main()
{
    gameResult obj;
    obj.set_result()
}