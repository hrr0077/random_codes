# Linux user & Dwvwloper Presents : Rock Paper and Scisors

import random
import time

rock = 1
paper = 2
scissors = 3


name = { rock : "Rock",paper : "Paper", scissors : "Scissors"}
rules = {rock: scissors, paper : rock, scissors : paper}

player_score = 0
computer_score = 0

def start():
    print "Let's Play a game of Rock Paper and Scissors."
    while game():
        pass
    score()

def game():
    player = move()
    computer = random.randint(1,3)
    result(player,computer)
    return play_again()

def move():
    while True:
        print
        player = raw_input("Rock = 1\nPapaer = 2\nScissors = 3\nMake a Move : ")
        try:
            player = int(player)
            if player in (1,2,3):
                return player
        except ValueError:
            pass
        print "Opps! I didn;t understand that. Please enter 1,2 or 3."
def result(player, computer):
    print "1..."
    time.sleep(1)
    print "2..."
    time.sleep(1)
    print "3!"
    time.sleep(0.5)
    print "Computer threw {0}!".format(name[computer])
    global player_score, computer_score
    if player == computer:
        print "Tie game."
    else:
        if rules[player] == computer:
            print "Your victory has been assured."
            player_score += 1
        else:
            print "The computer laughts as you realise you have been defeated."
            computer_score +=1
    
def play_again():
    answer = raw_input("Would you like to play again ? y/n :")
    if answer in ("Y", "y", "Yes"):
        return answer
    else:
        print "Thank You Very Much"

def score():
    global player_score, computer_score
    print "High Scores"
    print "Player: " , player_score
    print "Computer: ", computer_score

if __name__ == '__main__':
    start()
