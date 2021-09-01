// #include<bits/stdc++.h>
// using namespace std;

// class operatorOverloadingClass
// {
// public:
//     int num1;
//     int num2;
//     int ans;

//     operatorOverloadingClass(int x, int y)
//     {
//         num1 = x;
//         num2 = y;
//         ans = 0;
//     }

//     friend operatorOverloadingClass operator <(operatorOverloadingClass obj)
//     {
//         if(obj.num1 > obj.num2)
//             return operatorOverloadingClass(obj.num2);

//         else
//             return operatorOverloadingClass(obj.num1);
//     }
// };

// int main(void)
// {
//     operatorOverloadingClass obj1(5,6);

//     obj1.ans = obj1.num1 < obj1.num2;

//     cout<<obj1.ans;
// }