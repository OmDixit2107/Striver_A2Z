package GREEDY;

class JUMP_GAME_1 {
    public boolean canJump(int[] nums) {
        int maxJump = nums[0];
        boolean canReachEnd = false;

        if (nums.length == 1) {
            return true;
        }

        for (int i = 1; i < nums.length; i++) {
            if (i <= maxJump) {
                maxJump = Math.max(maxJump, nums[i] + i);
                if (maxJump >= nums.length - 1) {
                    canReachEnd = true;
                    break;
                }
            }
        }

        return canReachEnd;
    }
}
