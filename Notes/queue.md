## unordered_set

先進先出，FIFO(First In First Out)


## 功能
```CPP
queue<int> q;
```
|方法|功能|
|---|---|
|q.front()|返回第一個元素|
|q.back()|返回最後一個元素|
|q.empty()|回傳容器是否為空|
|q.size()|回傳容器長度|
|q.push(key)|加入值(單一參數或是已經用struct整理過的多項參數)|
|q.emplace(key)|加入值(多項參數)|
|q.pop()|移除值|


        
## 遍歷容器
        
```CPP
int size = q.size();
for (int i = 0; i < size; i++) {
    cout << q.front() << " ";
    q.pop();
}
```
```CPP
while (!q.empty()) {
    cout << q.front() << " ";
    q.pop();
}
```

## BFS
[Leetcode 733. Flood Fill](https://github.com/Smallyuyu/Leetcode/blob/main/Algorithm%20I/Day%207%20-%20Breadth-First%20Search%20and%20Depth-First%20Search/733.%20Flood%20Fill.md)

<br>


## 參考資料
<br>

[參考連結一]([https://shengyu7697.github.io/std-unordered_set/](https://shengyu7697.github.io/std-queue/))

<br>

