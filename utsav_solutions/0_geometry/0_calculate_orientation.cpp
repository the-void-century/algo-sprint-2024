// Calculate orientation by slope
#include <iostream>
#define int long long int
using namespace std;

string orientation(int p1[], int p2[], int p3[]){
    //calculate the two slopes
    int slope1 = p2[1]-p1[1]/p2[0]-p1[0];
    int slope2 = p3[1]-p2[1]/p3[0]-p2[0];

    //check orientation
    if(slope1==slope2) return "collinear";
    else if(slope2>slope1) return "counter_clockwise";
    else return "clockwise";
}

int32_t main(){
    int p1[] = { 0, 0 };
    int p2[] = { 4, 4 };
    int p3[] = { 1, 1 };
    cout << orientation(p1, p2, p3) << endl;

    int p4[] = { 0, 0 };
    int p5[] = { 4, 4 };
    int p6[] = { 1, 2 };
    cout << orientation(p4, p5, p6) << endl;

    return 0;
}