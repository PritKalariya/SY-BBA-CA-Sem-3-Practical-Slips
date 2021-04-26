#Write an R program to print the numbers from 1 to 100 and print "SY" for multiples of 3, print "BBA" for multiples of 5, and print "SYBBA" for multiples of both.


for(i in 1:100) {
  if(i %% 3 == 0 & i %% 5 == 0) {
    print("SYBBA")
  }

  else if(i %% 3 == 0) {
    print("SY")
  }

  else if (i %% 5 == 0) {
    print("BBA")
  }

  else {
    print(i)
  }
}