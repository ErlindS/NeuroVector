__asm(
	".area .text\n\t"
	".bndry 256\n\t"
);

union my_pointer
{
	struct
	{
		unsigned int page;		// high byte of pointer
		unsigned int angle;		// low byte of pointer
	};
	const int* ptr;
};