#include <stdio.h>
#include <stdlib.h>

struct nd {
    int itm;
    struct nd *lt;
    struct nd *rt;
};
struct nd* insert(struct nd* root, int itm) {
	if(root==NULL) {
        struct nd* nd=(struct nd*)malloc(sizeof(struct nd));
        nd->itm=itm;
        nd->lt=NULL;
        nd->rt=NULL;
        return nd;
	} 
	else {
		struct nd* c;
		if(itm<=root->itm) {
            c=insert(root->lt,itm);
            root->lt=c;
		} 
        else {
            c=insert(root->rt,itm);
            root->rt=c;
		}
		return root;
	}
}
int Height(struct nd* root) 
{
    int a=0;
    struct nd* b=root;
    while(b&&(b->lt!=NULL || b->rt!=NULL) ){
      if(b->rt!=NULL){
          b=b->rt;
          a++;
          continue;
      }
      if (b->lt!=NULL){
          b=b->lt;
          a++;
          continue;
      }
    }
    return a;
}
int main() 
{
    struct nd* root=NULL;
    int t;
    int d;
    scanf("%d", &t);
    while(t-- >0) {
        scanf("%d",&d);
        root=insert(root,d);
    }
	printf("%d",Height(root));
    return 0;
}
