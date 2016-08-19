<?xml version="1.0"?>     
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform"> 
 <xsl:template match="/">   

<html> 
  <head> 
  <title>Stocks</title> 
  </head> 
  <body bgcolor="#ffffcc"> 
    <xsl:apply-templates/> 
  </body> 
  </html> 
</xsl:template> 
 
<xsl:template match="biblioteca"> 
 
   <table border="2" width="75%"> 
     <tr> 
      <th><U>Libro</U></th> 
      <th><B>Autor</B></th> 
     </tr> 
     <xsl:for-each select="libro"> 
       <tr> 
         <td> 
           <i><xsl:value-of select="titulo"/></i> 
         </td> 
       <td> 
          <xsl:value-of select="autor"/> 
        </td> 
        </tr> 
      </xsl:for-each> 
    </table> 
  </xsl:template> 
 
</xsl:stylesheet>