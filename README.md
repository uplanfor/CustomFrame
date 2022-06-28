# CustomFrame

此为鄙人在Windows平台下Qt无边框窗口的解决方案，使用CustomFrame类来创建一个无边框的窗口，可拖动，可缩放

## 构造函数

#### CustomFrame::CustomFrame(QWidget \*content, QWidget \*parent = nullptr)

- 作用：构造一个无边框的窗口
- 参数：
    - `content` 窗口内部显示的内容
    - `parent` 无边框窗口的父类

## 成员函数

#### void CustomFrame::setBoundary(int boundary)

- 作用： 设置拉伸窗口的边界大小
- 参数：
    - `boundary`边界大小，如果小于7会设置失败

#### int CustomFrame::getBoundary()

- 作用： 获得当前无边框窗口的拉伸边界
- 返回值：拉伸边界

#### QWidget* CustomFrame::container()

- 作用：获得显示容器的指针
- 返回值：显示容器的指针

#### QWidget* operator->()

- 作用：重载了->运算符