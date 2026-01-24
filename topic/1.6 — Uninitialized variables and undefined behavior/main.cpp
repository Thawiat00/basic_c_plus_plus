#include <iostream>  // for std::cout and std::cin
#include <cstdio> // for use printf

// for topic  Uninitialized variables and undefined behavior

void doNothing(int& x) // Don't worry about what & is for now, we're just using it to trick the compiler into thinking variable x is used
{

    printf("use donothing function variable is: %d\n", x);

    //value is not x but is garbage on variable


}


int main()
{
    // นิยามตัวแปร x โดยไม่กำหนดค่า (Uninitialized)
    int x;

    // ส่ง x เข้าไปในฟังก์ชัน
    // แม้จะชื่อ doNothing แต่การส่งแบบอ้างอิง (int& ) 
    // มักจะใช้เพื่อหลอก Compiler ว่าตัวแปรนี้ "ถูกเรียกใช้งานแล้ว"
    doNothing(x);

    // พิมพ์ค่า x ออกมา (ค่าที่ได้จะสุ่มมาก ตามหน่วยความจำในขณะนั้น)
    std::cout << "Value in main: " << x << '\n';

    return 0;
}