
#include <iostream>
#include <gtest/gtest.h>
#include "ngap_amf_handlers.h"

class ngap_amf_handlers : public ::testing::Test {
	virtual void SetUp() {}
	virtual void TearDown() {}
};

// Testing the functionality of gnb association states
TEST(ngap_amf_handlers, test_ng_gnb_state2str){

	
	enum state = 0;
	EXPECT_EQ(ng_gnb_state2str(state), "NGAP_INIT");

	state = 1;
	EXPECT_EQ(ng_gnb_state2str(state), "NGAP_RESETING");
	
	state = 2;
	EXPECT_EQ(ng_gnb_state2str(state), "NGAP_READY");

	state = 3;
	EXPECT_EQ(ng_gnb_state2str(state), "NGAP_SHUTDOWN");

 	
}

int main(int argc, char** argv) {
  :: testing ::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
