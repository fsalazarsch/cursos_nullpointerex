/*
 * Created by SharpDevelop.
 * User: Carlos
 * Date: 11-07-2014
 * Time: 1:17
 * 
 * To change this template use Tools | Options | Coding | Edit Standard Headers.
 */
 using MySql.Data.MySqlClient;
namespace farmacia
{
	partial class Form1
	{
		/// <summary>
		/// Designer variable used to keep track of non-visual components.
		/// </summary>
		private System.ComponentModel.IContainer components = null;
		
		/// <summary>
		/// Disposes resources used by the form.
		/// </summary>
		/// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
		protected override void Dispose(bool disposing)
		{
			if (disposing) {
				if (components != null) {
					components.Dispose();
				}
			}
			base.Dispose(disposing);
		}
		
		/// <summary>
		/// This method is required for Windows Forms designer support.
		/// Do not change the method contents inside the source code editor. The Forms designer might
		/// not be able to load this method if it was changed manually.
		/// </summary>
		private void InitializeComponent()
		{
			this.label1 = new System.Windows.Forms.Label();
			this.textBox1 = new System.Windows.Forms.TextBox();
			this.label2 = new System.Windows.Forms.Label();
			this.textBox2 = new System.Windows.Forms.TextBox();
			this.label3 = new System.Windows.Forms.Label();
			this.label4 = new System.Windows.Forms.Label();
			this.textBox3 = new System.Windows.Forms.TextBox();
			this.textBox4 = new System.Windows.Forms.TextBox();
			this.button1 = new System.Windows.Forms.Button();
			this.label5 = new System.Windows.Forms.Label();
			this.textBox5 = new System.Windows.Forms.TextBox();
			this.SuspendLayout();
			// 
			// label1
			// 
			this.label1.Location = new System.Drawing.Point(23, 56);
			this.label1.Name = "label1";
			this.label1.Size = new System.Drawing.Size(54, 21);
			this.label1.TabIndex = 0;
			this.label1.Text = "Nombre";
			// 
			// textBox1
			// 
			this.textBox1.Location = new System.Drawing.Point(105, 53);
			this.textBox1.Name = "textBox1";
			this.textBox1.Size = new System.Drawing.Size(129, 20);
			this.textBox1.TabIndex = 1;
			// 
			// label2
			// 
			this.label2.Location = new System.Drawing.Point(23, 89);
			this.label2.Name = "label2";
			this.label2.Size = new System.Drawing.Size(100, 23);
			this.label2.TabIndex = 3;
			this.label2.Text = "Compuesto";
			this.label2.Click += new System.EventHandler(this.Label2Click);
			// 
			// textBox2
			// 
			this.textBox2.Location = new System.Drawing.Point(105, 89);
			this.textBox2.Name = "textBox2";
			this.textBox2.Size = new System.Drawing.Size(129, 20);
			this.textBox2.TabIndex = 1;
			// 
			// label3
			// 
			this.label3.Location = new System.Drawing.Point(23, 133);
			this.label3.Name = "label3";
			this.label3.Size = new System.Drawing.Size(76, 21);
			this.label3.TabIndex = 0;
			this.label3.Text = "Presentacion";
			// 
			// label4
			// 
			this.label4.Location = new System.Drawing.Point(23, 169);
			this.label4.Name = "label4";
			this.label4.Size = new System.Drawing.Size(76, 21);
			this.label4.TabIndex = 0;
			this.label4.Text = "Laboratorio";
			// 
			// textBox3
			// 
			this.textBox3.Location = new System.Drawing.Point(105, 130);
			this.textBox3.Name = "textBox3";
			this.textBox3.Size = new System.Drawing.Size(129, 20);
			this.textBox3.TabIndex = 1;
			// 
			// textBox4
			// 
			this.textBox4.Location = new System.Drawing.Point(105, 166);
			this.textBox4.Name = "textBox4";
			this.textBox4.Size = new System.Drawing.Size(129, 20);
			this.textBox4.TabIndex = 1;
			// 
			// button1
			// 
			this.button1.Location = new System.Drawing.Point(105, 217);
			this.button1.Name = "button1";
			this.button1.Size = new System.Drawing.Size(75, 23);
			this.button1.TabIndex = 2;
			this.button1.Text = "Aceptar";
			this.button1.UseVisualStyleBackColor = true;
			this.button1.Click += new System.EventHandler(this.Button1Click);
			// 
			// label5
			// 
			this.label5.Location = new System.Drawing.Point(23, 15);
			this.label5.Name = "label5";
			this.label5.Size = new System.Drawing.Size(54, 21);
			this.label5.TabIndex = 0;
			this.label5.Text = "Id";
			// 
			// textBox5
			// 
			this.textBox5.Location = new System.Drawing.Point(105, 12);
			this.textBox5.Name = "textBox5";
			this.textBox5.Size = new System.Drawing.Size(129, 20);
			this.textBox5.TabIndex = 1;
			// 
			// Form1
			// 
			this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
			this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
			this.ClientSize = new System.Drawing.Size(284, 262);
			this.Controls.Add(this.button1);
			this.Controls.Add(this.textBox4);
			this.Controls.Add(this.textBox2);
			this.Controls.Add(this.textBox3);
			this.Controls.Add(this.textBox5);
			this.Controls.Add(this.textBox1);
			this.Controls.Add(this.label4);
			this.Controls.Add(this.label3);
			this.Controls.Add(this.label5);
			this.Controls.Add(this.label2);
			this.Controls.Add(this.label1);
			this.Name = "Form1";
			this.Text = "Agregar Medicamento";
			this.ResumeLayout(false);
			this.PerformLayout();
		}
		private System.Windows.Forms.TextBox textBox5;
		private System.Windows.Forms.Label label5;
		private System.Windows.Forms.Button button1;
		private System.Windows.Forms.TextBox textBox4;
		private System.Windows.Forms.TextBox textBox3;
		private System.Windows.Forms.Label label4;
		private System.Windows.Forms.Label label3;
		private System.Windows.Forms.TextBox textBox2;
		private System.Windows.Forms.Label label2;
		private System.Windows.Forms.TextBox textBox1;
		private System.Windows.Forms.Label label1;
		
		void Label2Click(object sender, System.EventArgs e)
		{
			
		}
		
		void Button1Click(object sender, System.EventArgs e)
		{
			Coneccion c = new Coneccion();
			
			string sql = "Insert into medicamento values("+textBox5.Text+", '"+textBox1.Text+"', '"+textBox2.Text+"', '"+textBox3.Text+"', '"+textBox4.Text+"')";
			//MySqlCommand instruccion = new MySqlCommand(sql, c.conectar());
			MySqlCommand cmd = new MySqlCommand();
			cmd.Connection = c.conectar();
			cmd.CommandText = sql;
			cmd.ExecuteNonQuery();
			System.Windows.Forms.MessageBox.Show("Insertado "+textBox1.Text+" correctamente");
			
			this.Close();
			
		}
	}
}
