#include<iostream>
using namespace std;

int allocation[100][100],maximum[100][100],need[100][100];
int process,resource;
int available[100],total_resource[100],work[100];
bool finish[100];


void allocation_matrix()
{
    for(int i=0;i<process;i++)
    {
        for(int j=0;j<resource;j++)
        {
            cin>>allocation[i][j];
        }
    }
}

void max_matrix()
{
    for(int i=0;i<process;i++)
    {
        for(int j=0;j<resource;j++)
        {

            cin>>maximum[i][j];
        }
    }
}

void need_matrix()
{
     for(int i=0;i<process;i++)
    {
        for(int j=0;j<resource;j++)
        {
            need[i][j]=maximum[i][j]-allocation[i][j];
        }
    }
}

void total_resource_array()
{

        for(int j=0;j<resource;j++)
        {
            cin>>total_resource[j];
        }

}

void available_array()
{
    for(int i=0;i<resource;i++)
    {
        int sum=0;
        for(int j=0;j<process;j++)
        {
            sum+=allocation[j][i];
        }
        available[i]=total_resource[i]-sum;
    }
}

void finish_array()
{
    for(int i=0;i<process;i++)
    {
        finish[i]=false;
    }
}

void work_array()
{
    for(int i=0;i<process;i++)
    {
        work[i]=available[i];
    }
}

void calculate_bankers_algorithm()
{
     int len = 0, position[process];
    bool flag = true;

    while(len < process)
    {
        bool found = false;

        for (int i = 0; i < process; i++)
        {
            if (finish[i] == false)
            {
                int j, temp_count = 0;
                for (j = 0; j < resource; j++)
                {
                    if (need[i][j] <= work[j])
                        temp_count += 1;
                }

                if (temp_count == resource)
                {
                    for (int k = 0; k < resource; k++)
                    {
                        work[k] += allocation[i][k];
                    }

                    position[len++] = i;
                    finish[i] = 1;
                    found = true;
                }
            }
        }

        if (found == false)
        {
            cout << "System is not in safe state\n";
            flag = false;
            break;
        }

    }

    if(flag == true)
    {
        cout << "Safe sequence is: (";
        for(int i = 0; i < process; i++)
        {
            if(i == process-1)
                cout << "P" << position[i] << ")";
            else
                cout << "P" << position[i] << " ->";
        }
        cout << endl;
    }
}





int main()
{
    //freopen("jakaria.txt", "r", stdin);
    cout<<"Enter your process number and also resource number"<<endl;
    cin>>process>>resource;
    cout<<"Enter your Allocation matrix"<<endl;
    allocation_matrix();
    cout<<"Enter your Max matrix"<<endl;
    max_matrix();
    need_matrix();
    cout<<"Enter your Total resource"<<endl;
    total_resource_array();
    available_array();
    finish_array();
    work_array();
    calculate_bankers_algorithm();

}


/*
5 3
//allocation
0 1 0
3 0 2
3 0 2
2 1 1
0 0 2
//max
7 5 3
3 2 2
9 0 2
2 2 2
4 3 3
//total resouce
10 5 7

  */
