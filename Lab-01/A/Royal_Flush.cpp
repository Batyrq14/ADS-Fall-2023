/*

Time limit:	1 s
Real time limit:	5 s
Memory limit:	256M
Problem A: 111521. Royal Flush
You are in a casino, the croupier offers you to play. You started playing and there is given a sorted deck of cards numbered 1 to N. 
He shows you a trick:

We pick up 1 card and put it on the back of the deck.

Now, we pick up another card, it turns out to be card numbered 1, we put it outside the deck.

Now we pick up 2 cards and put it on the back of the deck one by one.

Now, we pick up another card and it turns out to be card numbered 2, we put it outside of the deck.

...

We perform this steps till the last card.

Note, that at some step i the number of cards in the deck can be less than i, 
in this case some cards can processed several times, see notes. 
You are questioned if you can repeat that trick. 
Output initial arrangement of the deck if possible, or say if it is impossible.
*/