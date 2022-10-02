public class Tiling{

    public static int tilingWays(int n, int m) {
        if (n == m) {
            return 2;
        } else if (n < m) {
            return 1;
        } else {
            return tilingWays(n-m, m) + tilingWays(n-1, m);
        }
    }
    public static void main(String[] args) {
        System.out.println(tilingWays(4,2));
    }
}