PROBLEM=J
g++ -o ${PROBLEM}.exe ${PROBLEM}.cpp -std=c++17
echo "Tests"
for file in ${PROBLEM}*.txt; do
  echo "Test $file"
  cat "$file" | ./${PROBLEM}.exe
done