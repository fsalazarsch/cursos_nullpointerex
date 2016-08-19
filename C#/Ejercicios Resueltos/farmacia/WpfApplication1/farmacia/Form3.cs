/*
 * Created by SharpDevelop.
 * User: Carlos
 * Date: 11-07-2014
 * Time: 3:47
 * 
 * To change this template use Tools | Options | Coding | Edit Standard Headers.
 */
using System;
using System.Drawing;
using System.Windows.Forms;
using MySql.Data.MySqlClient;
using System.Data;


namespace farmacia
{
	/// <summary>
	/// Description of Form3.
	/// </summary>
	public partial class Form3 : Form
	{
		private MySqlDataAdapter mySqlDataAdapter;
		public Form3()
		{
			//
			// The InitializeComponent() call is required for Windows Forms designer support.
			//
			InitializeComponent();
			
			//
			// TODO: Add constructor code after the InitializeComponent() call.
			//
		}
		
		void BindingSource1CurrentChanged(object sender, EventArgs e)
		{
			
		}
		
		void DataGridView1CellContentClick(object sender, DataGridViewCellEventArgs e)
		{
			
		}
		
		void Form3Load(object sender, EventArgs e)
		{
 		Coneccion c = new Coneccion();
 		
 	
 		mySqlDataAdapter = new MySqlDataAdapter("select * from medicamento", c.conectar());
        DataSet DS = new DataSet();
        mySqlDataAdapter.Fill(DS);
        dataGridView1.DataSource = DS.Tables[0];
 
    
		}
	}
}
