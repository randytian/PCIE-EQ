
`define DATA_0 0
`define DATA_1 1
`define DATA_2 2
`define DATA_3 3
`define PEMCU_TOP top.pemcu

always @(posedge `PEMCU_TOP.U_R8051XC2.memack ) begin 

    if ( `PEMCU_TOP.U_R8051XC2.memwr ) 
	begin
	casez ( `PEMCU_TOP.U_R8051XC2.memaddr  )

	16'hF100 :  begin 

		    case ( `PEMCU_TOP.U_R8051XC2.memdatao )

		    8'h01 :	$display("(%t) MCUHIT! Call Firmware Function code   : main_", $time );	
		    8'h02 :	$display("(%t) MCUHIT! Call Firmware Function code   : EQ_INIT_", $time );	
		    8'h03 :	$display("(%t) MCUHIT! Call Firmware Function code   : EQ_ISR_", $time );
		    8'h04 :	$display("(%t) MCUHIT! Call Firmware Function code   : PE0_MainLoop_", $time );	
		    8'h05 :	$display("(%t) MCUHIT! Call Firmware Function code   : PE1_MainLoop_", $time );	
		    8'h06 :	$display("(%t) MCUHIT! Call Firmware Function code   : PE2_MainLoop_", $time );	
		    8'h07 :	$display("(%t) MCUHIT! Call Firmware Function code   : PE3_MainLoop_", $time );
		    8'h08 :	$display("(%t) MCUHIT! Call Firmware Function code   : PEG0_MainLoop_", $time );	
		    8'h09 :	$display("(%t) MCUHIT! Call Firmware Function code   : PEG1_MainLoop_", $time );	
		    8'h0a :	$display("(%t) MCUHIT! Call Firmware Function code   : Check_PEx_TxRxParam_", $time );	
		    8'h0b :	$display("(%t) MCUHIT! Call Firmware Function code   : Check_Param_", $time );
		    8'h0c :	$display("(%t) MCUHIT! Call Firmware Function code   : Read_default_TxRxParam_", $time );	
		    8'h0d :	$display("(%t) MCUHIT! Call Firmware Function code   : Read_Param_", $time );	
		    8'h0e :	$display("(%t) MCUHIT! Call Firmware Function code   : Try_Preset_value_", $time );	
		    8'h0f :	$display("(%t) MCUHIT! Call Firmware Function code   : Try_Fine_tune_", $time );
		    8'h10 :	$display("(%t) MCUHIT! Call Firmware Function code   : Check_HFOUT_", $time );
		    8'h11 :	$display("(%t) MCUHIT! Call Firmware Function code   : Set_Final_Param_", $time );
		    8'h12 :	$display("(%t) MCUHIT! Call Firmware Function code   : DisableEQInt_", $time );
		    8'h13 :	$display("(%t) MCUHIT! Call Firmware Function code   : EnableEQInt_", $time );
		    8'h14 :	$display("(%t) MCUHIT! Call Firmware Function code   : TimerInit_", $time );
		    8'h15 :	$display("(%t) MCUHIT! Call Firmware Function code   : InitialTimer0Interrupt_", $time );
		    8'h16 :	$display("(%t) MCUHIT! Call Firmware Function code   : Timer0Isr_", $time );
		    8'h17 :	$display("(%t) MCUHIT! Call Firmware Function code   : DisableInt_", $time );
		    8'h18 :	$display("(%t) MCUHIT! Call Firmware Function code   : EnableInt_", $time );
		    8'h19 :	$display("(%t) MCUHIT! Call Firmware Function code   : uart1_init_", $time );
		    8'h1A :	$display("(%t) MCUHIT! Call Firmware Function code   : uart1_putc_", $time );
		    8'h1B :	$display("(%t) MCUHIT! Call Firmware Function code   : uart1_puts_", $time );
		    8'h1C :	$display("(%t) MCUHIT! Call Firmware Function code   : PEx_State_Switch_", $time );
		    8'h1D :	$display("(%t) MCUHIT! Call Firmware Function code   : BIOS2PEMCU_DB_Handler_", $time );
		    8'h1E :	$display("(%t) MCUHIT! Call Firmware Function code   : Dynamic_Clock_handler_", $time );		    
		    endcase 	
		    end 

 	endcase 
	end 
	
end


 