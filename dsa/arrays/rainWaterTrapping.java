package arrays;

public class rainWaterTrapping {
    public static void main(String[] args) {
        int buildingHeight[] = { 3, 1, 2, 4, 0, 1, 3, 2 };
        calculateTrappedWater(buildingHeight);
    }

    static void printArray(int arr[]) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + ", ");
        }
        System.out.print("\n");
    }

    static void calculateTrappedWater(int arr[]) {
        int[] leftAuxArray = new int[arr.length];
        int[] rightAuxArray = new int[arr.length];

        leftAuxArray[0] = arr[0];
        for (int i = 1; i < arr.length; i++) {
            leftAuxArray[i] = Math.max(arr[i], leftAuxArray[i - 1]);
        }

        rightAuxArray[arr.length - 1] = arr[arr.length - 1];
        for (int i = arr.length - 2; i >= 0; i--) {
            rightAuxArray[i] = Math.max(arr[i], rightAuxArray[i + 1]);
        }
        // printArray(arr);
        // printArray(leftAuxArray);
        // printArray(rightAuxArray);

        int waterBlocks = 0;

        for (int i = 1; i < arr.length - 1; i++) {
            if (leftAuxArray[i] != rightAuxArray[i]) {
                waterBlocks += Math.min(leftAuxArray[i], rightAuxArray[i]) - arr[i];
            } else {
                continue;
            }
        }
        System.out.println(waterBlocks); 
    }
}
