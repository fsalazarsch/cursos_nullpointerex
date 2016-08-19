/*
 * Created by SharpDevelop.
 * User: Felipe
 * Date: 11-07-2014
 * Time: 3:42
 * 
 * To change this template use Tools | Options | Coding | Edit Standard Headers.
 */
namespace farmacia
{
	partial class Form2
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
			this.textBox5 = new System.Windows.Forms.TextBox();
			this.label5 = new System.Windows.Forms.Label();
			this.SuspendLayout();
			// 
			// button1
			// 
			this.button1.Location = new System.Drawing.Point(95, 150);
			this.button1.Name = "button1";
			this.button1.Size = new System.Drawing.Size(75, 23);
			this.button1.TabIndex = 5;
			this.button1.Text = "Aceptar";
			this.button1.UseVisualStyleBackColor = true;
			this.button1.Click += new System.EventHandler(this.Button1Click);
			// 
			// textBox5
			// 
			this.textBox5.Location = new System.Drawing.Point(119, 75);
			this.textBox5.Name = "textBox5";
			this.textBox5.Size = new System.Drawing.Size(129, 20);
			this.textBox5.TabIndex = 4;
			// 
			// label5
			// 
			this.label5.Location = new System.Drawing.Point(12, 75);
			this.label5.Name = "label5";
			this.label5.Size = new System.Drawing.Size(101, 72);
			this.label5.TabIndex = 3;
			this.label5.Text = "Ingrese el nombre delmedicamento que quiere borrar";
			// 
			// Form2
			// 
			this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
			this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
			this.ClientSize = new System.Drawing.Size(284, 262);
			this.Controls.Add(this.button1);
			this.Controls.Add(this.textBox5);
			this.Controls.Add(this.label5);
			this.Name = "Form2";
			this.Text = "Borrar medicamento";
			this.ResumeLayout(false);
			this.PerformLayout();
		}
		private System.Windows.Forms.Label label5;
		private System.Windows.Forms.TextBox textBox5;
		private System.Windows.Forms.Button button1;
	}
}
