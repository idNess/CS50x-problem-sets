<h1>Readability problem</h1>

A number of “readability tests” have been developed over the years, to give a formulaic process for computing the reading level of a text.
One such readability test is the Coleman-Liau index. The Coleman-Liau index of a text is designed to output what (U.S.) grade level is needed to understand the text. The formula is:

index = 0.0588 * L - 0.296 * S - 15.8

Here, L is the average number of letters per 100 words in the text, and S is the average number of sentences per 100 words in the text.

The program I implemented, called readability, takes a text and determines its reading level. For example, if user types in a line from Dr. Seuss:

$ ./readability<br>
Text: Congratulations! Today is your day. You're off to Great Places! You're off and away!
<br>Grade 3
