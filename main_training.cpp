#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct t_Pair{
	int a;
	int b;
};

t_Pair modify_pair_variable(t_Pair pair) {
	pair.a = pair.a + pair.a;
	pair.b = pair.b + pair.b + pair.b;

	return pair;
}

int main() {
	t_Pair pair;
	t_Pair modified;

	printf("Enter ""a"" field of pair: ");
	scanf("%d", &pair.a);

	printf("Enter ""b"" field of pair: ");
	scanf("%d", &pair.b);

	printf("Field ""a"" of pair = %d\nField ""b"" of pair = %d", pair.a, pair.b);

	modified = modify_pair_variable(pair);

	printf("Field ""a"" of pair = %d\nField ""b"" of pair = %d", pair.a, pair.b);
}