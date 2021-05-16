#include "../lib/body.h"
int main()
{
    double x, x2, y, y2, r, r2;
    char str[100];
    char str2[100];
    char circle[7] = "circle";
    char circle2[7] = "circle";
    char* point = str;
    char* point2 = str2;
    bool err = true;
    double num[3];
    double num2[3];
    double* arr = num;
    double* arr2 = num2;
    int i = 0;

    fgets(str, sizeof(str), stdin);
    if (spaceCommCheck(point) == false)
        err = false;
    if (brackCheck(point) == false)
        err = false;
    if (comCheck(circle, point) == false)
        err = false;
    if (err == true) {
        intnum(point, arr);
        x = *(arr + i);
        i++;
        y = *(arr + i);
        i++;
        r = *(arr + i);
        calculator(r);
    }
    i = 0;
    fgets(str2, sizeof(str2), stdin);
    if (spaceCommCheck(point2) == false)
        err = false;
    if (brackCheck(point2) == false)
        err = false;
    if (comCheck(circle2, point2) == false)
        err = false;
    if (err == true) {
        intnum(point2, arr2);
        x2 = *(arr2 + i);
        i++;
        y2 = *(arr2 + i);
        i++;
        r2 = *(arr2 + i);
        calculator(r2);
    }
    circl(arr, arr2);
    system("pause");
    return 0;
}
