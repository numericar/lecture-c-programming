/*
    ใช้สำหรับการป้อรข้อมูลลงในโปรแกรมผ่าน terminal/console ด้วยแป้นพิม
    โดยในภาษา c จะมีฟังก์ชันสำหรับการป้อนข้อมูลหลายอัน
    เช่น
        1. scanf()      -> รับข้อมูลในรูปแบบข้อความ/ไฟล์
        2. stdin()      -> เป็นการรับข้อมูลในรูปแบบของการ stream

    โดยจะมีประเภทของการอ่านข้อมูลดังนี้
        1. %s   -> ข้อความ
        2. %d   -> ตัวเลขจำนวนเต็ม
        3. %c   -> ตัวอักษร
        4. %f   -> ตัวเลขมีทศนิยม (float)
        5. %lf  -> ตัวเลขมีทศนิยม และมีขนาดที่ใหญ่ (double)

    scanf มีกฏการใช้งานอยู่ 3 ข้อ
        1. scanf จะ retrun เลขจำนวนเต็มของสิ่งที่มันสามารถอ่านได้
        2. ถ้าเราใช้ scanf เพื่ออ่านค่า basic variable เช่น int, float, double เราจะต้องมีเครื่องหมาย & (แอมเพอร์แซนด์)
        3. ถ้าเราใช้ scanf เพื่ออ่านค่า string, character array, ไม่ต้องใช้ & (แอมเพอร์แซนด์)

    สามารถใช้งาน whitespace, newline, tap, space เพื่อเพิ่มข้อมูลที่จะใส่เข้ามาในโปรแกรม

    printf() สามารถแปลงข้อมูลต่าง ๆ ไปเป็น string ได้
*/

#include <stdio.h>

int main() {
    char str[100];
    int i;
    double a;

    printf("Enter value: ");
    scanf("%s %d %lf", str, &i, &a);

    printf("You enterred: %s %d %lf", str, i, a);

    return 0;
}