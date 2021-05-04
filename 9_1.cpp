#include<iostream>
#include<cstring>
using namespace std;
class student
{
private:
    int scores[5];
    int sum;
public:
    initialize()
    {
        sum=0;
    }
    void input()
    {
        for (int i=0;i<5;i++)
        {
            cin>>scores[i];
            sum+=scores[i];
        }
    }
    int calcTotalScore()
    {
        return sum;
    }
};
int main()
{
    student A;
    student B;
    cout<<"enter score of A";
    A.input();
    cout<<"enter score of B";
    B.input();
    int a_score=A.calcTotalScore();
    int b_score=B.calcTotalScore();
    if (a_score>b_score)
    {
        cout<<"student A score better";

    }
    else
        cout<<"student B score better";
    return 0;
}
