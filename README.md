# 24-point Game Calculator
A 24-point game calculator written in C++.
## Game Description
(p.s. In China it is called "二十四点" but I don't know how to say it in English.
If you know the answer, please submit an issue and I will change it. Thanks!)
1. Randomly pick 4 numbers.
2. Try to add some operators between them to make 24. (You can change the order too.)
In the most popular version, the numbers are replaced as cards (from 1 to 9 to J,Q and K).
So I will use this too.
## About Program
Up till now it has only one file and 93 lines in total. It uses enumeration and doesn't take much time.
## Bugs known
1. It can only calculate sequenced expressions.<br>
&nbsp;&nbsp;_Example_: for numbers 2,2,3,3 it can't give an answer. But (2+2)x(3+3) is 24.
