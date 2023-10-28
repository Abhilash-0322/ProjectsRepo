# from googlesearch import search
# def perform_google_search("joker"):
#     try:
#         search_results = list(search(query, num=5, stop=5, pause=2))
#         print(search_results)
#     except Exception as e:
#         return str(e)
# if "search for" in query.lower():
#     search_query = query.lower().replace("search for", "").strip()
#     search_results = perform_google_search(search_query)

#     if search_results:
#         response = f"Here are some search results for '{search_query}':\n"
#         for i, result in enumerate(search_results, start=1):
#             response += f"{i}. {result}\n"
#     else:
#         response = "I couldn't find any search results for that query."
from googlesearch import search

# Define your search query
query = "Python programming"

# Perform the Google search and iterate through the results
for result in search(query):
    print(result)

