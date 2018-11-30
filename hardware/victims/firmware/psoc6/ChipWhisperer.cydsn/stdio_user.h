/***************************************************************************//**
* \file stdio_user.h
* \version 1.10
*
* \brief
* This file provides configuration macros and function prototypes to retarget
* I/O functions of the standard C run-time library.
*
********************************************************************************
* \copyright
* Copyright 2016-2018, Cypress Semiconductor Corporation. All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#ifndef _STDIO_USER_H_
#define _STDIO_USER_H_
/**
* \defgroup group_retarget_io Retarget I/O (printf/scanf)
* \{
* Retarget the I/O functions of the standard C run-time library to the user-defined target.
* 
* Application code frequently uses standard I/O library functions, such as
* scanf()/printf() to perform input/output operations. This utility allows you to retarget
* standard C run-time library I/O functions to the user-defined target.
*
* <h1>Design</h1>
* The file retarget.c defines functions that replace weakly linked I/O functions
* in the standard library (i.e. _write() and _read()). The functions in
* retarget.c in turn call the STDIO_PutChar() and STDIO_GetChar()
* implemented in stdio_user.c.
*
* <h1>Use</h1>
* The files for this utility are in this folder:
* \<PDL Install Directory\>/utilities/retarget_io
*
* The first thing you need to do is add the source files to your project.
*
* For a 3rd Party IDE, add the retarget_io folder to your list of include
* paths and add the files retarget.c and stdio_user.c to your project.
*
* For PSoC Creator, create a PSoC Creator project. Then click
* <b>Project</b> > <b>Build Setting</b> > <b>Peripheral Driver Library</b>. To
* add Retarget I/O source files to your project, enable it as shown on the
* screenshot below. After selecting Retarget I/O in the PDL software package
* list, click OK and build the project. The Retarget I/O source files are
* added to your project and are available for modification.
* ![Figure 1. Build Settings dialog in PSoC Creator](retarget_io_build_settings.png)
*
* There are multiple serial communication blocks (SCB) available. By default
* the Retarget I/O files use SCB0. The stdio_user.h file defines these macros:
* \code #define IO_STDOUT_UART      SCB0 
*  #define IO_STDIN_UART       SCB0  \endcode
*
* Modify these macros to use the SCB in your design. Standard library I/O
* calls are then retargeted to that SCB. 
*
* If you use PSoC Creator, the code generator creates a symbol UART_HW 
* to represent the SCB block used in your design. In this case you can 
* include "project.h" to access that symbol, and modify the macros like this:
* \code #define IO_STDOUT_UART      UART_HW
*  #define IO_STDIN_UART       UART_HW \endcode
*
* The functions implemented in retarget.c are weakly linked. If you wish
* to modify those functions, you can write your own implementation, and 
* not use stdio_user.c at all.
*
* \note The standard library is not standard in how it treats an I/O stream. 
*       Some implement a data buffer by default. The buffer is not flushed until 
*       it is full. In that case it may appear that your I/O is not working. You 
*       should be aware of how the library buffers data, and you should identify 
*       a buffering strategy and buffer size for a specified stream. If you 
*       supply a buffer, it must exist until the stream is closed. The following 
*       line of code disables the buffer for the standard library that 
*       accompanies the GCC compiler: 
*       \code setvbuf( stdin, NULL, _IONBF, 0 ); \endcode
*
*
* <h1>MISRA-C Compliance</h1>
* The Retarget IO utility has the following specific deviations:
*
* <table class="doxtable">
*   <tr>
*     <th>MISRA Rule</th>
*     <th>Rule Class (Required/Advisory)</th>
*     <th>Rule Description</th>
*     <th>Description of Deviation(s)</th>
*   </tr>
*   <tr>
*     <td>5.6</td>
*     <td>A</td>
*     <td>No identifier in one name space should have the same spelling
*         as an identifier in another name space, with the exception of
*         structure member and union member names.</td>
*     <td>Violated since the utility redefines the function declared in standard
*         library.</td>
*   </tr>
*   <tr>
*     <td>6.3</td>
*     <td>A</td>
*     <td><i>typedefs</i> that indicate size and signedness should be used in
*         place of the basic numerical type.</td>
*     <td>Basic numerical types are used to match the definition of the
*         function with the prototype defined in the standard library.</td>
*   </tr>
*   <tr>
*     <td>8.8</td>
*     <td>R</td>
*     <td>An external object or function shall be declared in one and only one file.</td>
*     <td>The <i>_write</i> is declared in the standard i/o library with
*         <i>weak</i> attribute and is redefined in the utility.</td>
*   </tr>
*   <tr>
*     <td>14.2</td>
*     <td>R</td>
*     <td>All non-null statements shall either:<br>(a) have at least one
*         side-effect however executed, or <br>(b) cause control flow to change.</td>
*     <td>The unused function parameters are cast to void. This statement
*         has no side-effect and is used to suppress a compiler warning.</td>
*   </tr>
*   <tr>
*     <td>20.9</td>
*     <td>R</td>
*     <td>The input/output library <i><stdio.h></i> shall not be used in
*         production code.</td>
*     <td><i>stdio.h</i> file is included to connect the standard function
*         definition with their declaration in the standard library.</td>
*   </tr>
* </table>
*
* <h1>Changelog</h1>
*
* <table class="doxtable">
* <tr><th>Version</th><th>Changes</th><th>Reason for Change</th></tr>
* <tr>
* <td>1.10</td>
* <td>Added STDIN support</td> 
* <td></td>
* </tr>
* <tr>
* <td>1.0</td>
* <td>Initial version</td>
* <td></td>
* </tr>
* </table>
* \}
*/
#include "cy_device_headers.h"
#include "project.h"

/* Must remain uncommented to use this utility */
#define IO_STDOUT_ENABLE
#define IO_STDIN_ENABLE
#define IO_STDOUT_UART      UART_HW
#define IO_STDIN_UART       UART_HW

#if defined(IO_STDOUT_ENABLE) || defined(IO_STDIN_ENABLE)
#if defined(IO_STDOUT_UART) || defined(IO_STDIN_UART)
#include "scb/cy_scb_uart.h"
#endif /* IO_STDOUT_UART || IO_STDIN_UART */
#endif /* IO_STDOUT_ENABLE || IO_STDIN_ENABLE */

/* Controls whether CR is added for LF */
#ifndef STDOUT_CR_LF
#define STDOUT_CR_LF    0
#endif /* STDOUT_CR_LF */

#if defined(__cplusplus)
extern "C" {
#endif

#if defined (IO_STDOUT_ENABLE) && defined (IO_STDOUT_UART)
void STDIO_PutChar(uint32_t ch);
#endif /* IO_STDOUT_ENABLE && IO_STDOUT_UART */

#if defined (IO_STDIN_ENABLE) && defined (IO_STDIN_UART)
uint32_t STDIO_GetChar(void);
#endif /* IO_STDIN_ENABLE && IO_STDIN_UART */

#if defined(__cplusplus)
}
#endif

#endif /* _STDIO_USER_H_ */


/* [] END OF FILE */
