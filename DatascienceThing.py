import pandas as pd 
import matplotlib.pyplot as plt 
#Read the CSV file
df = pd.read_csv('scores.csv')

# Extract the data from the columns 
names = df ['name'] # Extract the 'name' column
ages = df['age'] # Extract the 'age' column
scores = df ['score'] # Extract the 'score' column
# Calculate the mean score
mean_score = scores.mean()
# Calculate the median score
median_score = scores.median()
# Calculate the mode score
mode_score = scores.mode()
# Calculate the maximum score
max_score = scores.max()

# Calculate the minimum score
min_score = scores.min()

#Print the calculated statistics 
print("Mean Score:", mean_score)
print("Median Score:", median_score)
print("Most Common Score:", mode_score [0]) #Access the first mode value (if multiple modes exist)
print("Highest score:",max_score)
print("Lowest score:",min_score)

# Plotting
plt.bar(names, scores) #create a bar plot with names on the x-axis and scores on the y-axis
plt.xlabel('Name') #Set the x-axis label
plt.ylabel('Score') #Set the y-axis label
plt.title('Scores by Name') #Set the title of the plot
plt.xticks(rotation=70) #Rotate the x-axis tick labels by 70 degrees
plt.show() #Display the plot
63
