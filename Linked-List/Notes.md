## ListNode筆記
<br>
**Dummy Node**
又叫啞節點，指在一鏈表前新增一個指向該鏈表的節點

<br><br><br>

**Function 1:**
新增未初始化的ListNode
```CPP
ListNode* node = new ListNode();
```

<br><br><br>

**Function 2:**
新增首數為0，但無指向的ListNode
```CPP
ListNode* node = new ListNode(0);
```

<br><br><br>

**Function 3:**
新增首數為0，並指向head的ListNode
```CPP
ListNode* node = new ListNode(0,head);
```
