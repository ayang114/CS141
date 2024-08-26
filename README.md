Problem A
A. Maths of Glory
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Defeat your rivals with superior numbers!
Aim for the 6!

(60 points)

Maths of Glory is a 2v2. minigame in Super Mario Party, and you can view how the game is actually played here.

Each team has a castle that is made up of 𝑛
 jigsaw pieces, and a cannon that can fire cannonballs at the rival's castle. The goal is to destroy the castle of your rival.

In each round, each player will hit a slot with numbers ranging from 1 to 6. The numbers from the two players in the same team will be multiplied to be the points 𝑝
 earned in the current round. Then the cannon will fire at the rival's castle and destroy 𝑝
 jigsaw pieces of the castle. The first team to demolish the opposing team's castle entirely won the game. Note that if two teams both win at the same round, the game ends in a tie.


Given the numbers each player hits in each round, write a program to determine which team wins the game.

Input
The first line of the input contains two integers, 𝑛
 (0<𝑛≤106
), is the number of jigsaw pieces in each castle, and 𝑚
, which means there will be 𝑚
 rounds of game shown below. The next 𝑚
 (0<𝑚≤106
) lines each contain 4 numbers, which is the number hit by player 1, player 2, player 3 and player 4. Player 1 and 2 are in a team, and player 3 and 4 are in a team. The 4 numbers are guaranteed to be in the range of 1 to 6.

Output
Output the winning team and when they win. For example, if team 1 wins at round 5, output "Team 1 wins at round 5!".

If they both win at a certain round 𝑥
, output "It's a tie at round 𝑥
!".

If the game ends with neither team winning, output "Oh no!".

Examples

inputCopy

20 6

2 4 6 3

3 3 1 5

5 2 2 1

1 1 1 1

6 3 1 4

2 6 4 1

outputCopy



Team 2 wins at round 2!

inputCopy

30 6

2 4 6 3

3 3 1 5

5 2 2 1

1 1 1 1

6 3 1 4

2 6 4 1

outputCopy



It's a tie at round 5!

inputCopy

100 6

2 4 6 3

3 3 1 5

5 2 2 1

1 1 1 1

6 3 1 4

2 6 4 1

outputCopy

Oh no!


Note
For the first test case, after round 2, team one earns 17 points and team 2 earns 23 points. Since both castles only have 20 pieces each, team 2 will win.

For the second test case, there are 30 pieces in each castle and both teams reach 30 points or more at round 5 (46 vs 30). As a result, it's a tie.

For the third test case, after 6 rounds, team 1 earns 58 points and team 2 earns 32 points. Neither of them achieved 100 points to defeat the other team. As a result, you need to output "Oh no!".

Source of pictures and descriptions: https://www.mariowiki.com/Maths_of_Glory. You can also find more details about the game from this site.

There are 20 test cases, 3 points each.


Problem B
B. Sorting Hat
time limit per test2 seconds

memory limit per test256 megabytes

inputstandard input

outputstandard output


You might belong in Gryffindor,

Where dwell the brave at heart,

Their daring, nerve and chivalry

Set Gryffindors apart;

You might belong in Hufflepuff,

Where they are just and loyal,

Those patient Hufflepuffs are true

And unafraid of toil;

Or yet in wise old Ravenclaw,

If you've a ready mind,

Where those of wit and learning,

Will always find their kind;

Or perhaps in Slytherin

You'll make your real friends,

Those cunning folk use any means

To achieve their ends.

— Rowling, J.K.. Harry Potter and the Philosopher's Stone.
 

Each first-year student at Hogwarts will be sorted into one of the four houses: Gryffindor, Hufflepuff, Ravenclaw, and Slytherin. This is done by the Sorting Hat, which is a sentient magical hat at Hogwarts. The students will take turns to put the Sorting Hat on, and the Sorting Hat will shout out the name of one of the four houses.

(It's an unintended pun that the problem also is also related to sorting.)

Harry Potter in the Sorting Hat.
Input
The first line contains a number 𝑛
, which is the number of first-year students waiting to be sorted.

The next 𝑛
 lines each contain two strings. The first string is the student's name. The second string is the house name, which is always one of the four: Gryffindor, Hufflepuff, Ravenclaw, and Slytherin.

The names only contain letters.

There will be at least one new student in each house.

Output
There will be 𝑛+4
 lines in the output.

There are four parts to the output. Each part is leading with a line of the house name. Then all names of students who have been sorted into that House will be listed. The names should be sorted alphabetically.

The four Houses should also be shown in alphabetical order, which is Gryffindor, Hufflepuff, Ravenclaw, and Slytherin.

Examples

inputCopy

6

Harry Gryffindor

Hannah Hufflepuff

Luna Ravenclaw

Draco Slytherin

Hermione Gryffindor

Ron Gryffindor


outputCopy

Gryffindor

Harry

Hermione

Ron

Hufflepuff

Hannah

Ravenclaw

Luna

Slytherin

Draco



inputCopy

4

Albert Gryffindor

Alberto Hufflepuff

Al Ravenclaw

Alonzo Slytherin



outputCopy

Gryffindor

Albert

Hufflepuff

Alberto

Ravenclaw

Al

Slytherin

Alonzo



inputCopy

12

Albert Gryffindor

Catherine Gryffindor

Bob Gryffindor

Charlotte Hufflepuff

Beth Hufflepuff

Alberto Hufflepuff

Bella Ravenclaw

Al Ravenclaw

Charles Ravenclaw

Caleb Slytherin

Alonzo Slytherin

Barrett Slytherin



outputCopy

Gryffindor

Albert

Bob

Catherine

Hufflepuff

Alberto

Beth

Charlotte

Ravenclaw

Al

Bella

Charles

Slytherin

Alonzo

Barrett

Caleb



inputCopy

12

Bob Gryffindor

Charlotte Hufflepuff

Bella Ravenclaw

Al Ravenclaw

Caleb Slytherin

Catherine Gryffindor

Alonzo Slytherin

Beth Hufflepuff

Charles Ravenclaw

Alberto Hufflepuff

Barrett Slytherin

Albert Gryffindor



outputCopy

Gryffindor

Albert

Bob

Catherine

Hufflepuff

Alberto

Beth

Charlotte

Ravenclaw

Al

Bella

Charles

Slytherin

Alonzo

Barrett

Caleb



inputCopy

12

Albert Gryffindor

Ian Ravenclaw

Harry Ravenclaw

Jack Slytherin

Edith Hufflepuff

Fransico Hufflepuff

Catherine Gryffindor

Lorry Slytherin

Grechen Ravenclaw

Karen Slytherin

Bob Gryffindor

Denise Hufflepuff



outputCopy

Gryffindor

Albert

Bob

Catherine

Hufflepuff

Denise

Edith

Fransico

Ravenclaw

Grechen

Harry

Ian

Slytherin

Jack

Karen

Lorry

Note

For 50% of the test data, 𝑛≤100.


For 100% of the test data, 𝑛≤105.

Each student's name is no more than 10 letters. It is always starting with an uppercase letter, followed by lowercase letters.

Hint:

As I/O contains a lot of strings, you need to consider efficient ways for I/O.

For C++, you can use scanf and printf. Or use "std::ios::sync_with_stdio(false);".

For Java, consider using BufferReader instead of Scanner. (see a useful article here)
