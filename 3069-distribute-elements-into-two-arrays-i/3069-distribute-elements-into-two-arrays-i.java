class Solution {
    public int[] resultArray(int[] nums) {
        ArrayList<Integer> v1 = new ArrayList<>();
        ArrayList<Integer> v2 = new ArrayList<>();

        int i1 = 0, i2 = 0;

        v1.add(nums[0]);
        v2.add(nums[1]);

        for (int i = 2; i < nums.length; i++) {
            if (v1.get(i1) > v2.get(i2)) {
                v1.add(nums[i]);
                i1++;
            } else {
                v2.add(nums[i]);
                i2++;
            }
        }

        v1.addAll(v2);

        int[] result = new int[v1.size()];

        for (int i = 0; i < v1.size(); i++) {
            result[i] = v1.get(i);
        }

        return result;
    }
}