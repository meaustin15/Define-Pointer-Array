//  main.cpp
//  Allocation
//  Created by Matthew Austin on 3/7/16.
//  Copyright (c) 2016 Matt. All rights reserved.

#include <iostream>

using namespace std;

void getData(int *ip, int temp);
double avg(int *ip, int temp);


int main()
{
    int temp;
    int *ip = null;
    cout << "How Many Scores? ";
    cin >> temp;
    *ip = new int [temp];

    getData(ip, temp);
    double ave = avg(ip, temp);

    cout << "Average is " << ave;

    delete []ip;
    return 0;
}

void getData(int *ip, int temp)
{
    for(int i=0; i < temp; i++)
    {
        cout << "Enter Number " << i+1 << ": ";
        cin >> ip[i];
    }

}


double avg(int *ip, int temp)
{
    int tot = 0;
    for(int i=0; i < temp; i++)
    {
        double avg = tot/temp;
        return avg;
    }
}

