# Huzz Translator

Overview

The Huzz Translator is a simple C++ console application that transforms input words into a playful slang format called "huzz language." It modifies words either by looking up predefined translations or by altering them based on vowel positions.

## Features

Translates specific words using a custom dictionary.

For words not in the dictionary, it finds the first or second vowel and inserts "uzz" to create the slang variant.

Interactive console input/output loop for continuous translation.

## How It Works

The program first checks if the input word is found in a predefined dictionary with translations.

If not found, it:

Searches for the second vowel (or first vowel if only one exists).

Inserts "uzz" after this vowel.

Trims the characters appearing after the "uzz"

The translated word is then printed to the console
