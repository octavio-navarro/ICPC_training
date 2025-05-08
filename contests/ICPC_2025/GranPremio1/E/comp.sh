g++ -o A.exe A.cpp -std=c++17
echo "\nTest 1\n"
cat A1.txt | ./A.exe
echo "\nTest 2\n"
cat A2.txt | ./A.exe