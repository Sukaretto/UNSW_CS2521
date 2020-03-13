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
        printf("At Node %d, Height difference is %d",t->Value,leftD-rightD);
    }       
}

// Q2. return heights ONLY the given binary tree is a height balanced tree.
/* change following code into Q1.
if (t == NULL) {
    return 0;
}
if (leftD == -99 || rightD == -99) {
    return -99;
}
if (nodeDiff >1 ) {
    return -99;
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
        return 3 + lC + rC ;
    }
}
