/*
1. ให้เขียนฟังก์ชัน fight และ heal 
โดยฟังก์ชัน fight จะรับ parameter 2 ตัวคือเป็นพลังชีวิตของตัวละครเราและศัตรู 
ถ้ามีการเรียกฟังก์ชั่นนี้เกิดขึ้นค่าพลังชีวิตตัวละครเราจะลดลง 40 และค่าพลังชีวิตศัตรูจะลดลง 30

ฟังก์ชัน heal จะ รับ parameter 1 ตัวเป็นค่าพลังชีวิตตัวละครของเรา
ถ้ามีการเรียกฟังก์ชั่นนี้เกิดขึ้นตัวละครเราจะไม่ถูกตีและค่าพลังชีวิตของตัวละครเราจะเพิ่มขึ้น 20 และไม่สามารถรักษาให้พลังชีวิตเกินค่าตั้งต้นได้
(ถ้าสมมติกดแล้วได้ 120 ผลลัพธ์จะออกมาเป็น 100)

หลังจากจบการทำงานให้ประกาศผู้ชนะ โดย
ถ้าตัวละครเราค่าพลังชีวิตเหลือ 0 ก่อนศัตรู ให้ประกาศว่า ENEMY WIN!
ถ้าศัตรูค่าพลังชีวิตเหลือ 0 ก่อนตัวละครเรา ให้ประกาศว่า YOU WIN!
ถ้าค่าพลังชีวิตของทั้ง 2 เหลือ 0 พร้อมกัน ให้ประกาศว่า DRAW!

#console 

Enemy HP: 100
Your HP: 100
-----------------
Please select [1] Fight, [2] Heal: 1
Enemy HP: 70
Your HP: 60
-----------------
Please select [1] Fight, [2] Heal: 2
Enemy HP: 70
Your HP: 80
-----------------
Please select [1] Fight, [2] Heal: 2
Enemy HP: 70
Your HP: 100
-----------------
Please select [1] Fight, [2] Heal: 1
Enemy HP: 40
Your HP: 60
-----------------
Please select [1] Fight, [2] Heal: 1
Enemy HP: 10
Your HP: 20
-----------------
Please select [1] Fight, [2] Heal: 2
Enemy HP: 10
Your HP: 40
-----------------
Please select [1] Fight, [2] Heal: 2
Enemy HP: 10
Your HP: 60
-----------------
Please select [1] Fight, [2] Heal: 1
Enemy HP: 0
Your HP: 20
-----------------
YOU WIN!
*/
#include <iostream>
using namespace std;

void fight(int &hp,int &ehp){
    hp -= 40;
    ehp -=30;
}
void heal(int &helt){
    helt +=20;
}

int main()
{
    int ehp = 100;
    int hp = 100;
    int a;

    while (hp > 0 and ehp > 0)
    {       
        cout << "Please select [1] Fight, [2] Heal: ";
        cin >> a;
        if (a == 1)
        {fight(hp,ehp);
       
        }
        else if (a == 2)
        {heal(hp);
        }
        else
        {
            cout << "Please select again\n";
            continue;
        }
        if(hp < 0){
            hp = 0;
        }
        if(ehp < 0){
            ehp = 0;
        }
        if(hp>100){
            hp=100;
        }
        cout << "Enemy HP: " << ehp << "\n";
        cout << "Your HP: " << hp << "\n";
        cout << "-----------------" << "\n"; 
    }
    if((ehp == 0) and (hp == 0)){
        cout << "DRAW!";}

    else if(ehp == 0){
        
        cout << "YOU WIN!";
    }
    else if(hp == 0){
            
        cout << "ENEMY WIN!";
        
    }
    
    return 0;
}