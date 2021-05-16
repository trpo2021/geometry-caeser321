#include "body.h"

void intnum(char* point, double* arr)
{
    int step = 5, i = 0;
    char* at;
    while (step != 20) {
        if (isdigit(*(point + step)) != 0) {
            *at = *(point + step);
            *(arr + i) = atoi(at);
            i++;
        }
        step++;
    }
}

bool spaceCommCheck(char* point)
{
    while (isdigit(*point) == 0) // First number
        point++;
    int step = 0;
    while (step != 10) {
        if (*(point + step) == ' ') {
            step = 0;
            while (step != 10) {
                if (*(point + step) == ',') {
                    return true;
                    break;
                }
                step++;
            }
        }
        step++;
    }
    printf("ERROR: expected 'Space and Comm' \n");
    return false;
}

bool brackCheck(char* point)
{
    int step = 0, fl;
    while (step != 10) {
        if (*(point + step) == '(') {
            fl = 1;
            break;
        }
        step++;
    }
    if (fl == 1) {
        step = 0;
        while (step != 20) {
            if (*(point + step) == ')') {
                return true;
            }
            step++;
        }
    }

    printf("ERROR: expected 'bracks' \n");
    return false;
}

bool comCheck(char* circle, char* point)
{
    if (strncmp(point, circle, 6) == 0)
        return true;
    else {
        printf("ERROR: expected 'circle' \n");
        return false;
    }
}

void calculator(double r)
{
    double s, p;
    float pi = 3.1415;
    p = 2 * pi * r;
    s = pi * r * r;
    printf("Perimetr=%f\n", p);
    printf("Ploshad'=%f\n", s);
}
void circl(double* C1, double* C2)
{
    double x1 = C1[0];
    double y1 = C1[1];
    double x2 = C2[0];
    double y2 = C2[0];
    double radius1 = C1[2];
    double radius2 = C2[2];
    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    if (radius1 - radius2 < distance && distance < radius1 + radius2)
        printf(" figure intersect \n");
    else
        printf(" figure not intersect \n");
}
