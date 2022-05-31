vuser_end()
{
	/* SignOut */
	
	lr_start_transaction("Ecomm_CreateOrder_999_Logout");
	
	web_reg_find("Text=Already registered?","SaveCount=Logout_count",LAST);

	web_url("Sign out", 
		"URL={p_url}/index.php?mylogout=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={p_url}/index.php?controller=order-confirmation&id_cart=4665700&id_module=3&id_order=440830&key=9e04cea3a8bb5602e5ef18a2f0f73286", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		LAST);
	
	endTransaction(lr_eval_string("{Logout_count}"),"Ecomm_CreateOrder_999_Logout");
	
	lr_think_time(1);
	
	return 0;
}
