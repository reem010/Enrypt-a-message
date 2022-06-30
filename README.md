# Enrypt-a-message
Write a program to encrypt/decrypt a text message by replacing every letter with another letter.
You will encrypt the text using a key. Our key will be a string of length 26 which maps every alphabet character in the plain text (a-z A-Z) to the corresponding character in the key.
For example, if the key is the string ZXVCBNMLKJHGFDSAWQERTYUIOP, this means that letter ‘a’ maps to the letter ‘z’, letter ‘B’ maps to ‘X’, letter ‘c’ maps to ‘v’, and so on. Any characters other than the alphabets stay the same.
A text like “Good Morning!” will be encrypted as “Mssc Fsqdkdm!”.
You are required to write 2 functions, one to encrypt (from plain text to encoded) which takes the plain text as input and the key and returns the encoded text, and another to decrypt, which takes the encoded text and the key and returns the plain text. The decrypted text should have the same caps as the original message (same capitalized and lowercase letters).
Your program should check if the key is valid, which means it has exactly a length of 26, it has all alphabetic characters only, and each character occurs exactly once (whether lower or uppercase).
Your program will display a menu where the user chooses to:
1- Insert a new key
2- Encrypt a message
3- Decrypt a message
4- Exit
