/*
filename: lab41.c
author: Filatov E., 515b
creation date: 24.03.2020
lab4, task 1
*/

double segment_length(double x1, double y1, double z1, double x2, double y2, double z2)
{

}

int main(void)
{
    double x1, x2, x3, y1, y2, y3, z1, z2, z3, a, b, c, p, res;
    a = segment_length(x1, y1, z1, x2, y2, z2);
    b = segment_length(x1, y1, z1, x3, y3, z3);
    c = segment_length(x3, y3, z3, x2, y2, z2);
    p = (a+b+c)/2;
    
}