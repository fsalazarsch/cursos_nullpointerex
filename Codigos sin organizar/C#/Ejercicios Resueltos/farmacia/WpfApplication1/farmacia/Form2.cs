/*
 * Created by SharpDevelop.
 * User: Carlos
 * Date: 11-07-2014
 * Time: 3:42
 * 
 * To change this template use Tools | Options | Coding | Edit Standard Headers.
 */
using System;
using System.Drawing;
using System.Windows.Forms;
using MySql.Data.MySqlClient;
 
namespace farmacia
{
	/// <summary>
	/// Description of Form2.
	/// </summary>
	public partial class Form2 : Form
	{
		public Form2()
		{
			//
			// The InitializeComponent() call is required for Windows Forms designer support.
			//
			InitializeComponent();
			
			//
			// TODO: Add constructor code after the InitializeComponent() call.
			//
		}
		
		void Button1Click(object sender, EventArgs e)
		{
			Coneccion c = new Coneccion();
			
			string sql = "Delete from medicamento where nombre = '"+textBox5.Text+"'";
			//MySqlCommand instruccion = new MySqlCommand(sql, c.conectar());
			MySqlCommand cmd = new MySqlCommand();
			cmd.Connection = c.conectar();
			cmd.CommandText = sql;
			cmd.ExecuteNonQuery();
			System.Windows.Forms.MessageBox.Show("Borrado "+textBox5.Text+" correctamente");
			
			this.Close();
		}
	}
}
