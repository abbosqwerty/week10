  #include <iostream>
#include <sstream>
#include <ctime>
#include <algorithm>
#include <vector>
using namespace std;
// MONDAY LAB NO GRADED
// int even(int n, int c , int count=0) {
//     if (n>c) return count;
//     if (n%2==0) return even(n+1 , c, count+1);
//     return even(n+1, c, count);
// }
// int main() {
//     int n, c;
//     cin >> n >> c;
//     cout << even(n, c) << endl;
// }

// int main() {
//     int num[]={1,34,5,6,7,24};
//     int size=sizeof(num)/sizeof(num[0]);
//     sort(num,num+size);
//     for(int i=0;i<size;i++) {
//         cout<<num[i]<<" ";
//     }
// }
// int main() {
//     srand(time(0));
//     int size;
//     double sum = 0.0;
//     cin >> size;
//     int arr[size];
//     for (int i = 0; i < size; i++) {
//         cout <<"enter element "<<i+1<<": ";
//         cin >> arr[i];
//         sum += arr[i];
//     }
//     cout << double(sum)/size << endl;
// }
// int min(int a[], int size) {
//     int min = a[0];
//     for (int i = 0; i < size; i++) {
//         if (a[i] < min) {
//              min = a[i];
//         }
//     }
//     return min;
// }
// int main() {
//     srand(time(0));
//     int size;
//     int sum = 0;
//     cin >> size;
//     int arr[size];
//     for (int i = 0; i < size; i++) {
//         cout <<"enter element "<<i+1<<": ";
//         cin >> arr[i];
//     }
//     cout <<"Minimum is: "<<min(arr, size);
//
// }
// int indexOfLargestElement(double a[], int size) {
//
//     for (int i = 0; i < size; i++) {
//         if (a[i] < min) {
//             min = a[i];
//         }
//     }
// }
// int main() {
//     srand(time(0));
//     int size;
//     int sum = 0;
//     cin >> size;
//     int arr[size];
//     for (int i = 0; i < size; i++) {
//         cout <<"enter element "<<i+1<<": ";
//         cin >> arr[i];
//     }
//     cout <<"Minimum is: "<<min(arr, size);
//
// }

// # PROBLEM 5
// bool stircltyEqual(const int list1[],const int list2[],int size) {
//     for(int i=0; i<size;i++) {
//         if(list1[i]!=list2[i]) {
//             return false;
//         }
//
//     }
//     return true;
//
// }
// int main() {
//     int size;
//     cout<<"Enter the size of the lists: ";
//     cin>>size;
//      int list1[size];
//      int list2[size];
//
//     for(int i=0;i<size;i++) {
//         cout<<"for list one ";
//         cin >>list1[i];
//     }
//     for(int i=0;i<size;i++) {
//         cout<<"for list two ";
//         cin >>list2[i];
//     }
//     bool stir = stircltyEqual(list1,list2,size);
//     cout<<(stir?"True":"False")<<endl;
//     return 0;
// }

//Proble  6
// int main() {
//   char order;
//     vector<char> container;
//     do {
//         cin >> order;
//      if (order>='a' && order<='z') {
//          container.push_back(order);
//      }
//
//     }
//     while (order !='0');
//     int size =container.size();
//     sort(container.begin(), container.end());
//
//    for (int i=0;i<size;i++) {
//        int count=1;
//        while (i+1<size && container[i+1]==container[i]) {
//            ++count;
//            ++i;
//        }
//        cout <<container[i]<<": "<<count<<endl;
//    }
//
// }
// Problem 7
// int main() {
//     int count;
//     cout << "How many times do you want to enter?" << endl;
//     cin >> count;
//     int num[count];
//     int size=sizeof(num)/sizeof(num[0]);
//     for(int i=0;i<count;i++) {
//         cin >> num[i];
//     }
//     int temp=0;
//
// for(int i=0;i<count;i++) {
//     for(int j=0;j<size-i-1;j++) {
//         if (num[j]>num[j+1]) {
//             temp=num[j];
//             num[j]=num[j+1];
//             num[j+1]=temp;
//         }
//     }
// }
//     for(int i=0;i<count;i++) {
//         cout << num[i] << " ";
//     }
//
// }
//Problem 8
// int main() {
//     int RollingDie[]={1,2,3,4,5,6};
//     int count1=0;
//     int count2=0;
//     int count3=0;
//     int count4=0;
//     int count5=0;
//     int count6=0;
//     srand(time(0));
//     for(int i=0;i<1000;i++) {
//         int randNum = RollingDie[rand() % 6];
//         if(randNum == 1) count1++;
//         if(randNum == 2) count2++;
//         if(randNum == 3) count3++;
//         if(randNum == 4) count4++;
//         if(randNum == 5) count5++;
//         if(randNum == 6) count6++;
//     }
//
//
//         cout<<"The number 1 occurs: "<<count1<<" times"<<endl;
//         cout<<"The number 2 occurs: "<<count2<<" times"<<endl;
//         cout<<"the number 3 occurs: "<<count3<<" times"<<endl;
//         cout<<"the number 4 occurs: "<<count4<<" times"<<endl;
//         cout<<"the number 5 occurs: "<<count5<<" times"<<endl;
//         cout<<"the number 6 occurs: "<<count6<<" times"<<endl;
//
// }
//Problem 9
// void reverseArray(int arr[], int start, int end) {
//  if (start > end) return;
//  int temp = arr[end];
//  arr[end] = arr[start];
//  arr[start] = temp;
//  reverseArray(arr, start + 1, end-1);
// }
// int main() {
//  int n;
//  cin >> n;
//  int arr[n];
//  for (int i = 0; i < n; i++) {
//   cin >> arr[i];
//  }
//  reverseArray(arr, 0, n - 1);
//  for (int i = 0; i < n; i++) {
//   cout << arr[i] << " ";
//  }
//  return 0;
// }
//Problem 10
// int main() {
//  int n;
//  cin >> n;
//  int arr[n];
//  for (int i = 0; i < n; i++) {
//   cin >> arr[i];
//  }
//  bool checkDecreasing=true;
//  for (int i = 1; i < n; i++) {
//    if (arr[i] <= arr[i - 1] ) {
//     checkDecreasing=false;
//     break;
//    }
//  }
//  cout <<(checkDecreasing?"YES":"NO") << endl;
// }
