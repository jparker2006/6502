[comment]: <> (Add arguments that instructions take in table)

<div style='text-align: center; font-size: 30px;'><b><u>6502 Microprocessor Emulator</u></b></div>

<div style='margin-left: 20px; font-size: 23px;'><b><a href="http://6502.org/users/obelisk/6502/instructions.html" target="_blank">Instructions Set</a></b></div>

<div style='margin-left: 20px; font-size: 18px;'>Load/Store Operations</div>
<table style='border: 0px; width: 450; margin-left: 30px; font-size: 14px;'>
<tbody>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">LDA</a></td>
<td>Load Accumulator</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">LDX</a></td>
<td>Load X Register</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">LDY</a></td>
<td>Load Y Register</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">STA</a></td>
<td>Store Accumulator</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">STX</a></td>
<td>Store X Register</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">STY</a></td>
<td>Store Y Register</td>
<td></td>
<td>Not started</td></tr>

</tbody>
</table>

<div style='margin-left: 20px; font-size: 18px;'>Register Transfers</div>
<table style='border: 0px; width: 450; margin-left: 30px; font-size: 14px'>
<tbody>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">TAX</a></td>
<td>Transfer accumulator to X</td>
<td></td>

<td>Not started</td></tr>
<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">TAY</a></td>
<td>Transfer accumulator to Y</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">TXA</a></td>
<td>Transfer X to accumulator</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">TYA</a></td>
<td>Transfer Y to accumulator</td>
<td></td>
<td>Not started</td></tr>

</tbody>
</table>

<div style='margin-left: 20px; font-size: 18px;'>Stack Operations</div>
<table style='border: 0px; width: 450; margin-left: 30px; font-size: 14px'>
<tbody>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">TSX</a></td>
<td>Transfer stack pointer to X</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">TXS</a></td>
<td>Transfer X to stack pointer</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">PHA</a></td>
<td>Push accumulator on stack</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">PHP</a></td>
<td>Push processor status on stack</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">PLA</a></td>
<td>Pull accumulator from stack</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">PLP</a></td>
<td>Pull processor status from stack</td>
<td></td>
<td>Not started</td></tr>

</tbody>
</table>

<div style='margin-left: 20px; font-size: 18px;'>Logical</div>
<table style='border: 0px; width: 450; margin-left: 30px; font-size: 14px'>
<tbody>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">AND</a></td>
<td>Logical AND</td>
<td>alu_logic</td>
<td>Completed</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">EOR</a></td>
<td>Exclusive OR</td>
<td>alu_logic</td>
<td>Completed</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">ORA</a></td>
<td>Logical Inclusive OR</td>
<td>alu_logic</td>
<td>Completed</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">BIT</a></td>
<td>Logical Inclusive OR</td>
<td>alu_logic</td>
<td>Completed</td></tr>

</tbody>
</table>

<div style='margin-left: 20px; font-size: 18px;'>Arithmetic</div>
<table style='border: 0px; width: 450; margin-left: 30px; font-size: 14px'>
<tbody>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">ADC</a></td>
<td>Add with Carry</td>
<td>adder</td>
<td>In progress</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">SBC</a></td>
<td>Subtract with Carry</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">CMP</a></td>
<td>Compare accumulator</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">CPX</a></td>
<td>Compare X register</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">CPY</a></td>
<td>Compare Y register</td>
<td></td>
<td>Not started</td></tr>

</tbody>
</table>

<div style='margin-left: 20px; font-size: 18px;'>Increments & Decrements
</div>
<table style='border: 0px; width: 450; margin-left: 30px; font-size: 14px'>
<tbody>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">INC</a></td>
<td>Increment a memory location</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">INX</a></td>
<td>Increment the X register</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">INY</a></td>
<td>Increment the Y register</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">DEC</a></td>
<td>Decrement a memory location</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">DEX</a></td>
<td>Decrement the X register</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">DEY</a></td>
<td>Decrement the Y register</td>
<td></td>
<td>Not started</td></tr>

</tbody>
</table>

<div style='margin-left: 20px; font-size: 18px;'>Shifts</div>
<table style='border: 0px; width: 450; margin-left: 30px; font-size: 14px'>
<tbody>
<tr>
<td align="MIDDLE" width="10%"><a href="https://en.wikipedia.org/wiki/Arithmetic_shift" target="_blank">ASL</a></td>
<td>Arithmetic Shift Left</td>
<td>alu_logic</td>
<td>In progress</td>
</tr>

<tr>
<td align="MIDDLE" width="10%"><a href="https://en.wikipedia.org/wiki/Logical_shift" target="_blank">LSR</a></td>
<td>Logical Shift Right</td>
<td>alu_logic</td>
<td>Not started</td>
</tr>

<tr>
<td align="MIDDLE" width="10%"><a href="https://en.wikipedia.org/wiki/Circular_shift" target="_blank">ROL</a></td>
<td>Rotate Left</td>
<td>alu_logic</td>
<td>In progress</td>
</tr>

<tr>
<td align="MIDDLE" width="10%"><a href="https://en.wikipedia.org/wiki/Circular_shift" target="_blank">ROR</a></td>
<td>Rotate Right</td>
<td>alu_logic</td><td>In progress</td>
</tr>
</tbody>
</table>

<div style='margin-left: 20px; font-size: 18px;'>Jumps & Calls</div>
<table style='border: 0px; width: 450; margin-left: 30px; font-size: 14px'>
<tbody>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">JMP</a></td>
<td>Jump to another location</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">JSR</a></td>
<td>Jump to a subroutine</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">RTS</a></td>
<td>Return from subroutine</td>
<td></td>
<td>Not started</td></tr>

</tbody>
</table>

<div style='margin-left: 20px; font-size: 18px;'>Branches</div>
<table style='border: 0px; width: 450; margin-left: 30px; font-size: 14px'>
<tbody>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">BCC</a></td>
<td>Branch if carry flag clear</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">BCS</a></td>
<td>Branch if carry flag set</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">BEQ</a></td>
<td>Branch if zero flag set</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">BMI</a></td>
<td>Branch if negative flag set</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">BNE</a></td>
<td>Branch if zero flag clear</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">BPL</a></td>
<td>Branch if negative flag clear</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">BVC</a></td>
<td>Branch if overflow flag clear</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">BVS</a></td>
<td>Branch if overflow flag set</td>
<td></td>
<td>Not started</td></tr>

</tbody>
</table>

<div style='margin-left: 20px; font-size: 18px;'>Status Flag Changes</div>
<table style='border: 0px; width: 450; margin-left: 30px; font-size: 14px'>
<tbody>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">CLC</a></td>
<td>Clear carry flag</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">CLD</a></td>
<td>Clear decimal mode flag</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">CLI</a></td>
<td>Clear interrupt disable flag</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">CLV</a></td>
<td>Clear overflow flag</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">SEC</a></td>
<td>Set carry flag</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">SED</a></td>
<td>Set decimal mode flag</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">SEI</a></td>
<td>Set interrupt disable flag</td>
<td></td>
<td>Not started</td></tr>

</tbody>
</table>

<div style='margin-left: 20px; font-size: 18px;'>System Functions</div>
<table style='border: 0px; width: 450; margin-left: 30px; font-size: 14px'>
<tbody>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">BRK</a></td>
<td>Force an interrupt</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">NOP</a></td>
<td>No Operation</td>
<td></td>
<td>Not started</td></tr>

<tr><td align="MIDDLE" width="10%"><a href="" target="_blank">RTI</a></td>
<td>Return from Interrupt</td>
<td></td>
<td>Not started</td></tr>

</tbody>
</table>