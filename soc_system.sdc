# Create Clock
# ------------
create_clock -name {clk} -period 20.000 -waveform { 0.000 10.000 } [get_ports {clk_clk}]
derive_clock_uncertainty