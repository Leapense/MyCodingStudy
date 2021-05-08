#include <stdio.h>
#include <stddef.h>

struct PacketHeader {
	char flags;
	int seq;
};

int main()
{
	struct PacketHeader header;

	printf("💬 %d\n", sizeof(header.flags));
	printf("💬 %d\n", sizeof(header.seq));
	printf("💬 %d\n", sizeof(header));
	printf("💬 %d\n", sizeof(struct PacketHeader));

	printf("===== Using offsetof function =====\n");

	printf("💬 flags: %d\n", offsetof(struct PacketHeader, flags));
	printf("💬 seq: %d\n", offsetof(struct PacketHeader, seq));

	return 0;
}