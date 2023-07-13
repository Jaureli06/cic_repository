import numpy as np
from sklearn import datasets
from sklearn.model_selection import train_test_split
from sklearn import svm
from PIL import Image

#load the digits dataset
digits = datasets.load_digits()

# split the dataset into training and testing sets
X_train, X_test, y_train, y_test = train_test_split(digits.data, digits.target, test_size=0.2, random_state=42)

# create a support vector machine (SVM) classifier
clf = svm.SVC(gamma='scale')

# train the classifier
clf.fit(X_train, y_train)

# Load your own test image
test_image = Image.open("seven.png") # Replace "zero.png" with the path to your own image
test_image = test_image.convert("L") # Convert the image to grayscale if needed
test_image = test_image.resize((8,8)) #Resize the image to match the input size of the classifier

#Convert the image to a numpy array
test_data = np.array(test_image).flatten()

# Normalize the pixel values
test_data = test_data / 16.0

#Make a prediciton on the test image
predicted = clf.predict([test_data])

# Print the predicted digit
print("Predicted Digit:", predicted[0])
