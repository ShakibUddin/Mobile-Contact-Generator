#include<iostream>
#include<time.h>
#include<sstream>
#include<string>
#include<stdlib.h>
#include<fstream>
using namespace std;
int main()
{
    string first_three_string,last_eight_string,previous_last_eight_string,contact;
    int total_numbers,last_eight_integer,temp=0;
    cout<<"How many numbers you want to generate ?\n";
    cin>>total_numbers;
    cout<<"Enter first three digits\n";
    cin>>first_three_string;
    srand(time(NULL));
    ofstream file;
    file.open("number_file.txt");
    ostringstream machine;
    for(int i=0;i<total_numbers;++i)
    {

        if(i<100)
        {
            last_eight_integer=12345678+rand()%9999999;
        }
        else if(i>=100 && i<500)
        {
            last_eight_integer=82647678+rand()%9999999;
        }
        else if(i>=500 && i<1000)
        {
            last_eight_integer=42546678+rand()%9999999;
        }
        else if(i>=1000 && i<2000)
        {
            last_eight_integer=52466678+rand()%9999999;
        }
        else if(i>=2000 && i<4000)
        {
            last_eight_integer=62542678+rand()%9999999;
        }
        else
        {
            last_eight_integer=28586678+rand()%9999999;
        }
        //cout<<"number "<<i+1<<" last eight = "<<last_eight_integer<<endl;
        if(i==0)
        {
            machine<<last_eight_integer;
            last_eight_string=machine.str();
            machine.str(string());//clearing string stream
            previous_last_eight_string=last_eight_string;
            contact=first_three_string+last_eight_string;
            //cout<<"number "<<i+1<<" contact = "<<contact<<endl;
            file<<contact<<endl;
            cout<<contact<<endl;
        }
        else if (i>0)
        {
            while(true)
            {
                if(previous_last_eight_string==last_eight_string)
                {
                    if(i<100)
        {
            last_eight_integer=12345678+rand()%9999999;
        }
        else if(i>=100 && i<500)
        {
            last_eight_integer=82647678+rand()%9999999;
        }
        else if(i>=500 && i<1000)
        {
            last_eight_integer=42546678+rand()%9999999;
        }
        else if(i>=1000 && i<2000)
        {
            last_eight_integer=52466678+rand()%9999999;
        }
        else if(i>=2000 && i<4000)
        {
            last_eight_integer=62542678+rand()%9999999;
        }
        else
        {
            last_eight_integer=28586678+rand()%9999999;
        }
                    machine<<last_eight_integer;
                    last_eight_string=machine.str();
                    machine.str(string());//clearing string stream
                }
                else
                {
                    previous_last_eight_string=last_eight_string;
                    break;
                }
            }
            contact=first_three_string+last_eight_string;
            //cout<<"number "<<i+1<<" contact = "<<contact<<endl;
            file<<contact<<endl;
            cout<<contact<<endl;
        }
        ++temp;
    }
    file.close();
    cout<<temp<<" numbers has been generated\n";
}
