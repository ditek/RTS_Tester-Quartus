
module soc_system (
	clk_clk,
	tester_ack,
	tester_r_wn,
	tester_int,
	tester_data,
	serial_rxd,
	serial_txd);	

	input		clk_clk;
	input	[3:0]	tester_ack;
	input		tester_r_wn;
	output	[3:0]	tester_int;
	inout	[6:0]	tester_data;
	input		serial_rxd;
	output		serial_txd;
endmodule
