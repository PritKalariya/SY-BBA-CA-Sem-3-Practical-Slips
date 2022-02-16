#Write an R program to extract first 10 English letter in lower case and last 10 letters in upper case and extract letters between 22nd to 24th letters in upper case.
print("First 10 letters in lower case:")
first10 = head(letters, 10)
print(first10)

print("Last 10 letters in upper case:")
last10 = tail(LETTERS, 10)
print(last10)

print("Letters between 22nd to 24th letters in upper case:")
inBetween = tail(LETTERS[22:24])
print(inBetween)