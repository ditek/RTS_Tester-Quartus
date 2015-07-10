	soc_system u0 (
		.clk_clk     (<connected-to-clk_clk>),     //    clk.clk
		.tester_ack  (<connected-to-tester_ack>),  // tester.ack
		.tester_r_wn (<connected-to-tester_r_wn>), //       .r_wn
		.tester_int  (<connected-to-tester_int>),  //       .int
		.tester_data (<connected-to-tester_data>), //       .data
		.serial_rxd  (<connected-to-serial_rxd>),  // serial.rxd
		.serial_txd  (<connected-to-serial_txd>)   //       .txd
	);

