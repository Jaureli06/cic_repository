import pandas as pd
import matplotlib.pyplot as plt

# Read the CSV file
data = pd.read_csv('movies.csv')

# Count the occurrences of each genre
genre_counts = data['genre'].value_counts()

# Plotting
plt.pie(genre_counts.values, labels=genre_counts.index, autopct='%1.1f%%')  # Create a pie chart with genre counts
plt.title('Most Liked Genre')  # Set the title of the plot
plt.axis('equal')  # Equal aspect ratio ensures that the pie is drawn as a circle
plt.show()  # Display the plot


"""
The value_counts() function is applied to the 'genre' column of the DataFrame data
 to count the occurrences of each unique genre. The resulting counts are stored in the genre_counts Series.

 The pie() function from matplotlib.pyplot is used to create a pie chart. It takes three arguments:
genre_counts.values represents the values (counts) of each genre.
genre_counts.index represents the labels (genres) of each slice.
autopct='%1.1f%%' specifies the format of the percentage labels on each slice.

The title() function is used to set the title of the pie chart.

The axis() function is used to set the aspect ratio of the plot to 'equal', ensuring that the pie is drawn as a circle.

The show() function is called to display the pie chart.
"""
