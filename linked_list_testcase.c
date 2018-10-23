#include <gtest/gtest.h>
#include <stdlib.h>
#include "linked_list.h"


TEST(MytestCategory,init)
{
	struct buffer_type b;
	unsigned char receive_buffer[MAX_BUFFER];
     init_buffer(&b,receive_buffer);


    EXPECT_EQ(b.head,receive_buffer);
	EXPECT_EQ(b.tail,receive_buffer);
	EXPECT_EQ(b.tail,receive_buffer);
}
