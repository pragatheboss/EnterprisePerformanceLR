CreateOrder()
{
	int rc,i;
	
	char temp[25];
	
	/* Search {p_searchItem} */
	
	lr_start_transaction("Ecomm_CreateOrder_103_Search");	

	web_url("index.php_4", 
		"URL={p_url}/index.php?controller=search&q={p_searchItem}&limit=10&timestamp=1653974866930&ajaxSearch=1&id_lang=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={p_url}/index.php?controller=my-account", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=Sort by","SaveCount=Search_count",LAST);
	
	web_reg_save_param("c_productID","LB=?id_product=","RB=&amp;controller=product\" title=\"\">","ORD=ALL",LAST);
	
	web_url("index.php_5", 
		"URL={p_url}/index.php?controller=search&orderby=position&orderway=desc&search_query={p_searchItem}&submit_search=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={p_url}/index.php?controller=my-account", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		EXTRARES, 
		/*"Url=/themes/default-bootstrap/img/jquery/uniform/sprite.png", "Referer={p_url}/themes/default-bootstrap/css/autoload/uniform.default.css", ENDITEM, 
		"Url=/themes/default-bootstrap/img/functional-bt-shadow.png", "Referer={p_url}/themes/default-bootstrap/css/product_list.css", ENDITEM, 
		"Url=/themes/default-bootstrap/img/price-container-bg.png", "Referer={p_url}/themes/default-bootstrap/css/product_list.css", ENDITEM,*/ 
		LAST);
	
	endTransaction(lr_eval_string("{Search_count}"),"Ecomm_CreateOrder_103_Search");
	
	lr_think_time(1);
	
	rc = atoi(lr_eval_string("{c_productID_count}"));
	
	i=rand()%rc+1;
		
	sprintf(temp,"{c_productID_%d}",i);
	
	lr_save_string(lr_eval_string(temp),"c_productID");


	/* AddToCart */
	
	lr_start_transaction("Ecomm_CreateOrder_104_AddToCart");
	
	web_reg_find("Text=id_product={c_productID}","SaveCount=AddToCart_count",LAST);

	web_submit_data("index.php_6", 
		"Action={p_url}/index.php?rand=1653974900340", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer={p_url}/index.php?controller=search&orderby=position&orderway=desc&search_query={p_searchItem}&submit_search=", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=controller", "Value=cart", ENDITEM, 
		"Name=add", "Value=1", ENDITEM, 
		"Name=ajax", "Value=true", ENDITEM, 
		"Name=qty", "Value=1", ENDITEM, 
		"Name=id_product", "Value={c_productID}", ENDITEM, 
		"Name=token", "Value={c_token}", ENDITEM, 
		EXTRARES, 
		"Url=/img/p/1/0/10-cart_default.jpg", "Referer={p_url}/index.php?controller=search&orderby=position&orderway=desc&search_query={p_searchItem}&submit_search=", ENDITEM, 
		LAST);

	endTransaction(lr_eval_string("{AddToCart_count}"),"Ecomm_CreateOrder_104_AddToCart");
	
	lr_think_time(1);
	
	/* Proceed toCheckout */
	
	lr_start_transaction("Ecomm_CreateOrder_105_ProceedtoCheckout");
	
	web_reg_find("Text=Proceed to checkout","SaveCount=ProceedtoCheckout_count",LAST);

	web_url("index.php_7", 
		"URL={p_url}/index.php?controller=order", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={p_url}/index.php?controller=search&orderby=position&orderway=desc&search_query={p_searchItem}&submit_search=", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/themes/default-bootstrap/img/cart-shadow.png", "Referer={p_url}/themes/default-bootstrap/css/modules/blockcart/blockcart.css", ENDITEM, 
		LAST);

	web_url("Proceed to checkout", 
		"URL={p_url}/index.php?controller=order&step=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={p_url}/index.php?controller=order", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);
	
	endTransaction(lr_eval_string("{ProceedtoCheckout_count}"),"Ecomm_CreateOrder_105_ProceedtoCheckout");
	
	lr_think_time(1);

	/* SummaryProceedtoCheckout */

	/* AddressProceedtoCheckout */
	
	lr_start_transaction("Ecomm_CreateOrder_106_ProceedtoCheckout1");
	
	web_reg_find("Text=Proceed to checkout","SaveCount=ProceedtoCheckout1_count",LAST);

	web_submit_data("index.php_8", 
		"Action={p_url}/index.php?controller=order", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer={p_url}/index.php?controller=order&step=1", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id_address_delivery", "Value=678197", ENDITEM, 
		"Name=same", "Value=1", ENDITEM, 
		"Name=message", "Value=", ENDITEM, 
		"Name=step", "Value=2", ENDITEM, 
		"Name=back", "Value=", ENDITEM, 
		"Name=processAddress", "Value=", ENDITEM, 
		LAST);
	
	endTransaction(lr_eval_string("{ProceedtoCheckout1_count}"),"Ecomm_CreateOrder_106_ProceedtoCheckout1");
	
	lr_think_time(1);

	/* Checkbox */

	/* ShippingProceedtoCheckout */

	lr_start_transaction("Ecomm_CreateOrder_107_ProceedtoCheckout2");
	
	web_reg_find("Text=Pay by bank wire","SaveCount=ProceedtoCheckout2_count",LAST);
	
	web_submit_data("index.php_9", 
		"Action={p_url}/index.php?controller=order&multi-shipping=", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer={p_url}/index.php?controller=order", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=delivery_option[678197]", "Value=2,", ENDITEM, 
		"Name=cgv", "Value=1", ENDITEM, 
		"Name=step", "Value=3", ENDITEM, 
		"Name=back", "Value=", ENDITEM, 
		"Name=processCarrier", "Value=", ENDITEM, 
		LAST);
	
	endTransaction(lr_eval_string("{ProceedtoCheckout2_count}"),"Ecomm_CreateOrder_107_ProceedtoCheckout2");
	
	lr_think_time(1);

	/* PaybyBankWire */

	lr_start_transaction("Ecomm_CreateOrder_108_Pay");
	
	web_reg_find("Text=I confirm my order","SaveCount=Pay_count",LAST);
	
	web_url("Pay by bank wire (order processing will be longer)", 
		"URL={p_url}/index.php?fc=module&module=bankwire&controller=payment", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={p_url}/index.php?controller=order&multi-shipping=", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		LAST);
	
	endTransaction(lr_eval_string("{Pay_count}"),"Ecomm_CreateOrder_108_Pay");
	
	lr_think_time(1);

	/* ConfirmMyOrder */
	
	web_reg_save_param("OrderID","LB=Do not forget to insert your order reference ","RB= in the subject of your bank wire",LAST);
	
	lr_start_transaction("Ecomm_CreateOrder_109_ConfirmOrder");
	
	web_reg_find("Text=Your order on My Store is complete","SaveCount=ConfirmOrder_count",LAST);
	
	web_submit_data("index.php_10", 
		"Action={p_url}/index.php?fc=module&module=bankwire&controller=validation", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer={p_url}/index.php?fc=module&module=bankwire&controller=payment", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=currency_payement", "Value=1", ENDITEM, 
		LAST);

	endTransaction(lr_eval_string("{ConfirmOrder_count}"),"Ecomm_CreateOrder_109_ConfirmOrder");
	
	lr_think_time(1);
	
	return 0;
}