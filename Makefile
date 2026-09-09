format:
	find . -name "*.java" | xargs astyle --style=java --indent=spaces=2
	find . -name "*.cpp" -o -name "*.c" | xargs clang-format -i

clean:
	find . -name "*.out" -type f -delete
	find . -name "*.out" -type f -delete

