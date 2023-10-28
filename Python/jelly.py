import chess
board=chess.Board()
print(board)
# legal moves
board.legal_moves
# moving players
board.push_san("e4")
# It means moving the particular piece at
# e place to 4th position

# Display chess board
print(board)
# Verifying check mate
board.is_checkmate()
# Verifying stalemate
board.is_stalemate()
# code
board.is_check()
# code
board.is_fivefold_repetition()
board.is_seventyfive_moves()