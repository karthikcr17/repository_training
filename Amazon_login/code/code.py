#!/usr/bin/python
import re
import sys
import os
from selenium import webdriver
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.common.by import By
import selenium
from selenium.webdriver.support import expected_conditions as EC


elements = ["primary camera","RAM","internal memory","processor"]
DETAILS = {}

try:
	driver = webdriver.Firefox("../driver/")
except selenium.common.exceptions.WebDriverException:
	print('''PATH :/usr/bin/ this path driver missing
Firefox webdriver is Not installed in your device Please install gekodriver for Firefox in below link https://github.com/mozilla/geckodriver/releases'''.center(100))
	sys.exit()
	
time.sleep(2)
driver.get("http://www.amazon.in")
time.sleep(2)

print "opened amazon.in".center(40,"*")

try:
	box = driver.find_element_by_id("nav-link-yourAccount")
except selenium.common.exceptions.NoSuchElementException:
	box = driver.find_element_by_id("nav-link-accountList")
box.click()
time.sleep(10)
email = driver.find_element_by_id("ap_email")
email.send_keys(os.environ['EMAIL'])
pswd = driver.find_element_by_id("ap_password")
pswd.send_keys(os.environ['PASSWORD'])

try:
	login = WebDriverWait(driver, 20).until(EC.presence_of_element_located((By.ID,"a-autoid-0")))
except selenium.common.exceptions.TimeoutException:
	login = driver.find_element_by_id("signInSubmit")
login.submit()
time.sleep(10)

print "LOGIN SUCCESSFULLY".center(40,"*")

search = WebDriverWait(driver, 20).until(EC.presence_of_element_located((By.ID, "twotabsearchtextbox")))
product = re.sub('[/]',' ',os.environ['PRODUCT'])
search.send_keys(product)
button = driver.find_element_by_id("nav-search-submit-text")
button.submit()
time.sleep(10)

phone = WebDriverWait(driver, 20).until(EC.presence_of_element_located((By.CLASS_NAME, "s-access-image")))
phone.click()
time.sleep(10)
tabs = driver.window_handles
if len(tabs)==2:
	driver.switch_to_window(tabs[1])

try:
	price = WebDriverWait(driver, 20).until(EC.presence_of_element_located((By.ID, "priceblock_dealprice")))
except selenium.common.exceptions.TimeoutException:
	try:
		price = driver.find_element_by_id("priceblock_saleprice")
	except selenium.common.exceptions.NoSuchElementException:
		try:
			price = driver.find_element_by_id("priceblock_ourprice")
			price_value = price.text
		except selenium.common.exceptions.NoSuchElementException:
			price_value = "----"
	else:
		price_value = price.text
else:
	price_value = price.text

try:	
	colour = driver.find_element_by_id("variation_color_name").find_element_by_class_name("a-row").text
except selenium.common.exceptions.NoSuchElementException:
	colour = "NO"

featuresmore = driver.find_element_by_id("feature-bullets")
features = re.split('[\n,]+',featuresmore.text)

try:
	table = driver.find_element_by_class_name("pdTab")
	details = table.text
except selenium.common.exceptions.NoSuchElementException:
	pass

if os.environ['WISHLIST']=="add":
	try:
		wishlist = driver.find_element_by_id("add-to-wishlist-button-submit")
		wishlist.click()

		print "Added into wishlist".center(40,"*")
	except selenium.common.exceptions.NoSuchElementException:
		print("there is no wishlist option")


time.sleep(10)
for sub in elements:
	for string in features:
		if (sub in string):
			DETAILS[sub] = string

DETAILS["Price"] = price_value

print "DETAILS OF PRODUCT".center(65,"-")
print colour
for i in range(len(DETAILS)):
	print("%s:%s"%(DETAILS.items()[i][0],DETAILS.items()[i][1]))

print("\n\n%s"%(details))

print 65*"-"
signout = driver.find_element_by_id("nav-item-signout")
driver.execute_script("arguments[0].click();",signout)

print "SIGNOUT".center(40,"*")

time.sleep(10)

driver.quit()
print "QUIT".center(40,"*")

