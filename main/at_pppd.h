/* at_ppp.h Copyright 2018 Eric Pooch

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */

#ifndef __AT_PPPD_H__
//#define __AT_PPPD_H__

uint8_t at_testCmdPpp(uint8_t *cmd_name);

uint8_t at_setupCmdPpp(uint8_t para_num);

uint8_t at_exeCmdPpp(uint8_t *cmd_name);

#define PPP_AT_COMMAND "+PPPD"
#define PPP_ATD_COMMAND "DTPPPD"
#define PPP_AT2_COMMAND "DTPPPD;"


#define PPP_AT_CUSTOM_COMMANDS	{PPP_AT_COMMAND, at_testCmdPpp, NULL, at_setupCmdPpp, at_exeCmdPpp},\
{PPP_ATD_COMMAND, at_testCmdPpp, NULL, at_setupCmdPpp, at_exeCmdPpp},\
{PPP_AT2_COMMAND, at_testCmdPpp, NULL, at_setupCmdPpp, at_exeCmdPpp},

#endif //__AT_PPPD_H__
