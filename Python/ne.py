#!/usr/bin/env python
# gui/wxPythonSemanaESIDE.py
import wx
class Frame(wx.Frame):
#Clase frame que visualiza una imagen.
def __init__(self, image, parent=None, id=-1, pos=wx.DefaultPosition, title='¡Hola, semaneros ESIDE!'):
#"Crea un Frame y visualiza imagen."
temp = image.ConvertToBitmap()
size = temp.GetWidth(), temp.GetHeight()
wx.Frame.__init__(self, parent, id, title, pos, size)
self.bmp = wx.StaticBitmap(parent=self, id=-1, bitmap=temp)
class App(wx.App):
#"Clase aplicación."
def OnInit(self):
wx.InitAllImageHandlers()
image = wx.Image('semanaeside.jpg', wx.BITMAP_TYPE_JPEG)
self.frame = Frame(image)
self.frame.Show()
self.SetTopWindow(self.frame)
return True
def main():
app = App()
app.MainLoop()
if __name__ == '__main__':
main()