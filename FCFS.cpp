///FIRST COME FIRST SERVE
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> burst_Time,gantt_chart;
    int Process,gantt_S_P=0,sum=0,avg;

    cin>>Process;


    for(int i=0;i<Process;i++)
    {
        int bt;
        cin>>bt;
        burst_Time.push_back(bt);
    }

    ///calculate the gantt chart

    cout<< "Gantt Chart 0 ";

    for(int i=0;i<Process;i++)
    {

      gantt_chart.push_back(gantt_S_P);
      gantt_S_P += burst_Time[i];
      cout<< gantt_S_P<<" ";

    }
    cout<<endl;
    cout<<"Waiting Time ";
    for(int i=0;i<Process;i++)
    {
        sum+=gantt_chart[i];
        cout<<gantt_chart[i]<<" ";
    }
     cout<<endl;
    avg = sum/Process;

    cout<<"Average Waiting Time "<<avg<<endl;
}

/*
//3
//24 3 3
*/
