	component soc_system is
		port (
			clk_clk     : in    std_logic                    := 'X';             -- clk
			tester_ack  : in    std_logic_vector(3 downto 0) := (others => 'X'); -- ack
			tester_r_wn : in    std_logic                    := 'X';             -- r_wn
			tester_int  : out   std_logic_vector(3 downto 0);                    -- int
			tester_data : inout std_logic_vector(6 downto 0) := (others => 'X'); -- data
			serial_rxd  : in    std_logic                    := 'X';             -- rxd
			serial_txd  : out   std_logic                                        -- txd
		);
	end component soc_system;

	u0 : component soc_system
		port map (
			clk_clk     => CONNECTED_TO_clk_clk,     --    clk.clk
			tester_ack  => CONNECTED_TO_tester_ack,  -- tester.ack
			tester_r_wn => CONNECTED_TO_tester_r_wn, --       .r_wn
			tester_int  => CONNECTED_TO_tester_int,  --       .int
			tester_data => CONNECTED_TO_tester_data, --       .data
			serial_rxd  => CONNECTED_TO_serial_rxd,  -- serial.rxd
			serial_txd  => CONNECTED_TO_serial_txd   --       .txd
		);

