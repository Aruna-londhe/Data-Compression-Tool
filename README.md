# Data-Compression-Tool

*Company*: CODTECH IT SOLUTIONS

*NAME*: Aruna Londhe

*INTERN ID*: CT6WOFR

*DOMAINS*: C PROGRAMMING

*DURATION*: January 30th 2025 to March 15th 2025

*MENTOR*: NILA SANTOS

#Description for DATA COMPRESSION TOOL in C

1. Overview

This C program implements Run-Length Encoding (RLE), a basic data compression technique. The program allows the user to:
	•	Compress a text file using RLE.
	•	Decompress the compressed file back to its original form.

The program reads from an input file (e.g., input.txt), compresses the data, and stores the result in an output file (e.g., compressed.txt). For decompression, it reads the compressed file and writes the decompressed content into another file (e.g., decompressed.txt).

2. Tools and Technologies Used
	•	Programming Language: C
	•	C is used for its performance, efficiency, and ability to directly interact with system resources like file I/O operations.
	•	File Handling in C:
	•	The program uses standard C libraries (stdio.h, stdlib.h, string.h) for file input/output operations and string manipulations.
	•	Algorithm Used: Run-Length Encoding (RLE)
	•	RLE compresses data by reducing repeated characters to a character followed by its count. For example, "AAAABBB" becomes "A4B3".
	•	It is one of the simplest data compression techniques.
	•	Compiling Environment: GCC (GNU Compiler Collection)
	•	The program is compiled using GCC, which is a widely used C compiler. It can be run on most operating systems, including Linux, macOS, and Windows.
	•	Editor/IDE:
	•	Code Editors: Any text editor or code editor can be used to write and edit the C program, such as:
	•	Visual Studio Code (VS Code)
	•	Notepad

•	Operating System: Any OS that supports C programming (Windows, macOS, Linux).
	•	On Windows, you might use a terminal like Command Prompt or PowerShell to run the program, or an IDE that supports C programming.

3. How the Program Works
	•	Compression Process:
	1.	The program prompts the user to provide the input file (e.g., input.txt).
	2.	It reads the contents, identifies consecutive identical characters, and compresses them into the format character + count.
	3.	The result is stored in the output file (e.g., compressed.txt).
	•	Decompression Process:
	1.	The user provides the input compressed file (e.g., compressed.txt).
	2.	The program decodes the character + count pairs back to their original characters and writes the result to the output decompressed file (e.g., decompressed.txt).

4. Where This Task Can Be Applied

The Run-Length Encoding (RLE) algorithm has a wide range of applications, although it is most effective for data with long runs of repeated characters.
	•	Text File Compression:
	•	RLE is useful for compressing text files where repetition is common (e.g., certain formats of plain text, data with many spaces, or repeated characters).
	•	Image Compression:
	•	RLE is used in simple image formats (like TIFF, BMP) to compress bitmap images, especially those with large areas of the same color.
	•	Data Transmission:
	•	RLE can be useful for compressing data before transmitting it over a network to reduce bandwidth consumption.
	•	Medical Imaging:
	•	RLE is used in medical imaging (e.g., MRI or X-ray scans) to compress medical images for easier storage and transmission.
	•	Fax Machines:
	•	Fax machines use RLE compression for transmitting scanned documents as it is highly effective for black-and-white documents with large areas of the same color.
	•	Embedded Systems:
	•	In embedded systems where memory and processing power are limited, RLE can be used to compress text or other simple data for efficient storage.

5. Conclusion

This C program implements a simple data compression and decompression tool using Run-Length Encoding (RLE). It demonstrates the application of file handling and basic compression algorithms, making it a good starting point for understanding text compression techniques in C.

Tools Used:
	•	C Programming Language
	•	GCC Compiler
	•	Text Editors (Notepad.)
	•	Run-Length Encoding Algorithm

Where This Can Be Applied:
	•	Text compression
	•	Image file compression
	•	Medical and fax imaging
	•	Data transmission
