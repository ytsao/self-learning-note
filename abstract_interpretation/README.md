# Lecture Notes Project

This project contains lecture notes organized into chapters, along with figures and a bibliography. Below is a brief overview of the files included in this project.

## File Structure

- **main.tex**: The main document that compiles the entire lecture notes. It includes the preamble and all chapters, setting up the overall structure and formatting.
  
- **chapters/**: This directory contains the individual chapters of the lecture notes.
  - **chapter1.tex**: Content for Chapter 1.
  - **chapter2.tex**: Content for Chapter 2.
  - **chapter3.tex**: Content for Chapter 3.

- **figures/**: This directory contains figures used in the lecture notes.
  - **README.md**: Instructions on how to add or reference figures.

- **bibliography.bib**: The bibliography database containing references used throughout the lecture notes, formatted in BibTeX.

- **preamble.tex**: The LaTeX preamble, including packages, custom commands, and settings used across the entire document.

## Compilation Instructions

To compile the lecture notes, follow these steps:

1. Ensure you have a LaTeX distribution installed (e.g., TeX Live, MiKTeX).
2. Open a terminal and navigate to the project directory.
3. Run the following command to compile the main document:

   ```
   pdflatex main.tex
   ```

4. If you have citations, run BibTeX:

   ```
   bibtex main
   ```

5. Finally, run `pdflatex` again twice to ensure all references are updated:

   ```
   pdflatex main.tex
   pdflatex main.tex
   ```

## Additional Information

Feel free to modify the chapters and figures as needed. For any questions or contributions, please refer to the project's guidelines or contact the project maintainer.