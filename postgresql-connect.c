#include <stdio.h>
#include <stdlib.h>
#include <libpq-fe.h>

int main() {
    // Variables for database connection
    PGconn *conn;
    PGresult *res;

    // Establish database connection
    conn = PQconnectdb("dbname=mydatabase user=myuser password=mypassword host=localhost port=5432");
    if (PQstatus(conn) != CONNECTION_OK) {
        fprintf(stderr, "Connection to database failed: %s", PQerrorMessage(conn));
        PQfinish(conn);
        exit(1);
    }

    // Execute a sample query
    res = PQexec(conn, "SELECT * FROM mytable");
    if (PQresultStatus(res) != PGRES_TUPLES_OK) {
        fprintf(stderr, "Query execution failed: %s", PQerrorMessage(conn));
        PQclear(res);
        PQfinish(conn);
        exit(1);
    }

    // Process the query results
    int rowCount = PQntuples(res);
    int colCount = PQnfields(res);

    for (int row = 0; row < rowCount; row++) {
        for (int col = 0; col < colCount; col++) {
            printf("%s\t", PQgetvalue(res, row, col));
        }
        printf("\n");
    }

    // Cleanup and close the database connection
    PQclear(res);
    PQfinish(conn);

    return 0;
}
