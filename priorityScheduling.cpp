#include<bits/stdc++.h>
using namespace std;

struct myStructure
{
  string process;
  int bt;
  int priority;
};

bool cmp(myStructure a,myStructure b)
{
   if(a.priority == b.priority)
       return a.process > b.process ? 0:1;
   return a.priority > b.priority ? 0:1;
}

int main()
{
    int number_process,sum=0;
    double avg=0;

    cin>>number_process;

    struct myStructure my_array[100];

    for (int i=0;i<number_process;i++)
    {
        cin >> my_array[i].process;
        cin >> my_array[i].bt;
        cin >> my_array[i].priority;

    }

    sort (my_array,my_array+number_process,cmp);

    for(int i=0;i<number_process;i++)
    {
        cout << my_array[i].process << "\t";
    }
    cout<<endl;

    for(int i=0;i<number_process;i++)
    {
        avg += sum;
        cout<<sum<<"\t";
        sum += my_array[i].bt;
    }

    cout << sum << endl << endl;
    cout<<"Average Time "<<avg/number_process<<endl;




}
/*
3
P1 24 2
P2 3 1
P3 3 2
*/
