import java.util.Arrays;
import java.util.stream.IntStream;

public class RunningSum {
    public static void main(String[] args) {
        int[] nums = {1,2,3,4};
        System.out.println(Arrays.toString(runningSum(nums)));
    }

    public static int[] runningSum(int[] nums) {
        int[] result = new int[nums.length];
        result[0] = nums[0];
        int pos = 1;
        while(pos < result.length) {
            int sum = IntStream.range(0, pos+1).map(index -> nums[index]).sum();
            result[pos] = sum;
            pos++;
        }
        return result;
    }
}