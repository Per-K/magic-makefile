#include "main.h"
#include "aux.h"

void foo()
{
	bar();
}

int main(int argc, char *argv[])
{
	foo();

	return 0;
}
