//Added Boiler Plate

vuser_init()
{
	web_set_sockets_option("SSL_VERSION", "AUTO");
	
	lr_start_transaction("Ecomm_CreateOrder_001_Launch");
	
	web_reg_find("Text=Sign in","SaveCount=Launch_count",LAST);

	web_url("index.php", 
		"URL={p_url}/index.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		EXTRARES, 
		/*"Url=http://192.168.1.121:8008/ssdp/device-desc.xml", "Referer=", ENDITEM, 
		"Url=/themes/default-bootstrap/img/footer-bg.png", "Referer={p_url}/themes/default-bootstrap/css/global.css", ENDITEM, 
		"Url=/themes/default-bootstrap/font/fontawesome-webfont.woff?v=3.2.1", "Referer={p_url}/themes/default-bootstrap/css/global.css", ENDITEM, 
		"Url=/themes/default-bootstrap/img/icon/form-ok.png", "Referer={p_url}/themes/default-bootstrap/css/global.css", ENDITEM, 
		"Url=/themes/default-bootstrap/img/bg_bt.gif", "Referer={p_url}/themes/default-bootstrap/css/global.css", ENDITEM, 
		"Url=/themes/default-bootstrap/img/order-step-current.png", "Referer={p_url}/themes/default-bootstrap/css/global.css", ENDITEM, 
		"Url=/themes/default-bootstrap/img/order-step-a.png", "Referer={p_url}/themes/default-bootstrap/css/global.css", ENDITEM, 
		"Url=/themes/default-bootstrap/img/order-step-done-last.png", "Referer={p_url}/themes/default-bootstrap/css/global.css", ENDITEM, 
		"Url=/themes/default-bootstrap/img/order-step-done.png", "Referer={p_url}/themes/default-bootstrap/css/global.css", ENDITEM, 
		"Url=/themes/default-bootstrap/img/bankwire.png", "Referer={p_url}/themes/default-bootstrap/css/global.css", ENDITEM, 
		"Url=/themes/default-bootstrap/img/cheque.png", "Referer={p_url}/themes/default-bootstrap/css/global.css", ENDITEM,*/ 
		LAST);
	
	endTransaction(lr_eval_string("{Launch_count}"),"Ecomm_CreateOrder_001_Launch");
	
	lr_think_time(1);

	/* SignIn */
	
	lr_start_transaction("Ecomm_CreateOrder_101_SignIn1");
	
	web_reg_find("Text=Already registered?","SaveCount=SignIn1_count",LAST);

	web_url("index.php_2", 
		"URL={p_url}/index.php?controller=my-account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={p_url}/index.php", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);
	
	endTransaction(lr_eval_string("{SignIn1_count}"),"Ecomm_CreateOrder_101_SignIn1");
	
	lr_think_time(1);

	/* Enter Details and Sign In */
	
	web_reg_find("Text=My account","SaveCount=SignIn2_count",LAST);
	
	web_reg_save_param("c_token","LB=var static_token = '","RB='",LAST);
	
	lr_start_transaction("Ecomm_CreateOrder_102_SignIn2");

	web_submit_data("index.php_3", 
		"Action={p_url}/index.php?controller=authentication", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer={p_url}/index.php?controller=authentication&back=my-account", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=email", "Value={UserID}", ENDITEM, 
		"Name=passwd", "Value={p_password}", ENDITEM, 
		"Name=back", "Value=my-account", ENDITEM, 
		"Name=SubmitLogin", "Value=", ENDITEM, 
		LAST);
	
	endTransaction(lr_eval_string("{SignIn2_count}"),"Ecomm_CreateOrder_102_SignIn2");
	
	lr_think_time(1);
	
	return 0;
}
