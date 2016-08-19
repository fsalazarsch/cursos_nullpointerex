using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Collections;

namespace WindowsFormsApplication1
{
   
    public partial class Form1 : Form
    {

        ArrayList mazo = new ArrayList();
        public String pnt = "cdpt";
        public String[] n_cart = new String[5];

        public void hay_carta_repetida(String str) { 
        int i, j, cont = 0;
            
            for(i=2; i<10; i++){
                for(j=0; j<9; j+=2){
                if(i.ToString().Equals(str[j]))
                    cont++;
            }}
            if (cont == 2)
                label1.Text += "Par de " + i.ToString() + "\n";
            else if (cont == 3)
                label1.Text += "Trío de " + i.ToString() + "\n";
            else if (cont == 4)
                label1.Text += "Cuarta de " + i.ToString() + "\n";

            for (j = 0; j < 9; j += 2)
            {
                if ("A".Equals(str[j]))
                    cont++;
            }
            if (cont == 2)
                label1.Text += "Par de Ases \n";
            else if (cont == 3)
                label1.Text += "Trío de Ases\n";
            else if (cont == 4)
                label1.Text += "Cuarta de Ases\n";
            for (j = 0; j < 9; j += 2)
            {
                if ("A".Equals(str[j]))
                    cont++;
            }
            if (cont == 2)
                label1.Text += "Par de Ases \n";
            else if (cont == 3)
                label1.Text += "Trío de Ases\n";
            else if (cont == 4)
                label1.Text += "Cuarta de Ases\n";
            for (j = 0; j < 9; j += 2)
            {
                if ("T".Equals(str[j]))
                    cont++;
            }
            if (cont == 2)
                label1.Text += "Par de 10 \n";
            else if (cont == 3)
                label1.Text += "Trío de 10\n";
            else if (cont == 4)
                label1.Text += "Cuarta de 10\n";
            for (j = 0; j < 9; j += 2)
            {
                if ("J".Equals(str[j]))
                    cont++;
            }
            if (cont == 2)
                label1.Text += "Par de J \n";
            else if (cont == 3)
                label1.Text += "Trío de J\n";
            else if (cont == 4)
                label1.Text += "Cuarta de J\n";
            for (j = 0; j < 9; j += 2)
            {
                if ("Q".Equals(str[j]))
                    cont++;
            }
            if (cont == 2)
                label1.Text += "Par de Q \n";
            else if (cont == 3)
                label1.Text += "Trío de Q\n";
            else if (cont == 4)
                label1.Text += "Cuarta de Q\n";

        

            for (j = 0; j < 9; j += 2)
            {
                if ("K".Equals(str[j]))
                    cont++;
            }
            if (cont == 2)
                label1.Text += "Par de K \n";
            else if (cont == 3)
                label1.Text += "Trío de K\n";
            else if (cont == 4)
                label1.Text += "Cuarta de K\n";

        }
    

        public int rnd(int i) {
            Random rand = new Random();
            return rand.Next(0, i);
        }

        public int[] varios_random() {
            int i,j;
            int[] rands = new int[5];
            
            for(i=0; i<5; i++){
            Random rand = new Random();
            rands[i] = rand.Next(0, 52);
            }
            //que no se repita 
            for(i=0; i<4; i++)
                for(j=i+1;j<5;j++)
                    while (rands[i] == rands[j]) {
                        Random rand = new Random();
                        rands[j] = rand.Next(0, 52);
                    }
            return rands;

        }

        public void poner_imagen(PictureBox pb, String nom_imagen) {
            string ruta = Application.StartupPath;
            ruta = ruta.Replace("bin\\Debug", "Resources\\"+nom_imagen+".gif");
            pb.Image = Image.FromFile(ruta);

        }

        public void crear_mazo(){
            mazo.Clear();
            int i, j;
            for (i = 1; i < 14; i++)
                for (j = 0; j < 4;j++ )
                    mazo.Add(new carta(i, pnt[j]));


        }

        void revolver_mazo() {
            
            carta aux = new carta();
            for (int i = 0; i < mazo.Count; i++)
            {
                
                aux = (carta)mazo[i];
                mazo[i] = mazo[rnd(mazo.Count)];
                mazo[rnd(mazo.Count)] = aux;
            }

        
        }


        public String quitar_carta() {
            
            String n_cart = "";
            int index = rnd(mazo.Count); 
            carta nueva_car = (carta) mazo[index];
            mazo.RemoveAt(index);

            int n = nueva_car.get_num();
            char p = nueva_car.get_pinta();            

            n_cart = n.ToString();
            if (n == 1)
                n_cart = 'A'.ToString();
            if (n == 10)
                n_cart = 'T'.ToString();
            if (n == 11)
                n_cart = 'J'.ToString();
            if (n == 12)
                n_cart = 'Q'.ToString();
            if (n == 13)
                n_cart = 'K'.ToString();

            n_cart += p;
            return n_cart;
        }
        

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        public class carta { 
        private int numero;
        private char pinta;

        public carta() { }
           public carta(int numero, char pinta) {
                this.numero = numero;
                this.pinta = pinta;
            }

            public int get_num() {
                return numero;
            }
            
            public char get_pinta()
            {
                return pinta;
            }
        }

        private void sacarCartaToolStripMenuItem_Click(object sender, EventArgs e)
        {
            crear_mazo();
            String carta_quitada = quitar_carta();
            poner_imagen(pictureBox1, carta_quitada);
            poner_imagen(pictureBox2, "rev");
            poner_imagen(pictureBox3, "rev");
            poner_imagen(pictureBox4, "rev");
            poner_imagen(pictureBox5, "rev");

        }

        private void sacarManoToolStripMenuItem_Click(object sender, EventArgs e)
        {
            crear_mazo();
            int[] rnds = new int[5];
            rnds = varios_random();

            for (int i = 0; i < 5; i++)
            {
                carta nueva_car = (carta)mazo[rnds[i]];
                //mazo.RemoveAt(rnds[i]);

                int n = nueva_car.get_num();
                char p = nueva_car.get_pinta();

                n_cart[i] = n.ToString();
                if (n == 1)
                    n_cart[i] = 'A'.ToString();
                if (n == 10)
                    n_cart[i] = 'T'.ToString();
                if (n == 11)
                    n_cart[i] = 'J'.ToString();
                if (n == 12)
                    n_cart[i] = 'Q'.ToString();
                if (n == 13)
                    n_cart[i] = 'K'.ToString();

                n_cart[i] += p;
            }
            poner_imagen(pictureBox1, n_cart[0]);
            poner_imagen(pictureBox2, n_cart[1]);
            poner_imagen(pictureBox3, n_cart[2]);
            poner_imagen(pictureBox4, n_cart[3]);
            poner_imagen(pictureBox5, n_cart[4]);
        }

        private void compararManoToolStripMenuItem_Click(object sender, EventArgs e)
        {
            label1.Text="";
            String mano = "";
            if (!(n_cart.Equals(null))) {
                for (int i = 0; i < 5; i++)
                    mano += n_cart[i];
            }
            hay_par(mano)
        }
    }
}
