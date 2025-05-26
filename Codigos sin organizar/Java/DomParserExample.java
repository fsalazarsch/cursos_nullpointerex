
import java.awt.*;
import java.awt.event.*;
import java.io.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.lang.String;
import java.applet.*;

import java.io.IOException;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.ParserConfigurationException;

import org.w3c.dom.Document;
import org.w3c.dom.Element;
import org.w3c.dom.NodeList;
import org.xml.sax.SAXException;

public class DomParserExample extends JFrame{

	List kanji;
	Document dom;
    private Container ventana;
    private GridLayout rejilla;
    private String texto="";
	
	public DomParserExample(){
		kanji = new ArrayList();
	}

	public void runExample() throws Exception{
		
		//super("Ingresar Asignatura");
	  
	    File f = new File("mingliu.ttc");	
    	FileInputStream in = new FileInputStream(f);
    	Font dynamicFont = Font.createFont(Font.TRUETYPE_FONT, in);
    	Font dynamicFont32Pt = dynamicFont.deriveFont(20f);
	  
	    //rejilla = new GridLayout(2,1,20,20);//filas,columnas,espacio
	    JTextArea i_d = new JTextArea(20,20);
	  	i_d.setFont(dynamicFont32Pt);


		parseXmlFile();
		parseDocument();
		printData();
		
		i_d.setText(texto);
	    ventana = getContentPane();
      
        ventana.add(i_d);
        setSize(350,500);
        setLocation(100,100);
        setResizable(true);
        setVisible(true);
	}
	
	
	private void parseXmlFile(){
		DocumentBuilderFactory dbf = DocumentBuilderFactory.newInstance();
		
		try {
			DocumentBuilder db = dbf.newDocumentBuilder();
			dom = db.parse("kanji.xml");
		}catch(ParserConfigurationException pce) {
			pce.printStackTrace();
		}catch(SAXException se) {
			se.printStackTrace();
		}catch(IOException ioe) {
			ioe.printStackTrace();
		}
	}

	
	private void parseDocument(){
		Element docEle = dom.getDocumentElement();
		NodeList nl = docEle.getElementsByTagName("Kanji");
		if(nl != null && nl.getLength() > 0) {
			for(int i = 0 ; i < nl.getLength();i++) {
				Element el = (Element)nl.item(i);
				Kanji k = getkanji(el);
				texto += k.getsimbolo();
				kanji.add(k);
			}
		}
	}

	private Kanji getkanji(Element kan) {
		String simbol = getTextValue(kan,"Simbolo");
		String on = getTextValue(kan,"Onyomi");
		String kun = getTextValue(kan,"Kunyomi");
		String sign = getTextValue(kan,"Significado");
		String rad = getTextValue(kan,"Radical");

		int type = Integer.parseInt(kan.getAttribute("grado"));
		
		Kanji k = new Kanji(simbol,on,kun,sign,1,type,rad);
		
		return k;
	}

	private String getTextValue(Element ele, String tagName) {
		String textVal = null;
		NodeList nl = ele.getElementsByTagName(tagName);
		if(nl != null && nl.getLength() > 0) {
			Element el = (Element)nl.item(0);
			textVal = el.getFirstChild().getNodeValue();
		}

		return textVal;
	}

	private int getIntValue(Element ele, String tagName) {
		return Integer.parseInt(getTextValue(ele,tagName));
	}
	
	private void printData(){
		
		Iterator it = kanji.iterator();
		while(it.hasNext()) {
			texto += it.next().toString();
		
		}
	}

	
	public static void main(String[] args) throws Exception{
		DomParserExample dpe = new DomParserExample();
		dpe.runExample();
	}

}