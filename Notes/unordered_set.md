## unordered_set

每個元素皆為唯一，且不重複。


## 功能
```CPP
unordered_set<int> s
```
|方法|功能|
|---|---|
|s.begin()|返回第一個元素|
|s.end()|返回最後一個元素|
|s.empty()|回傳容器是否為空|
|s.size()|回傳容器長度|
|s.find(key)|查找是否有該元素，若無則回傳最後一個元素|
|s.count(key)|回傳該元素的個數|
|s.insert(key)|插入元素|
|s.erase(key)|刪除元素|
|s.clear()|清空容器|

        
## 遍歷容器
        
```CPP
for (auto iter = s.begin(); iter != s.end(); ++iter) {
        cout << *iter << endl;
}
```
```CPP
for (const auto &i : s) {
        std::cout << i << " ";
}
```

## Sliding Window
[Leetcode 3. Longest Substring Without Repeating Characters](https://github.com/Smallyuyu/Leetcode/blob/main/Algorithm%20I/Day%206%20-%20Sliding%20Window/3.%20Longest%20Substring%20Without%20Repeating%20Characters.md)

<br>


## 參考資料
<br>

[參考連結一](https://shengyu7697.github.io/std-unordered_set/)

<br>

[參考連結二](http://c.biancheng.net/view/7250.html)

<br>
