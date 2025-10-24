## Exercise 1 — White-box vs Regression Tests

### White-box testing
White box testing is when the code and its functionality is known to the tester. These tests are typically written and performed by the developer who has access to the source code. White box testing can include Paths, Conditions, Loops and Edge cases.

Below is a simple function that assigns a grade based on a score. using float score instead of cin inside the function makes it easier to test.

   ```
   char getGrade(float score) {
      if (score >= 85 && score <= 100) {
      return 'A';
      }
      else if (score >= 70 && score <85 ) {
      return 'B';
      }
      else if (score >= 60 && score <70 ) {
      return 'C';
      }
      else if (score >= 50 && score < 60 ) {
      return 'D';
      }
      else if (score >= 0 && score < 50 ) {
      return 'F';
      }
      else {
      return '?';
      }
   }
   ```
There are 6 branches in this function, and a white box test needs to cover all of them. 
These values used for testing will make sure every branch of the function is tested.

   ```
   Branch 1 (A grade): score >= 85 && score <= 100 → Test with: 90
   Branch 2 (B grade): score >= 70 && score < 85 → Test with: 78
   Branch 3 (C grade): score >= 60 && score < 70 → Test with: 65
   Branch 4 (D grade): score >= 50 && score < 60 → Test with: 52
   Branch 5 (F grade): score >= 0 && score < 50 → Test with: 29
   Branch 6 (Invalid): else (anything outside 0-100) → Test with: 120
   ```


### Regression testing
Regression testing is when you re-run existing tests after making changes to the code. Sometimes
developers will think once a feature is working, it will continue to work but new features,
bug fixes, and code refactoring can break the previously working code. Regression testing is important
because it can stop old bugs from re-appearing and make your program more stable. Without regression
testing, fixing one bug could create several other ones.
