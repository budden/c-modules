#include "test1p.h"

void vnutrennjaja() {
	int *x = (int*) malloc(1);
	osvobodi_esli_ne_0(x,0); 
	osvobodi_esli_ne_0(x,0); // net dvojjnogo osvobozhdenija i clang ehto ponimaet
	osvobodi_esli_ne_0(x,1); // pervoe osvobozhdenie (ne dvojnoe)
	printf("Ispolzuem x = %d\n",*x); // dolzhno bytq preduprezhdenie
}

int main() {
	vnutrennjaja();
};
