#include<iostream>
#include<cstring>
using namespace std;
struct Event{
    char event_name[20];
    char date[20];
    char venue[20];
    char organizer[20];
};

int main()
{
    int num_events;
    cout<<"Enter the number of events\n"<<endl;
    cin>>num_events;
    Event* event = new Event[num_events];
    cout<<"Enter the details of the events\n"<<endl;
    for (int i = 0; i < num_events; i++)
    {
        cout<<"Event "<<i+1<<endl;
        cout<<"Event name: "<<endl;
        cin.ignore();
        cin.getline(event[i].event_name, sizeof(event[i].event_name));
        cout<<"Date: "<<endl;
        cin.getline(event[i].date, sizeof(event[i].date));
        cout<<"Venue: "<<endl;
        cin.getline(event[i].venue, sizeof(event[i].venue));
        cout<<"Organizer: "<<endl;
        cin.getline(event[i].organizer, sizeof(event[i].organizer));
    }
    char searchdate[20];
    cout<<"Enter the date to search for: "<<endl;
    cin.getline(searchdate, sizeof(searchdate));
    for(int i =0 ; i< num_events; i++)
    {
        if(strcmp(event[i].date, searchdate)==0)
        {
            cout<<"Event name: "<<event[i].event_name<<"\n"<<endl;
            cout<<"Date: "<<event[i].date<<"\n"<<endl;
            cout<<"Venue: " <<event[i].venue<<"\n"<<endl;
            cout<<"Organizer: "<<event[i].organizer<<"\n"<<endl;
        }
    }
    return 0;
}