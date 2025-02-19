# TP5 - Advanced String Manipulation
 

## Instructions
- Keep The Makefile to compile all exercices.
- Execution is done using `./exo1` (for exercice 1).
- All files should be grouped in the same directory.
- To compile all exercices, run:
  ```sh
  make
  ```
- To clean the compiled files, use:
  ```sh
  make clean
  ```

## Exercices

### Exercice 1: Palindrome Detection (std::string, std::reverse)
**Objective:**
- Verify if a string is a palindrome (reads the same forwards and backwards).
- Ignore case and spaces.

**Expected Function:**
```cpp
bool is_palindrome(const std::string& text);
```

**Input:**
```
Enter a word: "Engage le jeu que je le gagne"
```

**Expected Output:**
```
"Engage le jeu que je le gagne" is a palindrome.
```

---

### Exercice 2: Word Frequency in a Text (std::unordered_map, std::istringstream)
**Objective:**
- Read a text and count the frequency of words using `std::unordered_map`.

**Example:**
```cpp
std::unordered_map<std::string, int> freq;
```

**Expected Function:**
```cpp
void word_frequency(const std::string& text);
```

**Input:**
```
Enter a sentence: "C++ is powerful is fast is efficient"
```

**Expected Output:**
```
Word Frequency:
C++ -> 1
is -> 3
powerful -> 1
fast -> 1
efficient -> 1
```

---

### Exercice 3: Text Compression (Run-Length Encoding - RLE)
**Objective:**
- Implement Run-Length Encoding (RLE), a simple compression replacing repeated sequences with a count.

**Expected Function:**
```cpp
std::string encode_rle(const std::string& text);
```

**Input:**
```
Text: "aaabbccccddee"
```

**Expected Output:**
```
Encoded: "a3b2c4d2e2"
```

---

### Exercice 4: Extracting the Most Frequent Words (std::map)
**Objective:**
- Find the top 3 most frequent words in a text.
- Use this sorted vector:
```cpp
std::vector<std::pair<std::string, int>> sorted_words(freq.begin(), freq.end());
std::sort(sorted_words.begin(), sorted_words.end(),
[](const auto& a, const auto& b) { return a.second > b.second; });
```

**Expected Function:**
```cpp
void top_frequent_words(const std::string& text, int n);
```

**Input:**
```
Text: "C++ is fast, C++ is powerful, C++ is used"
```

**Expected Output:**
```
Top 3 most frequent words:
1. C++ -> 3
2. is -> 3
3. fast -> 1
```

---

### Exercice 5: Sorting Words by Length (std::multimap)
**Objective:**
- Sort the words in a sentence by increasing length using `std::multimap`.

**Example:**
```cpp
std::multimap<int, std::string> word_map;
```

**Expected Function:**
```cpp
void sort_by_length(const std::string& text);
```

**Input:**
```
Sentence: "The C++ language is fast and efficient"
```

**Expected Output:**
```
Sorted by length: The C++ is and fast efficient language
```

---

### Exercice 6: Advanced Search Using Regular Expressions (std::regex)
**Objective:**
- Check if a sentence contains an email address.
- Use `std::regex` for validation.

**Expected Function:**
```cpp
bool contains_email(const std::string& text);
```

**Input:**
```
Sentence: "My email is user@example.com"
```

**Expected Output:**
```
Email detected: user@example.com
```

