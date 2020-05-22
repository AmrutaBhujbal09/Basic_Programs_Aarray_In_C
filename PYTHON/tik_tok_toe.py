#------------global varibale-------
#board

#1st
board=["-" ,"-" ,"-",
       "-","-","-",
       "-","-","-"]

#2nd


#game_still_going

#if game is still going

game_still_going=True

winner=None
current_player="x"

def display_board():
    print(board[0]+"  |  "+board[1]+"  |  " +board[2])
    print(board[3]+"  |  "+board[4]+"  |  "+board[5])
    print(board[6]+"  |  "+board[7]+"  |  "+board[8])


#3rd play_game()
def play_game():
    display_board()

    while game_still_going:
        handle_turn(current_player)

        check_if_game_over()

        flip_player()

    #game has end
        
        


    

#4th handle_turn()
        
def handle_turn(player):
    position=int(input("enter position from 1 to 9:"))
    position=position-1

    board[position]="x"

    display_board()

def check_if_game_over():
    check_if_win()
    check_if_tie()


def check_if_win():
    #check rows
    row_winner=check_rows()
    #check cols
    col_winner=check_cols()
    #check diagonals
    dig_winner=check_diagonals()
    return

def check_rows():
    return

def check_cols():
    return

def check_diagonals():
    return
    


def check_if_tie():
    return

def flip_player():
    return    

play_game()
