/*
 * Created by SharpDevelop.
 * User: Felipe
 * Date: 11-07-2014
 * Time: 0:57
 * 
 * To change this template use Tools | Options | Coding | Edit Standard Headers.
 */
namespace farmacia
{
	partial class MainForm
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
			this.button1 = new System.Windows.Forms.Button();
			this.button2 = new System.Windows.Forms.Button();
			this.button3 = new System.Windows.Forms.Button();
			this.SuspendLayout();
			// 
			// button1
			// 
			this.button1.Location = new System.Drawing.Point(41, 28);
			this.button1.Name = "button1";
			this.button1.Size = new System.Drawing.Size(131, 32);
			this.button1.TabIndex = 0;
			this.button1.Text = "Agregar Medicamento";
			this.button1.UseVisualStyleBackColor = true;
			this.button1.Click += new System.EventHandler(this.Button1Click);
			// 
			// button2
			// 
			this.button2.Location = new System.Drawing.Point(41, 78);
			this.button2.Name = "button2";
			this.button2.Size = new System.Drawing.Size(131, 32);
			this.button2.TabIndex = 0;
			this.button2.Text = "Borrar Medicamento";
			this.button2.UseVisualStyleBackColor = true;
			this.button2.Click += new System.EventHandler(this.Button2Click);
			// 
			// button3
			// 
			this.button3.Location = new System.Drawing.Point(41, 132);
			this.button3.Name = "button3";
			this.button3.Size = new System.Drawing.Size(131, 32);
			this.button3.TabIndex = 0;
			this.button3.Text = "Ver Medicamento";
			this.button3.UseVisualStyleBackColor = true;
			this.button3.Click += new System.EventHandler(this.Button3Click);
			// 
			// MainForm
			// 
			this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
			this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
			this.ClientSize = new System.Drawing.Size(284, 262);
			this.Controls.Add(this.button3);
			this.Controls.Add(this.button2);
			this.Controls.Add(this.button1);
			this.Name = "MainForm";
			this.Text = "farmacia";
			this.ResumeLayout(false);
		}
		private System.Windows.Forms.Button button3;
		private System.Windows.Forms.Button button2;
		private System.Windows.Forms.Button button1;
		
		void Button1Click(object sender, System.EventArgs e)
		{
			Form1 f = new Form1();
			f.Show();
		}
		
		void Button2Click(object sender, System.EventArgs e)
		{
			Form2 f2 = new Form2();
			f2.Show();
		}
		
		void Button3Click(object sender, System.EventArgs e)
		{
			Form3 f3 = new Form3();
			f3.Show();
		}
	}
}
