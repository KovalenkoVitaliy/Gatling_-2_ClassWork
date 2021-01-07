Action()
{

		web_reg_save_param_ex(
		"ParamName=CompName",
		"LB=<td><a href=\"/computers/",
		"RB=\">",
		"Ordinal=1",
		SEARCH_FILTERS,
		LAST);
	
	
	
	web_url("computers", 
		"URL=http://computer-database.gatling.io/computers", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);


	
	web_url("AAAAAAA1", 
		"URL=http://computer-database.gatling.io/computers/{CompName}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://computer-database.gatling.io/computers", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);


	web_submit_data("2832", 
		"Action=http://computer-database.gatling.io/computers/{CompName}", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://computer-database.gatling.io/computers/{CompName}", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=name", "Value={Param2}", ENDITEM, 
		"Name=introduced", "Value=", ENDITEM, 
		"Name=discontinued", "Value=", ENDITEM, 
		"Name=company", "Value={Param1}", ENDITEM, 
		LAST);

	return 0;
}