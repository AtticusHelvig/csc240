# Test 1 - Linux and Programming Languages

## Practice Questions
> [!NOTE]
> These questions are taken directly from older tests.

### Question 1 | 10 pts
Linus Torvalds created:
+ `UNIX`
+ `Linux`
+ `Debian`
+ `Ubuntu`

### Question 2 | 10 pts
What is the name of the C compiler on Linux? That is, what command do we invoke when compiling?

### Question 3 | 20 pts
Match the symbols with the directories

+ `/`
+ `.`
+ `~`
+ `..`

`home`

`root`

`parent`

`current`

### Question 4 | 20 pts
Match the command with the function

+ `mv`
+ `cp`
+ `cat`
+ `ls`

`Print a file`

`Rename a file`

`Copy a file`

`List the files in a directory`

### Question 5 | 5 pts
Review the following detailed listing:
```
ls -l
-rwxr-xr-x 1 eckert eckert 6 Jan 1 2020 4:50 grocery_list
```
This tells me that I can read, write or execute my program **grocery_list**, but can others in my group execute it also?

+ `true`
+ `false`

### Question 6 | 10 pts
Which of the following Linux commands/conventions does not ***does not*** provide additional help on using the system?

+ `Using the --help option`
+ `Using the apropos command`
+ `Using the man command`
+ `Using the --error option`

### Question 7 | 10 pts
What do we mean when we say a programming language strives to be **effiecient**?

### Question 8 | 10 pts
What programming paradigm does C belong to?

+ `Functional`
+ `Logic`
+ `Imperative`
+ `Object-Oriented`

### Question 9 | 10 pts
Which of the following ***is not*** one of the four pillars of the Object-Oriented paradigm?

+ `Inheritence`
+ `Abstraction`
+ `Encapsulation`
+ `Compilation`
+ `Polymorphism`

### Question 10  | 15 pts
What are the three forces that influenced the evolution of languages?
(Choose three)

+ `Companies strive to create something new for the market`
+ `Evolution of more powerful hardware`
+ `Von Neuman and Turing laid out a roadmap of languages and we are making progress`
+ `Need to create larger programs`
+ `With AI, computers are getting smarter`
+ `Development of compiler theory`

### Question 11 | 15 pts
In early computers, the data was separate from the program instructions. In fact, the instructions were often physical configurations of the machine. Von Neumann proposed a new model combining these two aspects. What do we call this Architecture?

### Question 12 | 10 pts
A program accesses an illegal array index, for example accessing x[20] when x is an array of 10 ints. What type of error is this?

+ `Contextual Error`
+ `Lexical Error`
+ `Syntactic Error`
+ `Semantic Error`

### Question 13 | 10 pts
A new programmer calls a variable: `first name` 

However, spaces are not allowed in a variable name. The compiler reports what kind of error?

+ `Contextual`
+ `Lexical`
+ `Semantic`
+ `Syntax`

### Question 14 | 10 pts
Which of the following checks are generally ***not*** done by the compiler?

+ `Lexical`
+ `Syntactic`
+ `Contextual`
+ `Semantic`

### Question 15 | 40 pts
As you did with flex, write regular expressions to recognize each of the following:

1. The keyword: finally
2. An hexadecimal integer constant made up of 1 or more hexadecimal digits (upper or lowercase)
3. The punctuation: &&
4. A line starting with 1 or more digits

You do not need any actions or even a legal flex file, just four regular expressions.

Note: Hexadecimal digits include the digits 0 through 9 as well as the letters a through f.

### Question 16 | 5 pts
All modern languages ignore white space.

+ `true`
+ `false`

### Question 17 | 10 pts
Use the following BNF grammar to answer the next three questions:
```bnf
<statements>  ::=  <assign> ; | <assign> ; <statements>
<assign>      ::=  <var> = <expr>
<var>         ::=  <char> | <char> <var>
<char>        ::=  a | b | c | d
<expr>        ::=  <var> | <var> <op> <var>
<op>          ::=  + | - | * | / 
```

Which of the following is a terminal symbol?
+ `<char><variable>`
+ `<statments>`
+ `<char>`
+ `+`

### Question 18 | 10 pts
What is the purpose of this grammar? That is, what is it designed to recognize?

+ `var`
+ `all of these`
+ `statements`
+ `assign`

### Question 19 | 10 pts
Which one of the following strings would be accepted by this grammar (i.e. is syntactically correct)?

+ `d = a + cba;`
+ `d = a + cba`
+ `a + cba = d;`
+ `d = a + cba d = a + cba`

### Question 20 | 10 pts
In a Java program, which line of code will cause an error?

+ `int x = 200.0 + 5;`
+ `float x = 200.0 +5;`
+ `int x = 200 + 5;`
+ `double x = 200.0 + 5;`

### Question 21 | 10 pts
What level of analysis would have detected the error in the previous question?

+ `Lexical`
+ `Syntactic`
+ `Contextual`
+ `Semantic`

### Question 22 | 10 pts
What is one of the main reasons for using a two-step translation for some high-level programming languages? 

+ `One compiler for all machines`
+ `More accurate debugging information`
+ `Support stronger typing system`
+ `Better support for macros`

### Question 23 | 10 pts
Give this macro definition:
`#define diff(a, b) (a - b)`
What is the value of diff(10, 3-2)?

+ `7`
+ `15`
+ `5`
+ `9`

### Question 24 | 20 pts
What two things define a data type?




## Practice Question Answers & Explanations

### Question 1
Linus Torvalds created:
+ `UNIX`
+ `Linux`
+ `Debian`
+ `Ubuntu`

**Answer:** `Linux`

**Explanation:** Linux is an open-source operating system kernel created by Linus Torvalds in 1991. It is based on UNIX principles and has since become the basis for many operating systems, including popular distributions like Ubuntu and Debian. However remember, Linus Torvalds did not create Ubuntu nor Debian, despite them being forks of his original work.

> [!TIP]
> To remember that Linus made Linux, just remember he named it after himself.

### Question 2
What is the name of the C compiler on Linux? That is, what command do we invoke when compiling?

**Answer:** `gcc`

**Explanation:** GCC (GNU Compiler Collection) is a free and open-source compiler system developed by the GNU Project. It supports various programming languages, including C, C++, and others. On Linux systems, GCC is the default compiler for C programs. An example command for compiling a C program named "example.c" to an executable called "example" might look like `gcc example.c -o example`.

### Question 3
Match the symbols with the directories

+ `/`
+ `.`
+ `~`
+ `..`

`home`

`root`

`parent`

`current`

**Answer:**

+ `/`: Root directory
+ `.`: Current directory
+ `~`: Home directory
+ `..`: Parent directory

**Explanation:**

These ones you just have to memorize.

### Question 4
Match the command with the function

+ `mv`
+ `cp`
+ `cat`
+ `ls`

`Print a file`

`Rename a file`

`Copy a file`

`List the files in a directory`

**Answer:**

+ `mv`: Rename a file
+ `cp`: Copy a file
+ `cat`: Print a file
+ `ls`: List the files in a directory

**Explanation:**

1. `mv` (Move): This command is used to move files or directories from one location to another. When used with a different name, it effectively renames the file.

2. `cp` (Copy): This command is used to copy files or directories from one location to another. It creates a duplicate copy of the file with a new name or in a new location.

3. `cat` (Concatenate): This command is used to display the contents of a file on the standard output (usually the terminal). It can also be used to concatenate multiple files and display them sequentially.

4. `ls` (List): This command is used to list the files and directories in the current directory or a specified directory. It provides information such as file names, sizes, and permissions.

### Question 5
Review the following detailed listing:
```
ls -l
-rwxr-xr-x 1 eckert eckert 6 Jan 1 2020 4:50 grocery_list
```
This tells me that I can read, write or execute my program **grocery_list**, but can others in my group execute it also?

+ `true`
+ `false`

**Answer:** `true`

**Explanation:**

Based on the output of the `ls -l` command:

```
-rwxr-xr-x 1 eckert eckert 6 Jan 1 2020 4:50 grocery_list
```

The permissions are represented by `-rwxr-xr-x`. Let's break it down:

- The first character `-` indicates that it's a regular file.
- The next three characters `rwx` represent the permissions for the file owner (`eckert` in this case), indicating that the owner (`eckert`) has read (`r`), write (`w`), and execute (`x`) permissions on the file.
- The next three characters `r-x` represent the permissions for the group that the file belongs to (`eckert` group), indicating that the group members have read (`r`) and execute (`x`) permissions but not write (`-`) permission on the file.
- The last three characters `r-x` represent the permissions for others (users not in the owner's group), indicating that they have read (`r`) and execute (`x`) permissions but not write (`-`) permission on the file.

So, according to the permissions displayed, members of your group (`eckert` group) can execute the `grocery_list` program, but they cannot write to it.

### Question 6
Which of the following Linux commands/conventions does not ***does not*** provide additional help on using the system?

+ `Using the --help option`
+ `Using the apropos command`
+ `Using the man command`
+ `Using the --error option`

**Answer:** `Using the --error option`

**Explanation:**

1. **Using the --help option**: Many Linux commands support the `--help` option, which provides a brief overview of the command's usage, options, and syntax. It is a common convention in Linux to include this option for commands to offer quick help to users.

2. **Using the apropos command**: The `apropos` command is used to search the manual page names and descriptions for keywords. It helps users find relevant commands or topics based on the provided keyword. It serves as a useful tool for discovering commands related to a specific topic.
**Answer:** `Using the --error option`

3. **Using the man command**: The `man` command is used to display the manual pages for other commands. It provides detailed documentation, including usage instructions, options, and examples, for a specific command. By typing `man` followed by the name of the command, users can access comprehensive help and documentation directly from the terminal.
**Explanation:**

4. **Using the --error option**: This option is not a standard convention in Linux for accessing help or documentation. In fact, using `--error` as an option would likely result in an error because it's not recognized by most commands. It's not a conventional method for accessing additional help on using the system.

### Question 7
What do we mean when we say a programming language strives to be **effiecient**?

**Answer:** `It should be reliable, easy to read, easy to write, reusable, and use computer resources effectively.`

> [!NOTE]
> This question has no single answer, however it may be helpful to reference slide 6 of lecture 2a, assuming it remains unchanged from the time of writing.

### Question 8
What programming paradigm does C belong to?

+ `Functional`
+ `Logic`
+ `Imperative`
+ `Object-Oriented`

**Answer:** `Imperative`

**Explanation:**

1. **Functional Programming Paradigm**: Functional programming is characterized by treating computation as the evaluation of mathematical functions and avoiding changing state and mutable data. Languages like Haskell, Lisp, and Scala are examples of functional programming languages. C does not primarily adhere to this paradigm, although it does support some functional programming constructs to a limited extent.

2. **Logic Programming Paradigm**: Logic programming is based on formal logic and entails defining relations and rules to solve problems. Languages like Prolog are prominent examples of logic programming languages. C is not a logic programming language; it does not provide native support for logic programming constructs.

3. **Imperative Programming Paradigm**: Imperative programming focuses on describing a sequence of statements that change the program's state. It emphasizes changing the program's state through assignment statements and control flow structures like loops and conditionals. C is an imperative programming language, as it follows this paradigm closely. Programs in C consist of a series of imperative statements that direct the computer's actions step by step.

4. **Object-Oriented Programming Paradigm**: Object-oriented programming (OOP) is centered around objects, which are instances of classes that encapsulate data and behavior. OOP languages support features like inheritance, polymorphism, and encapsulation. Examples of object-oriented languages include Java, C++, and Python. While C can implement some object-oriented concepts manually (e.g., using structures and functions), it is not a pure object-oriented language, as it lacks native support for features like classes and inheritance. Therefore, C is not primarily an object-oriented programming language.

### Question 9
Which of the following ***is not*** one of the four pillars of the Object-Oriented paradigm?

+ `Inheritence`
+ `Abstraction`
+ `Encapsulation`
+ `Compilation`
+ `Polymorphism`

**Answer:** `Compilation`

**Explanation:**

1. **Inheritance**: Inheritance is the mechanism by which a class (subclass or derived class) can inherit properties and behavior from another class (superclass or base class). It promotes code reusability and establishes a hierarchical relationship between classes.

2. **Abstraction**: Abstraction is the process of hiding complex implementation details and exposing only relevant functionalities to the user. It allows programmers to focus on what an object does rather than how it does it, facilitating easier problem-solving and code maintenance.

3. **Encapsulation**: Encapsulation is the bundling of data (attributes) and methods (behaviors) that operate on the data into a single unit called a class. It ensures data integrity by restricting access to the internal state of an object and promoting data hiding.

4. **Polymorphism**: Polymorphism allows objects to be treated as instances of their parent class, enabling them to take on different forms and exhibit different behaviors based on the context. It includes concepts like method overriding and method overloading, which allow methods to behave differently in different contexts.

5. **Compilation**: Compilation is a process of translating source code written in a high-level programming language into machine-readable instructions. While compilation is an essential aspect of software development, it is not considered one of the four pillars of the Object-Oriented paradigm. Instead, the four pillars focus on principles and concepts related to object-oriented programming, such as inheritance, abstraction, encapsulation, and polymorphism.

### Question 10
What are the three forces that influenced the evolution of languages?
(Choose three)

+ `Companies strive to create something new for the market`
+ `Evolution of more powerful hardware`
+ `Von Neuman and Turing laid out a roadmap of languages and we are making progress`
+ `Need to create larger programs`
+ `With AI, computers are getting smarter`
+ `Development of compiler theory`

**Answers:**
+ `Evolution of more powerful hardware`
+ `Need to create larger programs`
+ `Development of compiler theory`

**Explanation:**

- **Companies strive to create something new for the market**: While innovation in the industry can drive the adoption of new technologies and programming paradigms, it is not a fundamental force that directly influences the evolution of programming languages. Market demands and industry trends may shape the direction of language development, but they are secondary to the underlying technological advancements and theoretical foundations that drive language evolution.

- **With AI, computers are getting smarter**: While advances in artificial intelligence can impact various aspects of computing, including language processing and natural language understanding, they do not directly influence the evolution of programming languages. AI technologies may leverage existing programming languages and frameworks, but they are not a primary force driving language evolution.

- **Von Neuman and Turing laid out a roadmap of languages and we are making progress**: While the foundational work of Von Neumann and Turing has had a profound impact on computing and programming, it is considered part of the historical context rather than an ongoing force influencing the evolution of languages. Their contributions provided theoretical frameworks and conceptual models that continue to inform language design and implementation, but they do not represent a dynamic force actively driving language evolution in the present day.

### Question 11
In early computers, the data was separate from the program instructions. In fact, the instructions were often physical configurations of the machine. Von Neumann proposed a new model combining these two aspects. What do we call this Architecture?

**Answer:** `Von Neumann Architecture`
> [!NOTE]
> Also acceptable would be stored program concept, or even Eckert-Mauchly Architecture (although this answer is not correct outside the context of this class).

### Question 12
A program accesses an illegal array index, for example accessing x[20] when x is an array of 10 ints. What type of error is this?

+ `Contextual Error`
+ `Lexical Error`
+ `Syntactic Error`
+ `Semantic Error`

**Answer:** `Semantic Error`

> [!WARNING]
> This question arguably has a second answer: `Contextual Error` and while Professor Eckert accepted it once, he may not in the future and he is likely to change this question. In short, make sure you truly understand what each type of error means.

**Explanation:**

1. **Contextual Error**: Contextual errors typically refer to mistakes that occur due to a misunderstanding of the context or environment in which a program is executed. These errors can involve incorrect usage of variables, functions, or other elements within the program, but they are not specifically related to accessing illegal array indices.

2. **Lexical Error**: Lexical errors occur when the compiler encounters invalid characters or tokens in the source code, violating the language's syntax rules. These errors include misspelled keywords, unrecognized symbols, or incorrect punctuation. However, accessing an illegal array index does not fall under the category of lexical errors.

3. **Syntactic Error**: Syntactic errors occur when the structure of the program violates the rules of the programming language's syntax. These errors involve incorrect usage of language constructs, such as missing semicolons, mismatched parentheses, or incorrect indentation. While accessing an illegal array index may result in a runtime error due to a violation of language semantics, it is not considered a syntactic error.

4. **Semantic Error**: Semantic errors occur when the code compiles and executes without generating any syntax or runtime errors, but it does not produce the expected results due to logical or semantic flaws in the program. Accessing an illegal array index falls under this category because it does not violate the language's syntax rules, but it results in unintended behavior or runtime exceptions during program execution due to accessing memory locations beyond the bounds of the array.

### Question 13
A new programmer calls a variable: `first name` 

However, spaces are not allowed in a variable name. The compiler reports what kind of error?

+ `Contextual`
+ `Lexical`
+ `Semantic`
+ `Syntax`

**Answer:** `Lexical`

> [!WARNING]
> This answer is highly debatable, so take it with a grain of salt. Professor Eckert also accepted `Syntax` after some convincing. Once again, make no assumptions.

**Explanation:**

A **Lexical Error** occurs when the compiler encounters invalid characters or tokens in the source code, violating the language's lexical rules. Lexical errors involve issues such as misspelled keywords, unrecognized symbols, or incorrect punctuation.

### Question 14
Which of the following checks are generally ***not*** done by the compiler?

+ `Lexical`
+ `Syntactic`
+ `Contextual`
+ `Semantic`

**Answer:** `Semantic`

**Explanation:**

While semantic analysis is an essential aspect of compilation, compilers have limitations in catching errors related to a programmer's logic or intent. Semantic errors, such as logical errors or incorrect algorithmic implementations, are often challenging for compilers to detect. Some semantic checks may be performed by compilers, but they are generally limited in scope. More complex semantic checks may require human intervention, code reviews, or the use of additional tools beyond the compiler.

### Question 15
As you did with flex, write regular expressions to recognize each of the following:

1. The keyword: finally
2. An hexadecimal integer constant made up of 1 or more hexadecimal digits (upper or lowercase)
3. The punctuation: &&
4. A line starting with 1 or more digits

You do not need any actions or even a legal flex file, just four regular expressions.

Note: Hexadecimal digits include the digits 0 through 9 as well as the letters a through f.

**Answers:**
Here are the regular expressions to recognize each of the given patterns:

1. `finally`

2. `[0-9a-fA-F]+`

3. `&&`

4. `^[0-9]+.*`

**Explanation:**

1. **The keyword: finally**: This regular expression simply matches the exact string "finally". It will only match if the input exactly contains the word "finally".

2. **An hexadecimal integer constant made up of 1 or more hexadecimal digits (upper or lowercase)**: This regular expression `[0-9a-fA-F]+` matches one or more hexadecimal digits (0-9, a-f, A-F). The `+` quantifier ensures that at least one hexadecimal digit is present.

3. **The punctuation: &&**: This regular expression simply matches the exact string "&&". It will only match if the input exactly contains "&&".

4. **A line starting with 1 or more digits**: This regular expression `^[0-9]+.*` matches lines that start with one or more digits (`[0-9]+`). The `^` anchor ensures that the match starts at the beginning of the line. The `.*` part matches any characters after the digits, allowing for arbitrary content following the digits.

> [!NOTE]
> Professor Eckert seems to give some leeway on this problem; you may be able to squeak by with mostly accurate answers, but why push your luck?

### Question 16
All modern languages ignore white space.

+ `true`
+ `false`

**Answer:** `false`

**Explanation:**

1. **Python**: Python is a prominent example of a modern programming language that heavily relies on whitespace to define block structure. In Python, indentation is used to denote the beginning and end of blocks of code, such as loops, conditional statements, and function definitions. Consistent indentation is not only encouraged but required for correct program syntax. For example:

    ```python
    if x > 0:
        print("x is positive")
    else:
        print("x is non-positive")
    ```

    In the above code, the indentation (spaces or tabs) before the `print` statements defines the block structure of the `if`-`else` statement.

2. **Significant White Space in Markup and Templating Languages**: While not strictly programming languages in the traditional sense, markup and templating languages like HTML, XML, YAML, and Jinja2 also rely heavily on whitespace for structure and readability. In HTML and XML, for instance, whitespace within tags and elements can affect rendering and parsing. Similarly, in YAML and Jinja2 templates, indentation is crucial for defining data structures and control flow.

In these languages, whitespace is not just a matter of style or convention but a fundamental aspect of the language syntax. Incorrect or inconsistent whitespace usage can lead to syntax errors and affect the behavior of the program. Therefore, in the context of these languages, the significance of whitespace is undeniable and integral to the language design.

### Question 17
Use the following BNF grammar to answer the next three questions:
```bnf
<statements>  ::=  <assign> ; | <assign> ; <statements>
<assign>      ::=  <var> = <expr>
<var>         ::=  <char> | <char> <var>
<char>        ::=  a | b | c | d
<expr>        ::=  <var> | <var> <op> <var>
<op>          ::=  + | - | * | / 
```

Which of the following is a terminal symbol?
+ `<char><variable>`
+ `<statments>`
+ `<char>`
+ `+`

**Answer:** `+`

**Explanation:**

A **terminal symbol** is a symbol in a formal grammar that does not have any other symbols defined in terms of it. It represents a fundamental building block or primitive element of the language described by the grammar. Thus, the actual character `+` is a terminal symbol.

### Question 18
What is the purpose of this grammar? That is, what is it designed to recognize?

+ `var`
+ `all of these`
+ `statements`
+ `assign`

**Answer:** `statements`

**Explanation:**

Unless specified elsewhere in the grammar, you can assume that the very first non-terminal symbol defined at the top of the grammar is the symbol which that grammar is designed to recognize. In this example `statments` is defined in the very first line of the grammar. While it may seem intuitive to say the grammar defines many things thus its purpose is to recognize many things, this thinking is flawed. A grammar is looking to either have found the first symbol or not have found the first symbol; whether it found other things it recognizes is inconsequential.

### Question 19
Which one of the following strings would be accepted by this grammar (i.e. is syntactically correct)?

+ `d = a + cba;`
+ `d = a + cba`
+ `a + cba = d;`
+ `d = a + cba d = a + cba`

**Answer:** `d = a + cba;`

**Explanation:**

To determine which of the given strings would be accepted by the grammar, we need to analyze each string according to the rules defined by the grammar.

Let's break down the grammar and examine the structure:

- `<statements>`: Represents a sequence of one or more `<assign>` statements separated by semicolons (`;`).
- `<assign>`: Represents an assignment statement with a variable (`<var>`) on the left side of an equals sign (`=`) and an expression (`<expr>`) on the right side.
- `<var>`: Represents a variable, which can be a single `<char>` or a sequence of `<char>`s.
- `<char>`: Represents individual characters `a`, `b`, `c`, or `d`.
- `<expr>`: Represents an expression, which can be a single `<var>` or a combination of `<var>`, `<op>`, and `<var>`.
- `<op>`: Represents arithmetic operators `+`, `-`, `*`, or `/`.

Now, let's analyze each given string:

1. `d = a + cba;`: This string consists of a single assignment statement, where `d` is assigned the value of the expression `a + cba`. This string is accepted by the grammar because it matches the `<assign>` production followed by a semicolon.
   
2. `d = a + cba`: This string is similar to the first one but lacks the semicolon at the end. According to the grammar, the presence of a semicolon after each `<assign>` is required in `<statements>`, so this string is not accepted.

3. `a + cba = d;`: This string starts with an expression `a + cba` followed by an equals sign and then a variable `d`. This structure does not match the `<assign>` production, so this string is not accepted.

4. `d = a + cba d = a + cba`: This string consists of two consecutive assignment statements (`d = a + cba` and `d = a + cba`) without semicolons separating them. According to the grammar, each `<assign>` statement in `<statements>` must be separated by a semicolon, so this string is not accepted.

Therefore, the only syntactically correct string accepted by the grammar is: `d = a + cba;`

### Question 20
In a Java program, which line of code will cause an error?

+ `int x = 200.0 + 5;`
+ `float x = 200.0 +5;`
+ `int x = 200 + 5;`
+ `double x = 200.0 + 5;`

**Answer:** `int x = 200.0 + 5;`

> [!WARNING]
> Technically `float x = 200.0 + 5;` will also result in an error. See explanation below.

**Explanation:**

1. `int x = 200.0 + 5;`: This line of code attempts to initialize an integer variable `x` with the result of adding a double value (`200.0`) to an integer value (`5`). In Java, the result of an arithmetic operation involving different numeric types is not automatically promoted or casted to the widest type involved in the operation. Therefore, attempting to assign a double value to an integer variable without an explicit cast results in a compilation error. To fix this error, you would need to explicitly cast the result to an integer, such as `int x = (int)(200.0 + 5);`.

2. `float x = 200.0 +5;`: This line of code attempts to initialize a float variable `x` with the result of adding a double value (`200.0`) to an integer value (`5`). Similarly, the result of the expression `200.0 + 5` is automatically promoted to a `double` type, and attempting to assign a `double` value to a `float` variable without an explicit cast results in a compilation error. To fix this error, you would need to explicitly cast the result to a float, such as `float x = (float)(200.0 + 5);` or use the format specifier `f` or `F` to tell the compiler that you want to use a float literal. For example `float x = 200.0f + 5;`.

Therefore, both of these lines will cause errors in a Java program due to attempting to assign incompatible types without explicit casting.

### Question 21
What level of analysis would have detected the error in the previous question?

+ `Lexical`
+ `Syntactic`
+ `Contextual`
+ `Semantic`

**Answer:** `Contextual`

**Explanation:**

**Contextual Analysis:** Contextual analysis involves analyzing the context or environment in which the code is written, including variable declarations, scoping rules, and type checking. Since the previous question had an error regarding the assignment of one type of expression: `double` to the wrong type of variable: `int` or `float`, it should be caught at the **Contextual** level.

> [!NOTE]
>  Contextual analysis can detect certain errors related to variable types and assignments, but it typically does not catch all type mismatch errors. There may be some Semantic analysis at work here.

### Question 22
What is one of the main reasons for using a two-step translation for some high-level programming languages? 

+ `One compiler for all machines`
+ `More accurate debugging information`
+ `Support stronger typing system`
+ `Better support for macros`

**Answer:** `One compiler for all machines`

**Explanation:**

Using a two-step translation process for high-level programming languages often involves compiling the code into an intermediate representation, such as bytecode or an abstract syntax tree (AST), which is then interpreted or compiled further for the target platform. One of the main reasons for adopting this approach is to achieve portability across different machines and architectures.

Here's why:

1. **Portability**: By generating an intermediate representation, the code can be platform-independent at that level. This means that the same intermediate representation can be executed or further compiled on different machines without requiring changes to the original source code. This approach simplifies the process of developing software that can run on diverse hardware and operating systems.

2. **Efficiency**: The initial compilation step can optimize the code for the intermediate representation, focusing on generic optimizations that are applicable across different architectures. This can lead to more efficient code execution compared to directly compiling for specific platforms in a single step.

3. **Ease of maintenance**: Separating the compilation process into multiple steps can make the compiler design more modular and easier to maintain. Developers can focus on specific aspects of compilation (e.g., generating bytecode, optimizing intermediate code) without being overly concerned about the intricacies of generating machine code for various architectures.

While the other options listed (more accurate debugging information, support for a stronger typing system, better support for macros) may be benefits of certain compilation strategies, they are not typically the main reasons for adopting a two-step translation approach.

### Question 23
Give this macro definition:
`#define diff(a, b) (a - b)`
What is the value of diff(10, 3-2)?

+ `7`
+ `15`
+ `5`
+ `9`

**Answer:** `5`

**Explanation:**

In C, using `#define` performs a literal textual substitution. In the example of `diff(10, 3-2)`, the literal substitution is `(10-3-2)` which evaluates to `5`. While it may be tempting to do the subtraction first, then substitute, that is not how `#define` works. If you wanted to achieve that effect however, you could use something like: `#define diff(a, b) ((a)-(b))` which would then substitute as `((10)-(3-2))` which evaluates as `9`.

### Question 24
What two things define a data type?

**Answer:** `A set of values and a set of operations over those values.`

**Explanation:**

1. **Set of Values**: Every data type in programming represents a specific kind of information that can be stored and manipulated by a computer program. This information is characterized by a set of possible values that the data type can hold. For example, the data type "integer" may have values such as -1, 0, 1, 2, and so on, while the data type "string" may have values like "hello", "world", etc. The set of values defines what kind of data can be stored in variables of that particular type.

2. **Set of Operations over Those Values**: Each data type comes with a set of operations or functions that can be performed on the values of that data type. These operations could include mathematical operations (like addition, subtraction, multiplication for numeric types), comparison operations (like equal to, greater than, less than), and other operations specific to the type (like concatenation for strings). The operations define how you can manipulate or work with the values stored in variables of that data type.

> [!TIP]
> Everything you need to know is in the presentations and the book Professor Eckert uses. Do not become overconfident, but also do not worry. You will do fine, and you will have a chance to make up any points you lose. Best of luck on your exam!