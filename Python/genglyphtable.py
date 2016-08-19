import Image, ImageDraw, ImageFont

def generateGlyphTable( begin, end, fontName, size, bgcolor, fgcolor, filename ):

	charCount = end - begin
	columns = 16	
	imageWidth = columns * size
	imageHeight = ( charCount / columns + 1 ) * size
	
	im = Image.new( "RGB", ( imageWidth, imageHeight ), bgcolor )
	
	draw = ImageDraw.Draw(im)
	
	# Load Japanese OpenType(or TrueType) font
	font = ImageFont.truetype( fontName, size )
	
	i = 0
	x = 0
	y = 0
	
	for n in range( begin, end + 1 ):
	
		x = size * ( i % columns )
		y = size * ( i / columns )
		i += 1
		draw.text( ( x, y - 1 ), unichr( n ), font = font, fill=fgcolor )
	
	im.save( filename )
	#im.show() # Uncomment to visualize generated images
	
#Generate hiragana and katakana glyph tables

generateGlyphTable( 0x3040, 0x309F, "ProW3.otf", 16, "#FFFFEB", "black", "hiragana.png" )
generateGlyphTable( 0x30A0, 0x30FF, "ProW3.otf", 16, "#FFFFEB", "black", "katakana.png" )
generateGlyphTable( 32, 127, "freesansbold.ttf", 16, "#FFFFEB", "black", "ascii.png" )

generateGlyphTable( 0x3040, 0x309F, "ProW3.otf", 24, "#FFFFEB", "black", "hira24.png" )
generateGlyphTable( 0x30A0, 0x30FF, "ProW3.otf", 24, "#FFFFEB", "black", "kata24.png" )
generateGlyphTable( 32, 127, "freesansbold.ttf", 24, "#FFFFEB", "black", "ascii24.png" )
