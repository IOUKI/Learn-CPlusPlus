#include <iostream>
#include <cmath>
using namespace std;

int main() {
    /*
        數學
        需include cmath

        abs(x) 返回x的絕對值
        acos(x) 返回x的反餘弦值
        asin(x) 返回x的反正弦值
        atan(x) 返回x的反正切值
        cbrt(x) 返回x的立方根
        ceil(x) 返回將x四舍五入到最接近的整數的值
        cos(x) 返回x的余弦值
        cosh(x) 返回x的雙曲余弦值
        exp(x) 返回e的x次方的值
        expm1(x) 返回e的x次方减1的值
        fabs(x) 返回浮點數x的絕對值
        fdim(x, y) 返回x和y之間的正差
        floor(x) 返回將x四捨五入到最接近的整數的值
        hypot(x, y) 返回sqrt(x^2 + y^2)而不會出現中間溢出或下溢
        fma(x, y, z) 返回x*y+z，而不會失去精度
        fmax(x, y) 返回浮點數x和y中的最大值
        fmin(x, y) 返回浮點數x和y中的最小值
        fmod(x, y) 返回x/y的浮點餘數
        pow(x, y) 返回x的y次方的值
        sin(x) 返回x的正弦值（x以弧度表示）
        sinh(x) 返回雙曲正弦值
        tan(x) 返回角度的正切值
        tanh(x) 返回雙曲正切值
    */
    cout << "找出最大數: " << max(5, 10) << endl;
    cout << "找出最小數: " << min(5, 10) << endl;
    cout << "平方根: " << sqrt(64) << endl;
    cout << "四捨五入: " << round(2.6) << endl;
    cout << "log(自然對數)" << log(2) << endl;

    return 0;
}