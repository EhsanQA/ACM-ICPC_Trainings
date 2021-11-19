#include<bits/stdc++.h>

using namespace std;

int nodeCount;


struct Node {
    int nodeNumber = 0;
    Node *parent;
    Node *lChild;
    Node *rChild;
    Node(Node *p, Node *l, Node *r) {
        parent = p;
        lChild = l;
        rChild = r;
        nodeCount++;
        nodeNumber = nodeCount - 1;
    }
}nil(NULL, NULL, NULL);


int main() {
    Node root(&nil, &nil, &nil);
    Node one(&root, &nil, &nil);
    Node two(&root, &nil, &nil);
    root.lChild = &one;
    root.rChild = &two;
    cout << nodeCount << endl;
    cout << one.nodeNumber << " " << two.nodeNumber << " " << root.nodeNumber << endl;

    
    return 0;
}
