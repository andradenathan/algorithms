import java.util.Arrays;
import java.util.stream.IntStream;

public class RunningSum {
    public static void main(String[] args) {
        int[] nums = {1,2,3,4};
        System.out.println(Arrays.toString(runningSum(nums)));
    }

    public static int[] runningSum(int[] nums) {
        int[] result = new int[nums.length];
        int pos = 0;
        while(pos < result.length) {
            int sum = Arrays.stream(nums, 0, pos + 1).sum();
            result[pos] = sum;
            pos++;
        }
        return result;
    }
}