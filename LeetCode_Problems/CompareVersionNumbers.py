# problem link
# https://leetcode.com/problems/compare-version-numbers/description/?envType=daily-question&envId=2024-05-03

class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        # Split the version strings and map them to integers
        vs1 = list(map(int, version1.split('.')))
        vs2 = list(map(int, version2.split('.')))

        # Compare version components one by one
        for v1, v2 in zip(vs1, vs2):
            if v1 > v2:
                return 1
            elif v1 < v2:
                return -1

        # If all components are equal, check if any remaining components are not zero
        for v in vs1[len(vs2):]:
            if v != 0:
                return 1
        for v in vs2[len(vs1):]:
            if v != 0:
                return -1

        # If all components are equal and remaining components are zero, return 0
        return 0
