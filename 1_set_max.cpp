/*
1. ให้เขียนฟังก์ชัน set max  ของ array 1 มิติ รับ parameter เป็น array 1 ตัว และไม่ต้อง return ค่า
ในฟังก์ชันให้ทำการหาค่าสูงสุดของฟังก์ชันแล้วให้เปลี่ยนค่าสูงสุดใน array เป็น 1 แล้วตัวที่เหลือให้เป็น 0

#input
-

#output
set max my_arr1: {0, 1, 0} 
set max my_arr2: {0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0} 
*/

#include <iostream>
using namespace std;

void max(int a[],int b){
    int max = a[0];
    for(int i=0;i<b;i++){
        if (a[i]>max){
            max=a[i];
        } 
    }
    for(int i=0;i<b;i++){
        if (a[i]==max){
            cout<<"1";
        }else cout<<"0";
        if (i!= b-1){
            cout<<", ";
        }
    }
    
}
int main(){
    int my_arr1[] = {0,3,2};
    int my_arr2[] = {5,1,3,6,3,1,4,2,3,6,1,3};

    cout<<"set max my_arr1: "<<"{";
    max(my_arr1,3);
    cout<<"}"<<"\n";
    cout<<"set max my_arr2: "<<"{";
    max(my_arr2,12);
    cout<<"}";
    
return 0;
}

