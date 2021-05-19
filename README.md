# C++ ostream/istream Example

A small C++ program to exercise istream and ostream `>>`, `<<` operator and overriding `*` operator to generate a **Array list** automatically.

### Structure

- Pill (name and price)
- Sheet (A array of Pill)

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

### Output

```
Penicillin,100
Penicillin,100
Penicillin,100
Penicillin,100
Penicillin,100
Penicillin,100
Penicillin,100
Penicillin,100
Penicillin,100
Penicillin,100
total = 1000
```
