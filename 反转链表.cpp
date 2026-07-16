
#include<stdio.h>

//1.定义链表结点结构体 
struct ListNode {
    int val;
    struct ListNode* next;
};

// 2.反转链表函数 (核心算法)
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* pre = NULL;
    struct ListNode* next = NULL;
    
    while (head != NULL) {
        next = head->next;  // 1. 保存下一个节点
        head->next = pre;   // 2. 反转指针：指向前一个
        pre = head;         // 3. pre 移动到当前 head
        head = next;        // 4. head 移动到刚才保存的 next
    }
    
    return pre; // 最终 pre 就是新链表的头节点
}
// 3. 主函数
int main() {
    // 极简建表法：直接声明 3 个节点，用取地址符 & 连起来
    // 链表结构: n1 (1) -> n2 (2) -> n3 (3) -> NULL
    struct ListNode n3 = {3, NULL};
    struct ListNode n2 = {2, &n3};
    struct ListNode n1 = {1, &n2};

    // 打印原始链表
    printf("原始链表: ");
    struct ListNode* curr = &n1;
    while (curr != NULL) {
        printf("%d ", curr->val);
        curr = curr->next;
    }
    printf("\n");

    // 调用反转函数
    struct ListNode* reversed = reverseList(&n1);

    // 打印反转后的链表
    printf("反转链表: ");
    curr = reversed;
    while (curr != NULL) {
        printf("%d ", curr->val);
        curr = curr->next;
    }
    printf("\n");

    return 0;
}
