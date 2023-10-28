from PIL import Image, ImageFilter

before=Image.open("Screenshot (95).bmp")
after = before.filter(ImageFilter.BoxBlur(1))
after.save("out.bmp")