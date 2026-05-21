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


int main()
{
    int ehp = 100;
    int hp = 100;

    while ( )
    {
        
       
        cout << "Please select [1] Fight, [2] Heal: ";
        
        if (a == 1)
        {
           
        }
        else if (a == 2)
        {
           
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
        cout << "Enemy HP: " << ehp << "\n";
        cout << "Your HP: " << hp << "\n";
        cout << "-----------------" << "\n";
    }
    if(hp == 0){
            
        cout << "ENEMY WIN!";
        }
    if(ehp == 0){
        
        cout << "YOU WIN!";
    }
    if((ehp == 0) and (hp == 0)){
        cout << "DRAW!";
    }
    
    return 0;
}