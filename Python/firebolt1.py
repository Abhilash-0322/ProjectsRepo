import firebolt

# Create a connection object
connection = firebolt.Connection(
    account_name="Abhilash",
    client_id="my_client_id",
    client_secret="my_client_secret",
)
# Execute a query
cursor = connection.cursor()
cursor.execute("SELECT * FROM my_table")

# Get the results of the query
results = cursor.fetchall()

# Close the cursor
cursor.close()

# Close the connection
connection.close()