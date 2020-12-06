#include <iostream>
#include "binary_Tree_Inverse.h"

int main() {
    TreeNode nodeA('A');
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


}
