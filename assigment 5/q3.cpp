#include<iostream>
using namespace std;
class testResult
{
    int roll_no,right,wrong,net_score;
    static int right_weightage,wrong_weightage;
    public:
     void set_roll_no() {  int x; roll_no=x;  }
     void get_roll_no() {  cout<<"Roll no "<<roll_no<<endl;  }
     void set_right() {  int x; right=x;  }
     void get_right() {cout<<"right "<<right<<endl;  }
     void set_wrong() {  int x; wrong=x;  }
     void get_wrong() {cout<<"wrong "<<wrong<<endl;  }
     void set_net_score() {  int x; net_score=x;  }
     void get_net_score() {  cout<<"net score "<<net_score<<endl;  }
    static void set_right_weightage() {  int x; right_weightage=x;  }
    static void get_right_weightage() {  cout<<"rightt weightage "<<right_weightage<<endl;  }
    static void set_wrong_weightage() {  int x; wrong_weightage=x;  }
    static void get_wrong_weightage() {  cout<<"wrong weightage "<<wrong_weightage<<endl;  }
};
int testResult::right_weightage;
int testResult::wrong_weightage;
int main()
{
    testResult result[5];
    int i;
    for(i=0;i<5;i++)
    {
           
    }
    
    return 0;
}