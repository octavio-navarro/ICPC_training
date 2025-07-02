g++ -o C.exe C.cpp -std=c++17
echo "\nTest 1\n"
cat C1.txt | ./C.exe
echo "\nTest 2\n"
cat C2.txt | ./C.exe