## unordered_set
[參考連結一](https://shengyu7697.github.io/std-unordered_set/
)
[參考連結二](http://c.biancheng.net/view/7250.html)
<br>

## Function

<br>

unordered_set<int> s
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
