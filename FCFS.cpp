///FIRST COME FIRST SERVE

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int process,bt[100],gt[100],sum=0;
    gt[0]=0;
    cin>>process;

    for(int i=0;i<process;i++)
    {
        cin>>bt[i];
    }

    cout<<"Gantt Chart ";
    for(int i=1;i<=process+1;i++)
    {
        gt[i] = gt[i-1]+bt[i-1];
        cout<<gt[i-1]<<" ";

    }
    cout<<endl<<"Waiting Time ";
    for(int i=1;i<=process;i++)
    {
        gt[i] = gt[i-1]+bt[i-1];
        cout<<gt[i-1]<<" ";
        sum += gt[i];
    }

    cout<<endl<<"Average Wating Time "<<sum/process<<endl;


}


                                          ###### ALTERNATIVE ######


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
