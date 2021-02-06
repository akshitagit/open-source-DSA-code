import java.util.Arrays;

/*
 Given a set of distinct integers, S, return all possible subsets.
 Note:
 Elements in a subset must be in non-descending order.
 The solution set must not contain duplicate subsets.
 For example,
 If S = [1,2,3], a solution is:
 [
  [3],
  [1],
  [2],
  [1,2,3],
  [1,3],
  [2,3],
  [1,2],
  []
 ]
 Solution: 1. Updated Iterative solution.
           2. Updated Recursive solution.
 */
public class Subsets {
    public ArrayList<List<Integer>> subsets(int[] S) {
        return subsets_2(S);
    }
    public ArrayList<List<Integer>> subsets_1(int[] S) {
        Arrays.sort(S);
        ArrayList<List<Integer>> res = new ArrayList<List<Integer>>();
        ArrayList<Integer> path = new ArrayList<Integer>();
        subsetsRe(S, 0, path, res);
        return res;
    }
    void subsetsRe(int[] S, int start, ArrayList<Integer> path, ArrayList<List<Integer>> res) {
        ArrayList<Integer> sub = new ArrayList<Integer>(path);
        res.add(sub);
        for (int i = start; i < S.length; ++i) {
            path.add(S[i]);
            subsetsRe(S, i + 1, path, res);
            path.remove(path.size() - 1);
        }
    }
    public ArrayList<List<Integer>> subsets_2(int[] S) {
        Arrays.sort(S);
        ArrayList<List<Integer>> res = new ArrayList<List<Integer>>();
        res.add(new ArrayList<Integer>());
        for (int i = 0; i < S.length; ++i) {
            int sz = res.size();
            for (int j = 0; j < sz; ++j) {
                ArrayList<Integer> path = new ArrayList<Integer>(((ArrayList<List<Integer>>) res).get(j));
                path.add(S[i]);
                res.add(path);
            }
        }
        return res;
    }
}