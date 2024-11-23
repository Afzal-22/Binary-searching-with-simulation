#include <iostream>
using namespace std;
void binarySearch(float arr[], int size, float key) {
    int first = 0;
    int last = size - 1;
    int mid;

    cout << "Searching For : " << key <<endl;
    cout << "-------------------------------------------"<<endl;

    while (first <= last) {
        mid = (first + last) / 2;

        cout << "First Index : " << first <<endl;
        cout << "Last Index  : " << last << endl;
        cout << "Mid Index (first+last)/2 : " << mid << endl;
        cout<<endl;
        cout << "Left Side : ";
        for (int i = first; i < mid; i++) {
            cout << arr[i] << " ";
        }
        cout<<endl;
        cout << "Mid Value : " << arr[mid] <<endl;
        cout << "Right Side : ";
        for (int i = mid + 1; i <= last; i++) {
            cout << arr[i] << " ";
        }
        cout <<endl;
        if (arr[mid] == key) {
            cout << "Found, Target : " << key << " == Value : " << arr[mid] << " at Index : " << mid <<endl ;

            return ;
        }
          else if (arr[mid] <key) {
            cout << "Selecting Right Side, Target : " << key<< " > Mid Value : " << arr[mid] << endl;
            cout << "First Index Updated with mid+1 : " << mid + 1 << endl;
            cout << "Last Index Remain as Before : " << last << endl;
            first = mid + 1;
        } else {
            cout << "Selecting Left Side, Target : " << key << " < Mid Value : " << arr[mid] << endl;
            cout << "First Index Remains as Before : " << first << endl;
            cout << "Last Index Updated with mid-1 : " << mid - 1 << endl;
            last = mid - 1;
        }
        cout << "-------------------------------------------"<<endl;
        cout << "-------------------------------------------"<<endl;
    }
    cout << "Element " <<key << " not found in the data set"<<endl;
}

int main() {
    float data[15] = {12, 15.5, 16, 18.7, 20, 24, 25, 30.5, 56, 88, 90, 92, 93, 97, 99};
    float value;
    cout << "Data Set : {";
    for (int i = 0; i < 15; i++) {
        cout << data[i];
         if (i < 14) {
        cout << ",";
    }
}
cout << "}" << endl;
    cout<<"Enter Element for searching:";

    cin>>value;

    binarySearch(data,15, value);

    return 0;
}

