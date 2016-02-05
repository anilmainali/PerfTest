## LoadRunner

### Components of LoadRunner

0. VuGen
0. Controller
0. Load Generator
0. Analysis

## Vugen Scripting
0. Recording best practice.
0. Enhancement of script
0. Steps to create a Correlation Library

## Controller
0. Controller summary
0. How to Pull the script to controller?
0. How to connect the load generators?
0. How to design a scenario?

## Resources for Correlation
http://blogs.hexaware.com/are-you-being-served/performing-manual-correlation-with-dynamic-boundaries-in-lr/

What is Correlation: It is a Process to handle dynamic values in our Script. Here the dynamic value is replaced by a variable which we assign or capture from the server response.

Ways to do correlation: There are two ways to do this Correlation.

They are as follows:

Auto-Correlation: The Correlation Engine in LR Package captures the value and replaces it with another value
Manual Correlation: Understanding of the Script and its response is highly needed to do this. It is bit complex to do Manual Correlation sometimes but this is always the preferred method to handle Dynamic Values in our Script
Usually the Manual Correlation is done by capturing the dynamic value which is present in between the Static left and right Boundaries.

Objective: The intention of this article is that to give a method which will be useful when we wanted to capture and handle Dynamic Values when even the Left and right Boundaries are also dynamic.

The Solution can be much simple, Instead of determining the boundaries to the String we can actually use Text flags.

Before Getting into the Topic we should know about the Text Flags:

Text flags are the Flag used just after the text with Forward Slash.

Some of the commonly known and used Text flags are:

/IC to ignore the case
/BIN to specify binary data
/DIG to interpret the pound sign (#) as a wildcard for a single digit
/ALNUM<case> to interpret the caret sign (^) as a wildcard for a single US–ASCII alphanumeric character
Case 1: Digit Value

Suppose the response data is the string literal, but the issue is that the left boundary is changing every time; you get the left boundary as axb, where x ranges between 0 and 9, as follows:
a0b=Boundaryrb
a1b=Boundaryrb
a2b=Boundaryrb
——–
——–
a9b=Boundaryrb

We can capture the desired string by putting the following correlation function in place, using the /DIG text flag in combination with Left Boundary:

web_reg_save_param (“Corr_Param”, “LB/DIG=a#b\=”, “RB=rb”, LAST);

The corresponding place, which you expect to be dynamically filled in with a digit, should be replaced by a pound sign (#).

If there are multiple digits, we can use ‘##’.

Case 2: Boundary is String and case sensitive

web_reg_save_param (“Corr_Param”, “LB/IC/DIG=a#b\=”, “RB/IC=rb”, LAST);

Case 3: A Place to be filled either by a Digit or a letter

web_reg_save_param (“Corr_Param”, “LB/ALNUM=a^b\=”, “RB/IC=rb”, LAST);


