
/*
 * Created by SharpDevelop.
 * User: Carlos
 * Date: 11-07-2014
 * Time: 1:02
 * 
 * To change this template use Tools | Options | Coding | Edit Standard Headers.
 */
using System;
using  MySql.Data.MySqlClient;

namespace farmacia
{
	/// <summary>
	/// Description of Class1.
	/// </summary>
	public class Coneccion
	{
		
		public MySqlConnection conectar()
		{
			MySqlConnection conn;
			string myConnectionString;
			myConnectionString = "server=127.0.0.1;uid=root;pwd=;database=farmacia;";

			try
			{
			    conn = new MySqlConnection();
			    conn.ConnectionString = myConnectionString;
			    conn.Open();
			    return conn;
			   // System.Windows.Forms.MessageBox.Show("Correcto");
			}
			catch (MySqlException ex)
			{
			    System.Windows.Forms.MessageBox.Show(ex.Message);
			    conn = new MySqlConnection(); 
			    return conn;
			}
		}
	}
}
