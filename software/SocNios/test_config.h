

#ifndef _test_config__H
#define _test_config__H

/***************************************************************************/
/**************************** GENERAL DEFINES ******************************/
/***************************************************************************/

#define ADDR_CTRL				REAL_TIME_TESTER_BASE+	 0
#define ADDR_STATUS 			REAL_TIME_TESTER_BASE+	 4
#define ADDR_MEM_BASE 			REAL_TIME_TESTER_BASE+	 8
#define ADDR_MEM_SIZE 			REAL_TIME_TESTER_BASE+	12
#define ADDR_CLK_SCALER			REAL_TIME_TESTER_BASE+	16
#define ADDR_HOLD_TIME			REAL_TIME_TESTER_BASE+	20
#define ADDR_INT_A_FREQ_SCALER	REAL_TIME_TESTER_BASE+	24
#define ADDR_INT_B_FREQ_SCALER	REAL_TIME_TESTER_BASE+	28
#define ADDR_INT_C_FREQ_SCALER	REAL_TIME_TESTER_BASE+	32
#define ADDR_INT_D_FREQ_SCALER	REAL_TIME_TESTER_BASE+	36

#define CTRL_WRITE_MEM 			0
#define CTRL_BURST 				1
#define CTRL_RESET_CONSUMER_N 	2
#define CTRL_RESET_PRODUCER_N 	3


#define WRITE(ADDR,VAL)		IOWR(ADDR, 0, VAL); \
							if ((ret = IORD(ADDR, 0)) != VAL) \
								goto fail ;

/***************************************************************************/
/**************************** TEST CONFGURATION ****************************/
/***************************************************************************/
//Platform clock in MHz
#define F_CLK			50

//Time scaler, multiplies the clock period TIME_SCALER-times, [2, R>, 0 disables, 1 has no effect
#define TIME_SCALER		3

//Specify the test duration ms
#define TEST_DURATION 	10

//Time the tester will hold the data in ns after initiating an interrupt
#define HOLD_TIME		1

//Writing to memory using BURST, undefining will use normal writing
#define BURST_WRITE 	1

//specify a period in us (microseconds), 0 or undef disables the int
#define INT_A_PERIOD	10    //us
#define INT_B_PERIOD 	10
#define INT_C_PERIOD	10
#define INT_D_PERIOD	10



#endif /* _test_config__H */


