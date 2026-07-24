#include <stdio.h>
#include <stdlib.h>

// 1. 定义二叉树节点结构体
typedef struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

// 2. C语言没有构造函数，用函数手动 malloc 创建节点
TreeNode* createNode(int v) {
    TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
    node->val = v;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// 递归基本样子
void f(TreeNode* head) {
    if (head == NULL) {
        return;
    }
    f(head->left);
    f(head->right);
}

// 先序遍历（头 -> 左 -> 右）
void preOrder(TreeNode* head) {
    if (head == NULL) {
        return;
    }
    printf("%d ", head->val);
    preOrder(head->left);
    preOrder(head->right);
}

// 中序遍历（左 -> 头 -> 右）
void inOrder(TreeNode* head) {
    if (head == NULL) {
        return;
    }
    inOrder(head->left);
    printf("%d ", head->val);
    inOrder(head->right);
}

// 后序遍历（左 -> 右 -> 头）
void posOrder(TreeNode* head) {
    if (head == NULL) {
        return;
    }
    posOrder(head->left);
    posOrder(head->right);
    printf("%d ", head->val);
}

int main() {
    // 建树
    TreeNode* head = createNode(1);
    head->left = createNode(2);
    head->right = createNode(3);
    head->left->left = createNode(4);
    head->left->right = createNode(5);
    head->right->left = createNode(6);
    head->right->right = createNode(7);

    preOrder(head);
    printf("\n先序遍历递归版\n");

    inOrder(head);
    printf("\n中序遍历递归版\n");

    posOrder(head);
    printf("\n后序遍历递归版\n");

    return 0;
}
