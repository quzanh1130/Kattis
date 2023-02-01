    
import java.util.*;

public class eightqueens {
    public static void main(String[] args) {
        int[][] board = new int[8][8];
        List<int[]> queens = new ArrayList<>();
        Scanner sc = new Scanner(System.in);
        String q;

        for (int r = 0; r < 8; r++) {
            q = sc.nextLine();
            for (int c = 0; c < 8; c++) {
                if (q.charAt(c) == '*') {
                    board[r][c] = 1;
                    int[] queen = {r, c};
                    queens.add(queen);
                }
            }
        }

        if (queens.size() != 8) {
            System.out.println("invalid");
            return;
        }

        for (int[] queen : queens) {
            int r = queen[0], c = queen[1];

            // row
            for (int i = 0; i < 8; i++) {
                if (board[r][i] == 1 && i != c) {
                    System.out.println("invalid");
                    return;
                }
            }

            // column
            for (int i = 0; i < 8; i++) {
                if (board[i][c] == 1 && i != r) {
                    System.out.println("invalid");
                    return;
                }
            }

            // left diagonal
            int x = c, y = r;
            while (x - 1 >= 0 && y - 1 >= 0) {
                x -= 1;
                y -= 1;
                if (board[y][x] == 1 && y != r && x != c) {
                    System.out.println("invalid");
                    return;
                }
            }
            x = c;
            y = r;
            while (x + 1 < 8 && y + 1 < 8) {
                x += 1;
                y += 1;
                if (board[y][x] == 1 && y != r && x != c) {
                    System.out.println("invalid");
                    return;
                }
            }

            // right diagonal
            x = c;
            y = r;
            while (x + 1 < 8 && y - 1 >= 0) {
                x += 1;
                y -= 1;
                if (board[y][x] == 1 && y != r && x != c) {
                    System.out.println("invalid");
                    return;
                }
            }
            while (x - 1 >= 0 && y + 1 < 8) {
                x -= 1;
                y += 1;
                if (board[y][x] == 1 && y != r && x != c) {
                    System.out.println("invalid");
                    return;
                }
            }
        }
        System.out.println("valid");
    }
}
