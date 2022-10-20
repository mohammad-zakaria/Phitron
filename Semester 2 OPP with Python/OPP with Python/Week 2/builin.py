largest = max (12, 3, 4, 5, 6, 7, 8, 9, 10)
print (largest)

actors = [
    {'name': 'Samuel L. Jackson', 'age': 70},
    {'name': 'Keanu Reeves', 'age': 55},
    {'name': 'Jeff Bridges', 'age': 30},
    {'name': 'Robert Downey Jr.', 'age': 25},

]

sorted_actors = sorted(actors, key=lambda actor: actor['age'])
print(f"Sorted Actors: {sorted_actors}")