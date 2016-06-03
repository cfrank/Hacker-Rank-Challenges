/* https://www.hackerrank.com/challenges/time-conversion */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

string get_time_without_tp(string time);
string get_time_tp(string time);
vector<string> time_info(string time);
void print_24(vector<string> time_string, string time, string time_tp);

int main()
{
    string time;
    cin >> time;
    
    string time_without_tp;
    time_without_tp = get_time_without_tp(time);
    
    string time_tp = get_time_tp(time);
    
    /* Vector with hours minutes and seconds */
    vector<string> time_list = time_info(time_without_tp);
    
    print_24(time_list, time_without_tp, time_tp);
    
    return 0;
}

/*
 * Return the date without PM/AM
 */
string get_time_without_tp(string time)
{
    return time.substr(0, time.length() - 2);
}

/*
 * Return PM/AM from the time string
 */
string get_time_tp(string time)
{
    return time.substr(time.length() - 2);
}

/*
 * Return a vector with time info
 */
vector<string> time_info(string time)
{
    string temp;
    vector<string> info_vector;
    stringstream ss(time);
    
    while(getline(ss, temp, ':')){
        info_vector.push_back(temp);
    }
    
    return info_vector;
}

/*
 * Print the time as 24 hours instead of 12 hours
 */
void print_24(vector<string> time_list, string time, string time_tp)
{
    int hours, minutes, seconds;
    hours = (int)strtol(time_list.at(0).c_str(), NULL, 0);
    if(time_tp == "AM" && hours != 12){
        cout << time << endl;
    }
    else if(hours == 12 && time_tp == "PM"){
        cout << time << endl;
    }
    else if(hours == 12 && time_tp == "AM"){
        int tf_hours = 00;
        printf("%d%d:%s:%s", 0, tf_hours, time_list.at(1).c_str(), time_list.at(2).c_str());
    }
    else{
        int tf_hours = 12 + hours;
        printf("%d:%s:%s", tf_hours, time_list.at(1).c_str(), time_list.at(2).c_str());
    }
}