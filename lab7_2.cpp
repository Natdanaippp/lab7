
#include<iostream>
using namespace std;
int main()
{
    string name_01;
    int num;
    string name_m1;
    string name_m2;
    string name_m3;
    cout<<"Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout<<"?????: ";
    getline(cin,name_01);
    cout<<"Fahsai: Wow!!! "<<name_01<<" is a really cool name.\n";
    cout<<"Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout<<name_01<<": ";
    cin>>num;
    cin.ignore();
    cout<<"Fahsai: I think you may be GEAR "<<(num/10000000)-12<<". I have a free movie ticket for you.\n";
    cout<<"Fahsai: Let's go to the cinema together!!!\n";
    cout<<"Fahsai: What movie do you want to watch?\n";
    cout<<name_01<<": ";
    getline(cin,name_m1);

    cout<<"Fahsai: So....which day are you free to go with me?\n";
    cout<<name_01<<": ";
    getline(cin,name_m2);

    cout<<"Fahsai: "<<name_m2<<"....that is OK!!! I'm looking forward to watching "<<name_m1<<" with you.\n";
    cout<<name_01<<": ";
    getline(cin,name_m3);

    cout<<"Fahsai: 555+ see you "<<name_m2<<". Bye Bye"<<" \\(^ ^)/";
    }
