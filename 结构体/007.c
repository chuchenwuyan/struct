//结构体内存对齐
//结构体的内存怎么算的？我认为是内容的所有变量内存总数加起来，
// 或者是设立一个足够大的内存，让其可以包括足够的变量
//就像是 char arr[100]一样
#include <stdio.h>
// 待你验证的结构体设计
struct TinyBox { char x; };
struct BigContainer {
    char a;
    struct TinyBox box;
    double d;
};

int main() {
    // 1. 打印 sizeof(struct BigContainer)，看看是不是 16
    // 2. 进阶玩法：你可以利用 stddef.h 里的 offsetof 宏，或者直接打印地址，
    //    去看看 a, box.x, 和 d 到底位于多少偏移量上。
    printf("%zu\n",sizeof(struct BigContainer));
    return 0;
}

//变量位置只能放在自己变量的整数倍地址上
//总大小是最大类型的整数倍