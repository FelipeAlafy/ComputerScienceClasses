/* PT-BR
 * Uma livraria deseja desenvolver um sistema para cadastrar livros. Cada livro possui um título, um autor e o ano de
 * publicação. No entanto, o sistema deve garantir que os usuários não insiram mais caracteres do que os permitidos
 * nos campos de título e autor (100 e 50 caracteres, respectivamente). Implemente o sistema que permita o cadastro de
 * 3 livros e garanta que as entradas do usuário não excedam os limites permitidos. Em seguida, exiba as informações
 * dos livros cadastrados.
 */

/* EN
 * A librarian wishes to develop a system to register its books. Which book have a title, author and a published date.
 * However, the system should be user's proof, by not allowing them to insert more than hundrend characters for title and
 * fifth characters for author's name respectively. Implement a system that are able to register up to 3 books and make
 * sure that user's can't bypass the defined limits. After, show up the data from the registered books.
 * */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    const int MAXIMUM_REGISTRABLE_BOOKS = 3;
    const int BOOK_TITLE_LENGTH_LIMIT = 100;
    const int AUTHOR_NAME_LENGTH_LIMIT = 50;
    const int DATE_LENGTH_LIMIT = 11;

    char booksTitles[MAXIMUM_REGISTRABLE_BOOKS][BOOK_TITLE_LENGTH_LIMIT];
    char authorsNames[MAXIMUM_REGISTRABLE_BOOKS][AUTHOR_NAME_LENGTH_LIMIT];
    char releaseDate[MAXIMUM_REGISTRABLE_BOOKS][DATE_LENGTH_LIMIT];

    for (int book = 0; book < MAXIMUM_REGISTRABLE_BOOKS; book++) {
        printf("Book Title\n>> ");
        fgets(booksTitles[book], BOOK_TITLE_LENGTH_LIMIT, stdin);

        printf("Author Name\n>> ");
        fgets(authorsNames[book], AUTHOR_NAME_LENGTH_LIMIT, stdin);

        printf("Release Date\n>> ");
        fgets(releaseDate[book], DATE_LENGTH_LIMIT, stdin);
        getchar();
    }

    for (int book = 0; book < MAXIMUM_REGISTRABLE_BOOKS; book++) {
        printf("Book - %d: %s\n", book, booksTitles[book]);
        printf("\t\tAuthor - %d: %s\n", book, authorsNames[book]);
        printf("\t\tRelease Date - %d: %s\n", book, releaseDate[book]);
    }

    return 0;
}