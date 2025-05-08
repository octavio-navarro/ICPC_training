g++ -o E.exe E.cpp -std=c++17
echo "\nTest 1\n"
cat E1.txt | ./E.exe
echo "\nTest 2\n"
cat E2.txt | ./E.exe