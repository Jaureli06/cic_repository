import pandas as pd 
import matplotlib.pyplot as plt 
#Read the CSV file
df = pd.read_csv('scores.csv')

# Extract the data from the columns 
names = df ['name'] # Extract the 'name' column
ages = df['age'] # Extract the 'age' column
scores = df ['score'] # Extract the 'score' column

# Create a scatter plot
plt.scatter(ages, scores) #Plot 'ages' on the x-axis and 'scores on the y-axis
plt.xlabel('Age') #Set the x-axis label
plt.ylabel('Score') #Set the y-axis label
plt.title('Score vs Age') #Set the title of the plot
plt.show() #Display the plot

