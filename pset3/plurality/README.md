<h1>Plurality election problem</h1>

This program runs a plurality election. In the plurality vote, every voter gets to vote for one candidate. At the end of the election, whichever candidate has the greatest number of votes is declared the winner of the election.

$ ./plurality Alice Bob Charlie
Number of voters: 4
Vote: Alice
Vote: Bob
Vote: Charlie
Vote: Alice
Alice

This code can handle:

-An election with any number of candidate (up to the MAX of 9)
-Voting for a candidate by name
-Invalid votes for candidates who are not on the ballot
-Printing the winner of the election if there is only one
-Printing the winner of the election if there are multiple winners