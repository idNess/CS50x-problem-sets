<h1>Mario problem</h1>

Toward the beginning of World 1-1 in Nintendo’s Super Mario Brothers, Mario must hop over adjacent pyramids of blocks. This program recreates those pyramids in C, albeit in text, using hashes (#) for bricks.

Here’s how the program works if the user inputs 4 when prompted:
$ ./mario
Height: 4
   #  #
  ##  ##
 ###  ###
####  ####

Here’s how the program works if the user inputs 8 when prompted:
$ ./mario
Height: 8
       #  #
      ##  ##
     ###  ###
    ####  ####
   #####  #####
  ######  ######
 #######  #######
########  ########

If the user doesn’t input a positive integer between 1 and 8, inclusive, when prompted, the program re-prompts the user until they cooperate.
