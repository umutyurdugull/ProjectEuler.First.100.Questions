#include<iostream>
using namespace std;

int main(){


    int x = (50*101) * (50*101);
    int y =0;
    for (int i = 1; i <=100; i++)
    {
        y = y + (i*i);
    }
    int diff = x -y;
    cout << diff << endl;

}