g++ -o D.exe D.cpp -std=c++17
echo "\nTest 1\n"
cat D1.txt | ./D.exe
echo "\nTest 2\n"
cat D2.txt | ./D.exe