#include "Queue.h"

Queue::Queue()
{
    size = 0;
    count = 0;
    queueFront = 0;
    queueBack = -1;
}

Queue::Queue(int size)
{
    list = new int[size];
    this->size = size;
    queueFront = 0;
    queueBack = -1;
    count = 0;
}

void Queue::Enqueue(int i)
{
    if (Full()) {
        cout << "Queue is full" << endl;
        return;
    }
    queueBack = (queueBack + 1) % size;
    list[queueBack] = i;
    count++;
}
/*Giải thích:
Giả sử khi queueBack = size - 1, khi đó với hàng đợi tiêu chuẩn bạn sẽ không thể thêm nữa. 
Nhưng với hàng đợi vòng, ta sẽ thêm chừng nào count != size. size là số phần tử tối đa có thể có
Do vậy, count != size nghĩa là còn ô trống để insert vào queue. Chỉ số được insert vào queue như sau (giả sử size = 3):

Nếu queueBack = 0, giá trị queueBack thực là (0 + 1) % 3 = 1
Nếu queueBack = 1, giá trị queueBack thực là (1 + 1) % 3 = 2
Nếu queueBack = 2, giá trị queueBack thực là (2 + 1) % 3 = 0

queueBack là chỉ số của phần tử sẽ được insert ở lần tiếp theo. Mỗi khi dequeue, count sẽ phải giảm đi 1. Ngược lại, nếu enqueue thành công, count sẽ tăng lên 1.

Giải thích này cũng đúng với queueFront trong hàm dequeue dưới đây.
*/
int Queue::Dequeue()
{
    if (Empty()) {
        cout << "Queue is empty" << endl;
        exit;
    }
    int x = list[queueFront];
    queueFront = (queueFront + 1) % size;
    count--;
    return x;
}

bool Queue::Full()
{
    return (Size() == size);
}

bool Queue::Empty()
{
    return (Size() == 0);
}

int Queue::Size()
{
    return count;
}

int Queue::Front()
{
    if (Empty()) {
        cout << "Queue is empty" << endl;
        exit;
    }
    else return list[queueFront];
}

int Queue::Back()
{
    if (Empty()) {
        cout << "Queue is empty" << endl;
        exit;
    }
    else return list[queueBack];
}

Queue::~Queue()
{
    delete[] list;
}
