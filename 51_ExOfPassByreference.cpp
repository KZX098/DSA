#include <stdio.h>

void update(int *pa,int *pb) {
    int pb2=*pb;//storing copy of value at b
    if((*pa)>(*pb)){
        *pb= ((*pa)-(*pb));
    }
    else if ((*pb)>(*pa)) {
        *pb= ((*pb)-(*pa));
    }
    *pa=((*pa)+pb2);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}