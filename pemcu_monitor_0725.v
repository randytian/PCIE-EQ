
///------------------------- define for PEMCU monitor  -----------------
`define	    PEMCU_TOP	`PROJECT.PEXC.PEMCU


module pemcu_fmw_monitor();

	integer fexe;
	
	integer insns;

	initial begin
	    $display("MCU Monitor Init!");
	end

		always @(posedge `PEMCU_TOP.memack ) begin  

			if(`PEMCU_TOP.memwr == 1'b1 )	begin//PEMCU_CFG_WR == 1'b0 ) begin  // write D0F7 
			     
			      $display("(%t) MCUHIT! memwr %h Hit : %x " ,$time, `PEMCU_TOP.memaddr , `PEMCU_TOP.memdatao);

				casez(`PEMCU_TOP.memaddr )	//PEMCU_CFG_RNUM )	//wb_xhci_adr[15:0])
					16'hE000 : $display("(%t) MCUHIT! 16'hE000 Hit : %x " ,$time, `PEMCU_TOP.memdatao);
					16'hA101 : $display("(%t) MCUHIT! Call Firmware Function para1 : %x",
					$time, `PEMCU_TOP.memdatao );	//PEMCU_CFG_WDATA );
					16'hA102 : $display("(%t) MCUHIT! Call Firmware Function para2 : %x",
					$time, `PEMCU_TOP.memdatao );	//PEMCU_CFG_WDATA );
					16'hA103 : $display("(%t) MCUHIT! Call Firmware Function para3 : %x",
					$time, `PEMCU_TOP.memdatao );	//PEMCU_CFG_WDATA );
					16'hA104 : $display("(%t) MCUHIT! Call Firmware Function para4 : %x",
					$time, `PEMCU_TOP.memdatao );	//PEMCU_CFG_WDATA );
					16'hA105 : $display("(%t) MCUHIT! Call Firmware Function para5 : %x",
					$time, `PEMCU_TOP.memdatao );	//PEMCU_CFG_WDATA );
					16'hA106 : $display("(%t) MCUHIT! Call Firmware Function para6 : %x",
					$time, `PEMCU_TOP.memdatao );	//PEMCU_CFG_WDATA );
					16'hA107 : $display("(%t) MCUHIT! Call Firmware Function para7 : %x",
					$time, `PEMCU_TOP.memdatao );	//PEMCU_CFG_WDATA );
					16'hA108 : $display("(%t) MCUHIT! Call Firmware Function para8 : %x",
					$time, `PEMCU_TOP.memdatao );	//PEMCU_CFG_WDATA );
					16'hA109 : $display("(%t) MCUHIT! POST code : %x",
					$time, `PEMCU_TOP.memdatao );	//PEMCU_CFG_WDATA );
					16'hA10A : $display("(%t) MCUHIT! MARK No. : %x",
					$time, `PEMCU_TOP.memdatao );	//PEMCU_CFG_WDATA );
					16'hA10B : $display("(%t) MCUHIT! Enter here : %x",
					$time, `PEMCU_TOP.memdatao );	//PEMCU_CFG_WDATA );
					16'hA10C : $display("MCUHIT! return");
					16'hA10D : $display("(%t) MCUHIT! return : %x",
					$time, `PEMCU_TOP.memdatao );	//PEMCU_CFG_WDATA );
					16'hA10E : $display("(%t) MCUHIT! Failed : %x",
					$time, `PEMCU_TOP.memdatao );	//PEMCU_CFG_WDATA );
					16'hA10F : $display("(%t) MCUHIT! Rule : %x",
					$time, `PEMCU_TOP.memdatao );	//PEMCU_CFG_WDATA );

				
					
				endcase 
			end 
		end 

		always @(posedge `PEMCU_TOP.memack ) begin //PEMCU_CFG_RRDY ) begin	
			if(`PEMCU_TOP.memrd && `PEMCU_TOP.memack )	//PEMCU_CFG_WR == 1'b1 ) begin  // read D0F7 	//wb_xhci_we) begin
			    begin
			    $display("(%t) MCUHIT! Read  Reg[%h] : %x",
					$time, `PEMCU_TOP.memaddr, `PEMCU_TOP.memdatai );

				casez(`PEMCU_TOP.memaddr )  //PEMCU_CFG_RNUM )	//wb_xhci_adr[15:0])
				
					16'hf0e0 : $display("(%t) MCUHIT! Read  Reg[PEMCU_PCIE_Revision & PEMCU_RPCIESATACFG_] : %x",
					$time, `PEMCU_TOP.memdatai );	//PEMCU_CFG_RDATA );

					16'hf0f0 : $display("(%t) MCUHIT! Read  Reg[PEMCU_REG_0[0]] : %x",
					$time, `PEMCU_TOP.memdatai );	//PEMCU_CFG_RDATA );
					16'hf0f1 : $display("(%t) MCUHIT! Read  Reg[PEMCU_REG_0[1]] : %x",
					$time, `PEMCU_TOP.memdatai );	//PEMCU_CFG_RDATA );
					16'hf0f2 : $display("(%t) MCUHIT! Read  Reg[PEMCU_REG_0[2]] : %x",
					$time, `PEMCU_TOP.memdatai );	//PEMCU_CFG_RDATA );
					16'hf0f3 : $display("(%t) MCUHIT! Read  Reg[PEMCU_REG_0[3]] : %x",
					$time, `PEMCU_TOP.memdatai );	//PEMCU_CFG_RDATA );

					16'hf0f4 : $display("(%t) MCUHIT! Read  Reg[PEMCU_REG_1] : %x",
					$time, `PEMCU_TOP.memdatai );	//PEMCU_CFG_RDATA );

					16'hf0f8 : $display("(%t) MCUHIT! Read  Reg[PEMCU_REG_2] : %x",
					$time, `PEMCU_TOP.memdatai );	//PEMCU_CFG_RDATA );

					16'hf0fc : $display("(%t) MCUHIT! Read  Reg[PEMCU_REG_3] : %x",
					$time, `PEMCU_TOP.memdatai );	//PEMCU_CFG_RDATA );

					16'hf9b0 : $display("(%t) MCUHIT! Read  Reg[PEMCU AutoFill registers] : %x",
					$time, `PEMCU_TOP.memdatai );	//PEMCU_CFG_RDATA );

					16'hf9b4 : $display("(%t) MCUHIT! Read  Reg[PEMCU AutoFill Length] : %x",
					$time, `PEMCU_TOP.memdatai );	//PEMCU_CFG_RDATA );
					
			
				endcase 
			    end 


		end 
//	end 

///---------------------------------------------------------------------------------------------


always @(posedge `PEMCU_TOP.U_R8051XC2.memack ) begin 

    if ( `PEMCU_TOP.U_R8051XC2.memwr ) 
	begin
	casez ( `PEMCU_TOP.U_R8051XC2.memaddr  )
	16'hD000 :  $display("(%t) MCUHIT! 16'hD000 , DBG_PEMCU   : ", $time );// begin
	16'hE000 :  $display("(%t) MCUHIT! 16'hE000 , DBG_PEMCU   : ", $time );// begin

	16'hA100 :  begin 


		    case ( `PEMCU_TOP.U_R8051XC2.memdatao )

		    8'h01 :	$display("(%t) MCUHIT! Call Firmware Function code   : main_", $time );	
		    8'h02 :	$display("(%t) MCUHIT! Call Firmware Function code   : EQ_INIT_", $time );	
		    8'h03 :	$display("(%t) MCUHIT! Call Firmware Function code   : EQ_ISR_", $time );
		    8'h04 :	$display("(%t) MCUHIT! Call Firmware Function code   : PE0_MainLoop_", $time );	
		    8'h05 :	$display("(%t) MCUHIT! Call Firmware Function code   : PE1_MainLoop_", $time );	
		    8'h06 :	$display("(%t) MCUHIT! Call Firmware Function code   : PE2_MainLoop_", $time );	
		    8'h07 :	$display("(%t) MCUHIT! Call Firmware Function code   : PE3_MainLoop_", $time );
		    
		    8'h08 :	$display("(%t) MCUHIT! Call Firmware Function code   : PE4_MainLoop_", $time );	
		    8'h09 :	$display("(%t) MCUHIT! Call Firmware Function code   : PE5_MainLoop_", $time );	
		    8'h0a :	$display("(%t) MCUHIT! Call Firmware Function code   : PE6_MainLoop_", $time );	
		    8'h0b :	$display("(%t) MCUHIT! Call Firmware Function code   : PE7_MainLoop_", $time );
		    8'h0c :	$display("(%t) MCUHIT! Call Firmware Function code   : VPI_MainLoop_", $time );	
//			8'h0d :	$display("(%t) MCUHIT! Call Firmware Function code   : Read_Param_", $time );	
		    8'h0e :	$display("(%t) MCUHIT! Call Firmware Function code   : PEx_State_Switch_", $time );	
		    8'h0f :	$display("(%t) MCUHIT! Call Firmware Function code   : Try_Preset_value_", $time );
		    8'h10 :	$display("(%t) MCUHIT! Call Firmware Function code   : Set_Cursor_Param_", $time );
		    8'h11 :	$display("(%t) MCUHIT! Call Firmware Function code   : Read_default_TxRxParam_", $time );
		    8'h12 :	$display("(%t) MCUHIT! Call Firmware Function code   : Read_Param_", $time );
		    8'h13 :	$display("(%t) MCUHIT! Call Firmware Function code   : DisableEQInt_", $time );
		    8'h14 :	$display("(%t) MCUHIT! Call Firmware Function code   : EnableEQInt_", $time );
		    8'h15 :	$display("(%t) MCUHIT! Call Firmware Function code   : Dynamic_Clock_handler_", $time );
		    8'h16 :	$display("(%t) MCUHIT! Call Firmware Function code   : TimerInit_", $time );
		    8'h17 :	$display("(%t) MCUHIT! Call Firmware Function code   : InitialTimer0Interrupt_", $time );
		    8'h18 :	$display("(%t) MCUHIT! Call Firmware Function code   : Timer0Isr_", $time );
		    8'h19 :	$display("(%t) MCUHIT! Call Firmware Function code   : DisableInt_", $time );
		    8'h1A :	$display("(%t) MCUHIT! Call Firmware Function code   : EnableInt_", $time );
		    8'h1B :	$display("(%t) MCUHIT! Call Firmware Function code   : uart1_init_", $time );
		    8'h1C :	$display("(%t) MCUHIT! Call Firmware Function code   : uart1_putc_", $time );
		    8'h1D :	$display("(%t) MCUHIT! Call Firmware Function code   : uart1_puts_", $time );
		    8'h1E :	$display("(%t) MCUHIT! Call Firmware Function code   : VPI_State_Switch_", $time );
		    endcase 	

		    end 

 	endcase 
	end 
	
end


 




endmodule 

