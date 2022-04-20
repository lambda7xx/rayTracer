#coding=utf-8
#import image
#from PIL import Image

#img = Image.open("image.ppm")
#img.save("image.jpg")
#img.show()

old_path = "image.ppm"
save_path = "image.jpg"

val = ''
with open(old_path,'rb') as f:
    val = f.read()

with open(save_path,"wb") as f:
    f.write(val)
