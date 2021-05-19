# cpp-ostream-istream-example

A small C++ program to exercise istream and ostream >>, &lt;&lt; operator and overriding * operator to generate a array list automaticly.

### Structure
- Sheet (A array of Pill)
- Pill (name and price)

### Question

Write and complete following application without chaning `main()` function:

```cpp
int main() {
	Pill P("Penicillin", 100);
	Sheet S;
	S = P *10;
	cout << S << endl;
}
```
