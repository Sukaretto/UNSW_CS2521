#include <stdio.h>



//Q1. prints the height difference between left&right for all node, function returns the height of binary tree.
int printHeightDiff(BSTree t){
    if(t == NULL) {
        return 0;
    }
    else {
        int leftD = printHeightDiff (t->left);
        int rightD = printHeightDiff (t->right);
        if (leftD > rightD) {
            return (leftD + 1);
        }
        else return (rightD + 1);
        int nodeDiff = abs(leftD-rightD);
        printf("Height difference is %d",nodeDiff);
    }
}

// Q2. return heights ONLY the given binary tree is a height balanced tree.
/* add following code into Q1.
if (leftD < 0 || rightD < 0) {
    return -99;
}
if (nodeDiff >1 ) {
    leftD = rightD = -99;
}
*/

// Q3. Computes the width of a tree.
int BSTWidth(BSTree t) {
    if ( t == NULL) {
        return 0;
    }
    else {
        int lC = BSTWidth(t->left);
        int rC = BSTWidth(t->right);
        return int ans = 3 * (lC + rC + 1);
    }
}