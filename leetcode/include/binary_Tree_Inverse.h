//
// Created by 史瑞琪 on 2020/12/6.
//

#ifndef LEETCODE_BINARY_TREE_INVERSE_H
#define LEETCODE_BINARY_TREE_INVERSE_H

#endif //LEETCODE_BINARY_TREE_INVERSE_H
#include <iostream>
#include <queue>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};


class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == nullptr) return nullptr;
        TreeNode* left = invertTree(root->left); // 记录左孩子
        TreeNode* right = invertTree(root->right); // 记录右孩子
        // 进行交换操作
        root->left = right;
        root->right = left;
        return root;
    }

    TreeNode* inverrTree_NoRec(TreeNode * root){ // 层次遍历
        if (root == nullptr) return nullptr;
        std::queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()){
            TreeNode* k = q.front();
            q.pop();

            TreeNode* subsititute = k->right;
            k->right = k->left;
            k->left = subsititute;

            if (k->left != nullptr) q.push(k->left);
            if (k->right != nullptr) q.push(k->right);
        }
        return root;
    }


};

/* 实例
 * TreeNode nodeA('A');
    TreeNode nodeB('B');
    TreeNode nodeC('C');
    TreeNode nodeD('D');
    TreeNode nodeE('E');
    TreeNode nodeF('F');
    TreeNode nodeG('G');
    TreeNode* root = &nodeA;
    nodeA . left = &nodeB;
    nodeA . right =&nodeC;
    nodeB . left = &nodeD;
    nodeB . right = &nodeE;
    nodeC.left = &nodeF;
    nodeC.right = &nodeG;
    Solution x;
    x.inverrTree_NoRec(root);
    printf("%c",root->right->right->val);
 *
 * */